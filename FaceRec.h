#include <opencv2\imgcodecs.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2\imgproc.hpp>
#include<opencv2/objdetect.hpp>
#include <string>
#include<fstream>
#include <Windows.h>
using namespace std;
using namespace cv;
Mat imgh, imgh1; //pat;
void paths(string p0, int a11)
{
	imgh = imread(p0);
	//imgh[1] = imread(p1);
	//imgh[2] = imread(p2);
}
string paths(string p)
{
	string pat = p;
	return pat;
}
void capt(int n, int l, string email) {
	VideoCapture cap(0);
	Mat frame;
	//Mat img1;
	for (int k = 0; k < n; k++)
	{
		Sleep(5000);
		if (!cap.isOpened()) {
			cout << "Error initializing video camera!" << endl;
			break;
		}
		while (1)
		{
			cap >> frame;
			imshow(" ", frame);

			if (waitKey(1) < 0)
			{
				if (k == 0 && l == 4)
				{
					imwrite(email + "0.jpg", frame);
					break;
				}
				if (k == 0 && l != 4)
				{
					imwrite(email + "1.jpg", frame);
					//	waitKey(5000);
					break;
				}
				if (k == 1 && l != 4)
				{
					imwrite(email + "2.jpg", frame);
					//waitKey(5000);
					break;
				}
				if (k == 2 && l != 4)
				{
					imwrite(email + "3.jpg", frame);
					//waitKey(5000);
					break;
				}
			}
		}
	}
}
Mat edit(Mat img) {
	int x, y, x1, y1;
	Mat imgcrop;
	CascadeClassifier facecascade;
	facecascade.load("Resources/haarcascade_frontalface_default.xml");
	vector<Rect>faces;
	facecascade.detectMultiScale(img, faces, 1.1, 10);
	for (int i = 0; i < faces.size(); i++)
	{
		rectangle(img, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 0);
	}
	y = faces[faces.size() - 1].tl().y;
	x = faces[faces.size() - 1].tl().x;
	x1 = (faces[faces.size() - 1].br().x) - (faces[faces.size() - 1].tl().x);
	y1 = (faces[faces.size() - 1].br().y) - (faces[faces.size() - 1].tl().y);
	//cout <<"\n"<< y << "\n" << x << "\n" << x1 << "\n" << y1;
	Rect roi(x, y, x1, y1);;
	imgcrop = img(roi);
	Mat img1, img2, img3, img4, imgh;
	resize(imgcrop, imgh, Size(320, 320));
	cvtColor(imgh, img1, COLOR_BGR2GRAY);
	//addWeighted(img1, 1.5, imgh, -0.5, 0,imgh);
	GaussianBlur(img1, img2, Size(7, 7), 5, 0);

	Canny(img2, img3, 50, 0);

	threshold(img3, img4, 50, 255, THRESH_BINARY);
	return img4;
}
float compare(Mat img5, Mat img6)
{
	int  c = 0;
	float dimensions, percentage;

	Mat x, y, a, b;
	for (int i = 0; i < 320; i < i++)
	{
		x = img5.row(i);
		y = img6.row(i);
		for (int j = 0; j < 320; j++)
		{
			a = x.col(j);
			b = y.col(j);
			if (a.data[0] == b.data[0])
			{
				c++;
			}
		}
	}

	dimensions = 320 * 320;
	percentage = (c / dimensions) * 100;
	return percentage;
}