#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include <fstream>
#include <Windows.h>
#include <time.h>
#include "FaceRec.h"
using namespace std;
int a = 0;
string Y;
string idcheck(string id);
string stringsort(string sort);
bool userncheck(string username);
bool emailcheck(string email);
bool phonecheck(string no);
string passwordcheck(string password);
string passwordloop(string pass1);
string capfirstletter(string str);
void regist();
void adminLogin();
void adminmenu();
int checkStudentdata(string email, string password);
int studentView();
int studentLogin();
string Residence(string str);
void menu();
void recovery();
void attendance(string email);
void Academic(char y);
void attendancebyemail(string email, string password);
string capfirstletter(string str, int qq);
bool attendancecheck(string email, string date);
int main() {

	menu();
}

void regist()
{
	system("cls");
	cout << "-----------------------------------------Welcome-----------------------------------------";
	int  choose, x;
	string id, name, q, w, e;
	string fullname, username, email, pass1, pass2, city, phoneno, favteam;
	cout << "\nPlease Enter your fullname in English: ";
	getline(cin, fullname);
	getline(cin, fullname);
	name = capfirstletter(fullname);
	while (name == "false")
	{
		cout << "\nPlease Enter your fullname in English (Quadrant & Letters only): ";
		getline(cin, fullname);
		name = capfirstletter(fullname);
	}
	cout << "\nPlease Create your username in English: ";
	getline(cin, username);
	while (userncheck(username) != true)
	{
		cout << "\nPlease Create your username in English (lowercase letters,number and (_) only can be used: ";
		getline(cin, username);
	}
	cout << "\nPlease Enter your City of residence: ";
	cin >> city;
	while (Residence(city) == "false")
	{
		cout << "\nPlease Enter your Correct name of City of residence (Letters only): ";
		cin >> city;
	}
	cout << "\n1.Egyptian\n2.Expatriate\n";
	cin >> choose;
	if (choose == 1)
	{
		system("cls");
		cout << "Please Enter your National ID: ";
		cin >> id;
		id = idcheck(id);
		cout << "\nPlease Enter your Egyptian phone number: ";
		cin >> phoneno;
		while (!phonecheck(phoneno))
		{
			cout << "\nPlease Enter your Egyptian phone number: ";
			cin >> phoneno;
		}
	}
	if (choose == 2)
	{
		system("cls");
		cout << "Please Enter your PassPort ID: ";
		cin >> id;
		idcheck(id);
	}
ac:
	cout << "\nPlease enter your academic year: ";
	cin >> Y[0];
	switch (Y[0])
	{
	case '1':
	case '2':
	case '3':
	case '4':
	{
		goto enteremail;
		break;
	}
	default:
	{
		cout << "\nwrong input\n"; goto ac;
	}
	}
enteremail:
	cout << "\nPlease Enter your E-mail: ";
	getline(cin, email);
	getline(cin, email);
	while (emailcheck(email) == false)
	{
		cout << "\nPlease Enter your E-mail: ";
		getline(cin, email);
	}


	cout << "\nPlease create your password: ";
	cin >> pass1;
	cout << "\n";
	pass1 = passwordloop(pass1);
	cout << "\nPlease confirm your password: ";
	cin >> pass2;
	while (pass1 != pass2)
	{
		cout << "\nPlease create your password: ";
		cin >> pass1;
		pass1 = passwordloop(pass1);
		cout << "\nPlease confirm your password: ";
		cin >> pass2;
	}
	cout << "\nFor Recovery: \t What's your favourite team: ";
	cin >> favteam;
	favteam = capfirstletter(favteam, 1);
	while (favteam == "false")
	{
		cout << "\nEnter the name correctely: ";
		cin >> favteam;
		favteam = capfirstletter(favteam, 1);
	}
	cout << "\nPress any Key to Setup your Face ID ";
	getchar(); getchar();
	goto face;
	if (1)
	{
	face:
		system("cls");
		char y;

		cout << " --------------------- PLEASE GET READY BEFORE GETTING YOUR FACE ID---------------------\nPress Y when you are ready to Take photos\n";
		cin >> y;
		Sleep(5000);
		while (y != 'Y' && y != 'N')
		{
			cout << "Wrong Choice\n";
			cout << " --------------------- PLEASE GET READY BEFORE GETTING YOUR FACE ID---------------------\nPress Y when you are ready to Take photos\n";
			cin >> y;
		}
		if (y == 'Y')
		{
			string q, w, e;
			Mat o, o1, o2, p, p1, p2, n, n1, n2;
			capt(3, 3, email);
			q = email + "1.jpg";
			w = email + "2.jpg";
			e = email + "3.jpg";
			o2 = imread(q);
			resize(o2, o1, Size(320, 320));
			o = edit(o1);
			p2 = imread(w);
			resize(p2, p1, Size(320, 320));
			p = edit(p1);
			n2 = imread(e);
			resize(n2, n1, Size(320, 320));
			n = edit(n1);
			cout << "Face Id Recognized \n";
			goto qwerty;
		}
	}
qwerty:
	ifstream read;
	read.open("data.txt");
	if (read)
	{
		int recordFound = 0;
		string line;
		while (getline(read, line)) {
			if (line == email + ".txt")
			{
				recordFound = 1;
				break;
			}
		}
		if (recordFound == 1)
		{
			cout << "\n email already Register. Please choose another email ";
			goto enteremail;
			getchar(); getchar();
			read.close();

		}
	}
	read.close();
	ofstream out;
	out.open("data.txt", ios::app);
	out << email + ".txt" << "\n";
	out.close();

	ofstream slist;
	slist.open("students.txt", ios::app);
	slist << fullname + ".txt" << "\n";
	slist.close();

	ofstream out1;
	string temp = email + ".txt";
	out1.open(temp.c_str());
	out1 << "fullname		:" << name << "\n";
	out1 << "username		:" << username << "\n";
	out1 << "email	:" << email << "\n";
	out1 << "id		:" << id << "\n";
	out1 << "Academic year		:" << Y[0] << "\n";
	out1 << "phone number		:" << phoneno << "\n";
	out1 << "city		:" << city << "\n";
	out1 << "password		:" << pass1 << "\n";
	out1 << "Favourite team		:" << favteam << "\n";
	out1.close();

	cout << "\n-----------------------------------Student Registered Successfully-----------------------------------";

	cout << "\n Please any key to continue..";
	getchar(); getchar();
	char goo;
	system("cls");
	cout << "\n0.Exit\n1.Return to main menu\n2.Go to your account\n";
	cin >> goo;
	while (goo != '0' && goo != '1' && goo != '2')
	{
		cout << "wrong choice\n";
		cout << "\n0.Exit\n1.Return to main menu\n2.Go to Login Page\n";
		cin >> goo;
	}
	if (goo == 0)
	{
		exit(0);
	}
	if (goo == 1)
	{

		menu();
	}
	if (goo == 2)
	{
		studentLogin();
	}
}
//{
//qwerty:
//cout << "capture three photos:\npress any key to capture";
//waitKey(2000);
//capt(3, 3, email);
//q = email + "1.jpg";
//w = email + "2.jpg";
//e = email + "3.jpg";
//Mat o, p, n;
//o = imread(q);
//p = imread(w);
//n = imread(e);
//if (compare(o, p) < 90 || compare(o, n) < 90 || compare(p, n) < 90)
//{
//	cout << "wrong capture please try again\n";
//	goto qwerty;
//}
//}

string capfirstletter(string str)
{
	int u = 0;
	string name, result = "";
	int spc = 0, n = 0, spce = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90) || str[i] == 32)
		{
			n++;
		}
	}
	if (n == str.size())
	{
		n = 0;
		for (int i = 1; i > 0; i++)
		{
			name = str.substr(spce, str.find(' ', spce) - spce);
			spc = str.find(' ', spc + 1);
			spce = spc + 1;
			name[0] = toupper(name[0]);
			name = name.insert(name.size(), " ");
			if (n > 0)
			{
				n = result.size();

			}
			result = result.insert(n, name);
			u++;
			if (n == 0)
			{
				n = name.size();
			}
			if (spce == 0 && u >= 4)
			{
				return result;
			}
			if (spce == 0 && u < 4)
			{
				return "false";
			}
		}

	}
	else if (n != str.size())
	{
		return "false";
	}
}
string capfirstletter(string str, int qq)
{
	int u = 0;
	string name, result = "";
	int spc = 0, n = 0, spce = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90) || str[i] == 32)
		{
			n++;
		}
	}
	if (n == str.size())
	{
		n = 0;
		result = str;
		result[0] = toupper(result[0]);
		return result;
	}
	else if (n != str.size())
	{
		return "false";
	}
}
string Residence(string str)
{
	string name, result = "";
	int spc = 0, n = 0, spce = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			n++;
		}
	}
	if (n == str.size())
	{
		n = 0;
		for (int i = 1; i > 0; i++)
		{
			name = str.substr(spce, str.find(' ', spce) - spce);
			spc = str.find(' ', spc + 1);
			spce = spc + 1;
			name[0] = toupper(name[0]);
			name = name.insert(name.size(), " ");
			if (n > 0)
			{
				n = result.size();

			}
			result = result.insert(n, name);
			if (n == 0)
			{
				n = name.size();
			}
			if (spce == 0)
			{
				return result;
			}
		}
	}
	else if (n != str.size())
	{
		return "false";
	}
}
bool emailcheck(string email)
{
	int u = 0;
	char y[50] = { 0 };
	string x;
	for (int i = 0; i < email.size(); i++)
	{
		if (email[i] != ' ')
		{
			y[u] = email[i];
			u++;
		}
	}
	y[u] = '\0';
	for (int i = 0; i < strlen(y); i++)
	{
		if ((y[i] >= 65 && y[i] <= 90))
		{
			y[i] = tolower(y[i]);
		}
	}
	int k = 0;
	x = y;
	if (x.find("@gmail.com") < -1 || x.find("@outlook.com") < -1 || x.find("@hotmail.com") < -1 || x.find("@yahoo.com") > -1)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool phonecheck(string no)
{

	int j = 0;
	string x = no, y;
	if (x == "0")
	{
		goto ret;
	}
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] > 47 && x[i] < 58)
		{
			j++;

		}
		if (!(x[i] > 47 && x[i] < 58))
		{
			goto ret;
		}
	}
	if (j == x.size())
	{


		y = x.substr(0, 3);
		if (y == "010" || y == "011" || y == "012" || y == "015")
		{
			if (x.size() == 11)
			{
				return true;
			}
			if (x.size() != 11)
			{
				return false;
			}
		}
		else if (y != "010" && y != "011" && y != "012" && y != "015")
		{
		ret:
			return false;
		}
	}
	else
	{
		goto ret;
	}
}
bool userncheck(string username)
{
	int c = 0;
	for (int i = 0; i < username.length(); i++)
	{
		char x = username.at(i);
		int k;
		k = x;

		if ((k > 47 && k < 58) || (k > 96 && k < 123) || (k == 95))
		{
			c++;
		}
		else if (!(k > 47 && k < 58) && !(k > 96 && k < 123) && !(k == 95))
		{
			c = 0;
		}
	}
	if (c == username.length())
	{
		return true;
	}
	if (c != username.length())
	{
		return false;
	}
}

string passwordcheck(string password);
string passwordloop(string pass2) {
	string pass1 = pass2;
	int i = 0;
	while ((passwordcheck(pass1) == "Very weak") || (passwordcheck(pass1) == "Weak") || (passwordcheck(pass1) == "Wrong input") || (passwordcheck(pass1) == "Short"))
	{
		if ((passwordcheck(pass1) == "Short" && passwordcheck(pass1) == "Very weak"))
		{
			cout << "Very weak";
		}
		else if (((passwordcheck(pass1) != "Short") && passwordcheck(pass1) == "Very weak"))
		{
			cout << "Weak";
		}
		else if (((passwordcheck(pass1) != "Short") && passwordcheck(pass1) == "weak"))
		{
			cout << "Weak";
		}
		else if ((passwordcheck(pass1) == "Short" && passwordcheck(pass1) == "Very weak"))
		{
			cout << "Very Weak";
		}
		else if ((passwordcheck(pass1) == "Short" && passwordcheck(pass1) == "weak"))
		{
			cout << "Weak";
		}
		else if ((passwordcheck(pass1) == "Short" || passwordcheck(pass1) == "Medium") || (passwordcheck(pass1) == "Short" || passwordcheck(pass1) == "Strong"))
		{
			cout << "Weak";
		}
		else if (passwordcheck(pass1) == "Very weak")
		{
			cout << "Very weak";
		}
		else if (passwordcheck(pass1) == "Weak")
		{
			cout << "Weak";
		}
		else if (passwordcheck(pass1) == "Wrong input")
		{
			cout << "Wrong input";
		}
		cout << "\nPlease create a stronger password: \n* Higher Case letters\n* Lower Case letters\n* Numbers\n* Special symbols(!, #, $, %, &, *, @, _, ^)\n";
		cin >> pass1;
		i++;
	}
	if (passwordcheck(pass1) == "Medium")
	{
		cout << "Medium\nCreated\n";
	}
	else if (passwordcheck(pass1) == "Strong")
	{
		cout << "Strong\nCreated\n";
	}
	return pass1;
}
string stringsort(string sort)
{
	char temp;
	for (int i = 0; i < sort.size(); i++)
	{
		for (int j = 0; j < sort.size() - 1; j++)
		{
			if (sort[j] > sort[j + 1])
			{
				temp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = temp;
			}
		}
	}
	return sort;
}
string passwordcheck(string password)
{
	int k = 0, a = 0, b = 0, c = 0, d = 0;
	string y, sorted;
	char p1[50] = { 0 }, p2[50] = { 0 }, p3[50] = { 0 }, p4[50] = { 0 };
	y = password;
	sorted = stringsort(password);
	for (int h = 0; h < sorted.size(); h++)
	{
		if (sorted[h] >= 65 && sorted[h] <= 90)
		{
			p1[a] = sorted[h];
			a++;
		}
		if (sorted[h] >= 97 && sorted[h] <= 122)
		{
			p2[b] = sorted[h];
			b++;
		}
		if (sorted[h] >= 48 && sorted[h] <= 57)
		{
			p3[c] = sorted[h];
			c++;
		}
		if (sorted[h] == 33 || (sorted[h] >= 35 && sorted[h] <= 38) || sorted[h] == 42 || sorted[h] == 64 || sorted[h] == 94 || sorted[h] == 95)
		{
			p4[d] = sorted[h];
			d++;
		}
	}
	p1[a] = '\0';
	p2[b] = '\0';
	p3[c] = '\0';
	p4[d] = '\0';
	if (y.size() < 8)
	{
		return "Short";
	}
	if ((((strlen(p1) / sorted.size()) * 100) == 100) || (((strlen(p2) / sorted.size()) * 100) == 100) || (((strlen(p3) / sorted.size()) * 100) == 100) || (((strlen(p4) / sorted.size()) * 100) == 100))
	{
		return "Very weak";
	}
	if (((((strlen(p1) + strlen(p2)) / sorted.size()) * 100) == 100) || ((((strlen(p1) + strlen(p3)) / sorted.size()) * 100) == 100) || ((((strlen(p1) + strlen(p4)) / sorted.size()) * 100) == 100) || ((((strlen(p3) + strlen(p2)) / sorted.size()) * 100) == 100) || ((((strlen(p4) + strlen(p2)) / sorted.size()) * 100) == 100) || ((((strlen(p3) + strlen(p4)) / sorted.size()) * 100) == 100))
	{
		return "Weak";
	}
	else if (((((strlen(p1) + strlen(p2) + strlen(p3)) / sorted.size()) * 100) == 100) || ((((strlen(p1) + strlen(p2) + strlen(p4)) / sorted.size()) * 100) == 100) || ((((strlen(p1) + strlen(p3) + strlen(p4)) / sorted.size()) * 100) == 100) || ((((strlen(p2) + strlen(p3) + strlen(p4)) / sorted.size()) * 100) == 100))
	{
		return "Medium";
	}
	else if ((((strlen(p1) + strlen(p2) + strlen(p3) + strlen(p4)) / sorted.size()) * 100) == 100)
	{
		return "Strong";
	}
	else
	{
		return "Wrong input";
	}
}
string idcheck(string id)
{
	int k = 0;
	while (id.size() < 10 || id.size() > 18)
	{
	here:
		cout << "Enter a true id number: ";
		cin >> id;
	}
	for (int i = 0; i < id.size(); i++)
	{
		if (!(id[i] >= 48 && id[i] <= 57))
		{
			goto here;
		}
		if ((id[i] >= 48 && id[i] <= 57))
		{
			k++;
		}
	}
	if (k == id.size())
	{

		return id;
	}
}
void adminmenu()
{
	int goBack = 0;
	while (1)
	{
	goback:
		system("cls");
		cout << "\n 1 Register a Student\n";
		cout << "\n 2 Take Face ID for a Student\n";
		cout << "\n 3 Students List\n";
		cout << "\n 4 Modify a Student Data\n";
		cout << "\n 0. Go Back <- \n";
		int choice;

		cout << "\n Enter you choice: " << endl;
		cin >> choice;
		getchar();
		switch (choice)
		{
		case 1: regist(); break;
		case 0: goBack = 0; break;
		case 2: goBack = 2; break;
		case 3: goBack = 3; break;
		case 4: goBack = 4; break;
		default: cout << "\n Invalid choice. Enter again ";
			getchar();
		}

		if (goBack == 0)
		{
			menu();
		}
		if (goBack == 2)
		{
			string email;
			cout << "Enter student Email: ";
			cin >> email;
			char y;

			cout << " * PLEASE GET READY BEFORE GETTING YOUR FACE ID\nY.To Take photos\nN.to return back";
			cin >> y;
			Sleep(5000);
			while (y != 'Y' && y != 'N')
			{
				cout << "Wrong Choice\n";
				cout << " * PLEASE GET READY BEFORE GETTING YOUR FACE ID\nY.To Take photos\nN.to return back";
				cin >> y;
			}
			if (y == 'Y')
			{
				string q, w, e;
				Mat o, o1, o2, p, p1, p2, n, n1, n2;
				capt(3, 3, email);
				q = email + "1.jpg";
				w = email + "2.jpg";
				e = email + "3.jpg";
				o2 = imread(q);
				resize(o2, o1, Size(320, 320));
				o = edit(o1);
				p2 = imread(w);
				resize(p2, p1, Size(320, 320));
				p = edit(p1);
				n2 = imread(e);
				resize(n2, n1, Size(320, 320));
				n = edit(n1);
				system("cls");
				cout << "Face Id Recognized again\n";
				goto qwerty;
			}
		}
	qwerty:

		if (goBack == 3)
		{
			system("cls");
			cout << "-------------------------------------------Students List-------------------------------------------\n\n\n";
			int i = 0;
			string student;
			ifstream list("students.txt", ios::in);
			while (getline(list, student))
			{
				cout << i + 1 << "." << student << "\n";
				i++;
			}
			list.close();
			int ok = 0;
			cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
			cout << "\n0.Main Menu\n\n1.return back";
			cin >> ok;
		again:
			switch (ok)
			{
			case 0:menu(); break;
			case 1:goto goback; break;
			default:
				cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
				cout << "\n Invalid choice. Enter again ";
				cout << "\n0.Main Menu\n\n1.return back";
				cin >> ok;
				goto again;
			}
		}


		if (goBack == 4)
		{
			system("cls");
			string  email;
			cout << "Enter the Email of the student: ";
			cin >> email;
			cout << "\n";
			int  choose;
			string id, name, q, w, e;
			string fullname, username, pass1, pass2, city, phoneno, favteam;
			ifstream stdata(email + ".txt");
			ofstream std2(email + "2.txt");
			cout << "Please Enter your fullname in English: ";
			getline(cin, fullname);
			getline(cin, fullname);
			name = capfirstletter(fullname);
			while (name == "false")
			{
				cout << "Please Enter your fullname in English (Quadrant & Letters only): ";
				getline(cin, fullname);
				name = capfirstletter(fullname);
			}
			cout << "Please Create your username in English: ";
			cin >> username;
			while (userncheck(username) != true)
			{
				cout << "Please Create your username in English(lowercase letters,number and (_) only can be used: ";
				cin >> username;
			}
			cout << "Please Enter your City of residence: ";
			cin >> city;
			while (Residence(city) == "false")
			{
				cout << "Please Enter your Correct name of City of residence (Letters only): ";
				cin >> city;
			}
			cout << "1.Egyptian\n2.Expatriate\n";
			cin >> choose;
			if (choose == 1)
			{
				cout << "Please Enter your National ID: ";
				cin >> id;
				idcheck(id);
				cout << "Please enter your academic year: ";
				cin >> Y;

				cout << "Please Enter your Egyptian phone number: ";
				cin >> phoneno;
				while (!phonecheck(phoneno))
				{
					cout << "Please Enter your Egyptian phone number: ";
					cin >> phoneno;
				}
			}
			if (choose == 2)
			{
				cout << "Please Enter your PassPort ID: ";
				cin >> id;
				idcheck(id);
			}

			cout << "Please create your password: ";
			cin >> pass1;
			pass1 = passwordloop(pass1);
			cout << "Please confirm your password: ";
			cin >> pass2;
			while (pass1 != pass2)
			{
				cout << "Please create your password: ";
				cin >> pass1;
				pass1 = passwordloop(pass1);
				cout << "Please confirm your password: ";
				cin >> pass2;
			}
			cout << "For Recovery: \n What's your favourite team: ";
			cin >> favteam;
			ofstream slist;
			slist.open("students.txt", ios::app);
			slist << fullname + ".txt" << "\n";
			slist.close();

			ofstream out1;
			string temp = email + ".txt";
			out1.open(temp.c_str());
			out1 << "fullname		:" << name << "\n";
			out1 << "username		:" << username << "\n";
			out1 << "email	:" << email << "\n";
			out1 << "id		:" << id << "\n";
			out1 << "academic year		:" << Y << "\n";
			out1 << "phone number		:" << phoneno << "\n";
			out1 << "city		:" << city << "\n";
			out1 << "password		:" << pass1 << "\n";
			out1 << "Favourite team		:" << favteam << "\n";
			out1.close();

			cout << "\n Student Registered Successfully !!";

			cout << "\n Please any key to continue..";
			getchar(); getchar();
		}
	}
}

void adminLogin()
{
	int x = 0;
	system("cls");
	cout << "\n --------- Admin Login --------";

	string username;
	string password;
Slogin:
	cout << "\n Enter username : ";
	cin >> username;
	cout << "\n Enter password : ";
	cin >> password;

	if (username == "admin" && password == "admin@2")
	{
		adminmenu();
		getchar();
		//delay();
	}
	else
	{
		cout << "\n Error ! Invalid Username or Password";
		goto Slogin;
		getchar(); getchar();
	}
}
int checkStudentdata(string email, string password)
{

	ifstream read;
	read.open("data.txt");
	int recordFound = 0;
	if (read) {
		string line;
		string temp = email + ".txt";
		while (getline(read, line)) {
			if (line == temp)
			{
				recordFound = 1;
			}
		}
	}
	read.close();


	if (recordFound == 1)
	{
		int w = 0;
		string s = "password		:", l;
		string h = s + password;
		ifstream a;
		a.open(email + ".txt");
		while (a)
		{
			getline(a, l);
			if (l == h)
			{
				w++;
			}
		}
		if (w == 1) {
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "login sucessfully-------------------------------------------Welcome-----------------------------------------------------" << endl;
			cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
			cout << "\nYour Data: \n";
			ifstream read;
			string filename = email + ".txt";
			read.open(filename);
			int line_number = 0;
			string line;
			while (line_number != 5 && getline(read, line)) {
				if (line_number < 3)
					cout << line << "\n";
				if (line_number == 4)
					Y = line.substr(16, 1);
				++line_number;
			}
			read.close();
			if (password == line)
				return 1;
			else

				return 0;
		}
	}
	else
		cout << "\nWRONG EMAIL OR PASSWORD\n" << endl; a++;
	cout << "\nPress any key to enter your data again\n" << endl;
	getchar(); getchar();
	if (a != 3)
	{
		studentView();
	}
	else if (a == 3)
	{
		recovery();
		return 0;
	}
}
int studentView()
{
	system("cls");
	int x = 0;
	char y = 0;
	string email, password;
Loginpage:
	cout << "-----------------------------------------------------Welcome-----------------------------------------------------" << endl;
	cout << "\n Enter email : ";
	cin >> email;

	cout << "\n Enter password : ";
	cin >> password;
	int goBack = 0;
	system("cls");
	checkStudentdata(email, password);
student_menu:
returnback:
	system("cls");
	cout << "\n-----------------------------------------------------Choose-----------------------------------------------------\n";
	cout << "\n 0 Return Main Menu\n";
	cout << "\n 1 Take attendance by face ID\n";
	cout << "\n 2 Take attendance without face ID \n";
	cout << "\n 3 Show your courses\n";
	cout << "\n 5 Exit\n";
	int choice;

	cout << "\n Enter you choice: " << endl;
	cin >> choice;
	getchar();
	switch (choice)
	{
	case 1: goBack = 1; break;
	case 2: goBack = 2; break;
	case 3: goBack = 3; break;
	case 0: goBack = 0; break;
	case 5: goBack = 5; break;
	default: cout << "\n Invalid choice. Enter again ";
		getchar();
	}
	if (goBack == 0)
	{
		menu();
	}
	if (goBack == 1)
	{
	attend:
		system("cls");
		cout << " --------------------- PLEASE GET READY BEFORE GETTING YOUR FACE ID---------------------\nPress Y when you are ready to Take photos\n";
		cin >> y;
		Sleep(5000);
		while (y != 'Y' && y != 'N')
		{
			cout << "\nWrong Entery\n ";
			cout << " --------------------- PLEASE GET READY BEFORE GETTING YOUR FACE ID---------------------\nPress Y when you are ready to Take photos\n";
			cin >> y;
		}
		if (y == 'Y')
		{
			capt(1, 4, email);
			string q, w, e, k;
			Mat o, o1, o2, p, p1, p2, n, n1, n2, k1, k2, k3;
			k = email + "0.jpg";
			q = email + "1.jpg";
			w = email + "2.jpg";
			e = email + "3.jpg";
			//Mat o, p, n;
			k3 = imread(k);
			resize(k3, k2, Size(320, 320));
			k1 = edit(k2);
			o2 = imread(q);
			resize(o2, o1, Size(320, 320));
			o = edit(o1);
			p2 = imread(w);
			resize(p2, p1, Size(320, 320));
			p = edit(p1);
			n2 = imread(e);
			resize(n2, n1, Size(320, 320));
			n = edit(n1);
		 if (compare(k1, o) >= 94 || compare(k1, p) >= 94 || compare(k1, n) >= 94)
			{
				system("cls");
				ofstream hist(email + "hist.txt", ios::app);
				// current date and time on the current system
				time_t now = time(0);
				// convert now to string form
				char* date_time = ctime(&now);
				if (attendancecheck(email, date_time) == true)
				{
					cout << "\nYou already attended Today\n\nPress any key to continue\n";
					getchar(); getchar();
					goto done;
				}
				else
				{
					cout << "-------------------------------------------------Atended-------------------------------------------------\n";
					cout << "Press any key to continue\n";
					getchar();
					hist << date_time << "\n";
					hist.close();
				}
				system("cls");
				int y;
			done:
				system("cls");
				cout << "\n\n0.Return to menu:\n\n1.Attendance history: ";
				cin >> y;
				while (y != 0 && y != 1)
				{
					cout << "\nWrong choice\n";
					cout << "\n\n0.Return to menu:\n\n1.Attendance history: ";
					cin >> y;
				}
				if (y == 0)
				{
					menu();
				}
				else
				{
					system("cls");
					string x;
					ifstream hist(email + "hist.txt");
					while (hist)
					{
						getline(hist, x);
						cout << "\n" << x << "\n";
					}
					hist.close();
					cout << "----------------------------Press any key to continue----------------------------";
					getchar(); getchar();
					int kl = 0;
					cout << "\n\n0.Exit\n\n1.Return to menu\n\n2.login page\n\n3.return back\n";
					cin >> kl;
					switch (kl) {
					case 0:exit(0); break;
					case 1:menu(); break;
					case 2:goto Loginpage; break;
					case 3:goto returnback; break;
					}
				}
			}
			else
			{
				cout << "\nDidn't Recognize\nPress any key to continue\n";
				getchar(); getchar();
				goto attend;
			}
		}
		else if (y == 'N')
		{
			Sleep(5000);
			goto attend;
		}
		return x;
	}
	if (goBack == 5)
	{
		exit(0);
	}

	if (goBack == 3) {
		string c;
		ifstream acd(email + ".txt");
		Academic(Y[0]);
		int z;
	enter_choice:
		cout << "\n\npress 0 to go back : ";
		cin >> z;
		if (z == 0) {
			system("cls");
			goto student_menu;

		}
		else {
			cout << "\nINVALID CHOICE TRY AGAIN: ";
			goto enter_choice;
		}

	}
	if (goBack == 2) {
		attendancebyemail(email, password);
		cout << "----------------------------Press any key to continue----------------------------";
		getchar(); getchar();
		system("cls");
		int kl = 0;
		cout << "\n\n0.Exit\n\n1.Return to menu\n\n2.login page\n\n3.return back\n";
		cin >> kl;
		switch (kl) {
		case 0:exit(0); break;
		case 1:menu(); break;
		case 2:goto Loginpage; break;
		case 3:goto returnback; break;
		}
	}
}

int studentLogin()
{
	int x = 0;
	system("cls");
	cout << "\n -------------------- Student Login ----------------------";
	x = studentView();
	return x;
}
void menu() {
	int x = 0;
	system("cls");
to:
	cout << "\n\t\t\t\t\t------ Computer Engineering Management System ------\t\t\t\t\t\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\n";
	cout << "-------------------------------------------------|1. Student Login    |-------------------------------------------------\n";
	cout << "\n";
	cout << "-------------------------------------------------|2. Student Register |-------------------------------------------------\n";
	cout << "\n";
	cout << "-------------------------------------------------|3. Admin Login      |-------------------------------------------------\n";
	cout << "\n";
	cout << "-------------------------------------------------|0. Exit             |-------------------------------------------------\t\t\t\t\t\n";
	int choice;
	cout << "\n\n------------------------------------------------------------------------------------------------------------------------\n\n";
	cout << "\n\n---Enter you choice:";
	cin >> choice;
	while ((choice != 0 && choice != 1 && choice != 2 && choice != 3))
	{
		cout << "---Wrong input ";
		cout << "\n\n---please Enter true choice:";
		cin >> choice;
	}

	switch (choice)
	{
	case 1:studentLogin(); break;
	case 3:adminLogin(); break;
	case 2: regist(); break;
	case 0:
		while (1)
		{
			system("cls");
		exe:
			cout << "\n Are you sure, you want to exit? y | n \n";
			char ex;
			cin >> ex;
			if (ex == 'y' || ex == 'Y')
				exit(0);
			else if (ex == 'n' || ex == 'N')
			{
				break;
			}
			else {
				cout << "\n Invalid choice. ";
				goto exe;
			}

		}
		break;

	default: cout << "\n Invalid choice.";
		goto to;
	}

}
void recovery()
{
	system("cls");
	char x;
	string q, z;
	cout << "You have entered the ceredentials three times wrong\nenter m or M to return to menu or any key to recovery\n\n";
	cin >> x;
	if (x == 'm' || x == 'M')
		menu();
	else
	{
	sss:
		cout << "\nEnter your email: ";
		cin >> z;
		ifstream a;
		a.open("data.txt");
		int recordFound = 0;
		if (a) {
			string line;
			string temp = z + ".txt";
			while (getline(a, line)) {
				if (line == temp)
				{
					recordFound = 1;
				}
			}
		}
		a.close();
		if (recordFound == 1)
		{
		rrr:
			string o = "id		:", l, s, g, ft, h;
			int w = 0;
			cout << "\nEnter your id: ";
			cin >> s;

			cout << "\nEnter your Favourite team: ";
			cin >> g;
			g = capfirstletter(g, 1);
			while (g == "false")
			{
				cout << "\nEnter the name correctely: ";
				cin >> g;
				g = capfirstletter(g, 1);
			}
			h = "Favourite team		:" + g;
			o += s;
			ifstream a;
			a.open(z + ".txt");
			while (a)
			{
				getline(a, l);
				if (l == o)
				{
					w++;
				}
			}
			a.close();
			a.open(z + ".txt");
			while (getline(a, ft))
			{
				int y, x;
				x = h.size();
				y = ft.size();
				if (ft.find("Favourite team		:") < -1)
				{
					if (h == ft)
					{
						w++;
					}
				}
			}
			a.close();
			if (w == 2)
			{
				cout << "\n";
				ifstream a;
				a.open(z + ".txt");
				while (getline(a, l))
				{
					if (l.find("password		:") < -1)
					{
						cout << "\n" << l << "\n";
						cout << "enter 0 return to menu\n";
						cin >> w;
						while (w != 0)
						{
							cout << "Wrong choice\n";
							cin >> w;
						}

						menu();
					}
				}
			}
			else if (w == 0)
			{
				cout << "\nwrong id\n";
				goto rrr;
			}
		}
		else if (recordFound != 1)
		{
			cout << "\nwrong email\n";
			goto sss;
		}
	}
}
void attendance(string email)
{
	int choose = 0;
	float per = 0;
	cout << "1.Give your attendance. \n2.Attendace History. \n0.Return to menu\n";
	cin >> choose;
	if (choose == 1)
	{
		Mat img, imgh, imgh1;
		int i = 0, v = 0;
		capt(1, 4, email);
		imgh = imread(email + "0.jpg");
		resize(imgh, imgh1, Size(320, 320));
		img = edit(imgh1);
		per = compare(img, img);
		while (per < 90 && v < 3)
		{
			while (per < 90 && i < 2)
			{
				per = compare(img, img);
				i++;
			}
			v++;
		}
		int u = 0;
		if (per >= 90)
		{
			cout << "attended";
			cout << "0.main menu \n1.Attendance History\n";
			if (u == 0)
			{
				menu();
			}
			if (u == 1)
			{
				;
			}
		}
		else if (per < 90)
		{
			menu();
		}
	}
}
void remove_student() {
	char email[30];
	cout << "enter the email you want to remove +.txt ";
	cin >> email;
	remove(email);
	ifstream read;
	read.open("data.txt");
	if (read)
	{
		int recordFound = 0;
		string line;
		while (getline(read, line)) {
			if (read)
			{
				recordFound = 1;
				break;
			}
		}
		if (recordFound == 1)
		{

		}
	}
	read.close();
}
void Academic(char y)
{
	cout << "Welcome to CSE Department : " << endl;

	/*if (y <= 0 || y >= 5)
	{
		cout << " Wrong Academic year number : " << endl;
	}*/
	if (y == '1') {
		cout << "----------------------------------------------------The Courses of the First Year ---------------------------------------------------- \n" << endl;
		cout << "\n------------The first term list : \t\t\t\t\t\n" << endl;
		cout << "\n1. Discrete Mathematics \t 100 marks : 3 credit hours \n" << endl;
		cout << "\n2. Mathematics 3 \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n3. Programming C++ \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n4. Technical Writing  \t 50 marks \t2 credit hours \n" << endl;
		cout << "\n5. Electronics 1  \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n6. Ciruits 1 \t 50 marks \t3 credit hours \n" << endl;

		cout << "\n------------The second term list : \t\t\t\t\t\n" << endl;
		cout << "\n1. Electronics Workshop \t 100 marks \t 3 credit hours\n" << endl;
		cout << "\n2. Statistics \t 150 marks \t4 credit hours\n" << endl;
		cout << "\n3. Programming Java \t 150 marks \t4 credit hours\n" << endl;
		cout << "\n4. Technical Writing 2 \t 50 marks \t2 credit hours\n" << endl;
		cout << "\n5. Electronics 2 \t 150 marks \t4 credit\n" << endl;
		cout << "\n6. Logic Design \t 50 marks \t3 credit hours\n" << endl;

	}
	else if (y == '2') {
		cout << "---------------------------------------------------- The Courses of the Second Year  ----------------------------------------------------" << endl;
		cout << "\n------------The first term list : \t\t\t\t\t\n" << endl;
		cout << "\n 1. Numerical analysis \t 100 marks \t 3 credit hours \n" << endl;
		cout << "\n 2. Mathematics 3 \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 3. Computer Architecture\t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 4.  Critical thinking   \t 50 marks \t2 credit hours \n" << endl;
		cout << "\n 5. Signals  \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 6. Data structure and Algorithm \t 150 marks \t3 credit hours \n" << endl;

		cout << "\n------------The second term list : \t\t\t\t\t\n" << endl;
		cout << "\n 1. Electronics measurements \t 100 marks \t 3 credit hours \n" << endl;
		cout << "\n 2. Microprocessors & Micrcontrollers  \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 3. Data communication system \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 4. Operation research \t 50 marks \t2 credit hours \n" << endl;
		cout << "\n 5. Database Manegment \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 6. Electrical power and Machines \t 150 marks \t3 credit hours \n" << endl;

	}

	else if (y == '3') {
		cout << "---------------------------------------------------- The Courses of the Third Year : ----------------------------------------------------" << endl;
		cout << "\n------------The first term list : \t\t\t\t\t\n" << endl;
		cout << "\n 1. Computer Network \t 100 \tmarks : \t3 credit hours \n" << endl;
		cout << "\n 2. Software Engineering \t 150 marks: \t4 credit hours \n" << endl;
		cout << "\n 3. VLSI Design and Simulation \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 4.  Engineering Economy   \t 50 marks \t2 credit hours \n" << endl;
		cout << "\n 5. Signals Processing  \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 6. Linear Control System \t 50 marks \t3 credit hours \n" << endl;

		cout << "\n------------The second term list : \t\t\t\t\t\n" << endl;
		cout << "\n 1. operation System: 100 \tmarks \t 3 credit hours \n" << endl;
		cout << "\n 2. Digital control systems \t 150 marks \t4 \tcredit hours \n" << endl;
		cout << "\n 3. Artificial intellegence \t 150 marks \t4 \tcredit hours \n" << endl;
		cout << "\n 4. project Managment \t 50 marks \t2 credit hours \n" << endl;
		cout << "\n 5. Parallel and distributed system  \t 150 marks \t4 credit hours \n" << endl;

	}

	else if (y == '4') {
		cout << "---------------------------------------------------- The Courses of the Fourth Year : ----------------------------------------------------" << endl;
		cout << "\n------------The first term list : \t\t\t\t\t\n" << endl;
		cout << "\n 1. Machine learning \t 100 marks \t 3 credit hours \n" << endl;
		cout << "\n 2. Network Security \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 3. VLSI Design and Simulation \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 4.  Professional ethics  \t 50 marks \t2 credit hours \n" << endl;
		cout << "\n 5. Disgital image processing \t 150 marks \t4 credit hours \n" << endl;
		cout << "\n 6. Mobile cloud computing \t 150 marks \t3 credit hours \n" << endl;

		cout << "\n------------The second term list : \t\t\t\t\t\n" << endl;
		cout << " 1. Automation \t 100 marks \t 3 credit hours " << endl;
		cout << " 2. Cybersecurity  \t 150 marks \t4 credit hours " << endl;
		cout << " 3. Network programming \t 150 marks \t4 credit hours " << endl;
		cout << " 4.  Environmental studies \t 50 marks \t2 credit hours " << endl;
		cout << " 5. Bioinformatics  \t 150 marks \t4 credit hours " << endl;

	}
}

void attendancebyemail(string email, string password)
{
	system("cls");
	ofstream hist(email + "hist.txt", ios::app);
	// current date and time on the current system
	time_t now = time(0);
	// convert now to string form
	char* date_time = ctime(&now);
	if (attendancecheck(email, date_time) == true)
	{
		cout << "\nYou already attended Today\n\nPress any key to continue\n";
		getchar(); getchar();
		goto done;
	}
	else
	{
		cout << "-------------------------------------------------Atended-------------------------------------------------\n";
		cout << "Press any key to continue\n";
		getchar(); getchar();
		hist << date_time << "\n";
		hist.close();
	}
	int y;
done:
	system("cls");
	cout << "\n\n0.Return to menu:\n\n1.Attendance history:\n\n";
	cin >> y;
	while (y != 0 && y != 1)
	{
		cout << "\nWrong choice\n";
		cout << "\n0.Return to menu:\n\n1.Attendance history:\n\n";
		cin >> y;
	}
	if (y == 0)
	{
		menu();
	}
	else
	{
		system("cls");
		string x;
		ifstream hist(email + "hist.txt");
		while (hist)
		{
			getline(hist, x);
			cout << x << endl;
		}
		hist.close();
	}
}
bool attendancecheck(string email, string date)
{
	string x, y, z;
	ifstream att(email + "hist.txt");
	z = date.substr(0, 10);
	while (getline(att, x))
	{
		y = x.substr(0, 10);
		if (y == z)
		{
			return true;
		}
	}
	att.close();
	return false;
}