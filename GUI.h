#pragma once
//#include "Header.h"
#include "Datain.h"
#include<string.h>
#include<string>
#include<cstring>
#include<string>
#include <fstream>
#include<msclr/marshal_cppstd.h>
#include <stdlib.h>
#include <string.h>

namespace wait {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::IO;

	
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			panel3->Hide();
			panel4->Hide();
			panel5->Hide();
			panel7->Hide();
			panel6->Hide();
			panel8->Hide();
		//	panel11->Hide();
			panel12->Hide();
			label20->Hide();
			dateTimePicker1->Hide();

			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::RadioButton^ radioButton3;
private: System::Windows::Forms::RadioButton^ radioButton4;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::TextBox^ textBox22;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::BindingSource^ bindingSource1;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::ComponentModel::IContainer^ components;
	protected:
	protected:
	protected:
	protected:
	protected:
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 37.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkMagenta;
			this->label1->Location = System::Drawing::Point(473, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(474, 112);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Attendance";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bernard MT Condensed", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label9->Location = System::Drawing::Point(537, 136);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(320, 87);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Mangement System";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm1::label9_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1239, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(121, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label10->Location = System::Drawing::Point(359, 570);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(153, 32);
			this->label10->TabIndex = 17;
			this->label10->Text = L"STUDENT";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label11->Location = System::Drawing::Point(900, 568);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 32);
			this->label11->TabIndex = 17;
			this->label11->Text = L"ADMIN";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label12->Location = System::Drawing::Point(537, 230);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(342, 32);
			this->label12->TabIndex = 18;
			this->label12->Text = L"Please Choose Access :";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm1::label12_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Black;
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->panel6);
			this->panel8->Controls->Add(this->pictureBox5);
			this->panel8->Controls->Add(this->textBox6);
			this->panel8->Controls->Add(this->textBox5);
			this->panel8->Controls->Add(this->button7);
			this->panel8->Controls->Add(this->label15);
			this->panel8->Controls->Add(this->label17);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->panel10);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel8->Location = System::Drawing::Point(3, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1449, 712);
			this->panel8->TabIndex = 19;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel8_Paint);
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Controls->Add(this->pictureBox8);
			this->panel6->Controls->Add(this->textBox10);
			this->panel6->Controls->Add(this->label7);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1453, 712);
			this->panel6->TabIndex = 17;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(27, 35);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(55, 50);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 17;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox8_Click_1);
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Info;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(67, 190);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(1252, 500);
			this->textBox10->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label7->Location = System::Drawing::Point(506, 92);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(396, 72);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Students List";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click_1);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(23, 35);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(55, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox5_Click);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Info;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(470, 389);
			this->textBox6->Name = L"textBox6";
			this->textBox6->PasswordChar = '*';
			this->textBox6->Size = System::Drawing::Size(488, 34);
			this->textBox6->TabIndex = 11;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox6_TextChanged_2);
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox6_KeyDown);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Info;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(470, 318);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(488, 34);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox5_TextChanged_1);
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox5_KeyDown);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(592, 475);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(233, 50);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Log in";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label15->Location = System::Drawing::Point(521, 161);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(390, 72);
			this->label15->TabIndex = 9;
			this->label15->Text = L"Admin Login";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label17->Location = System::Drawing::Point(289, 316);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(110, 42);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Email";
			this->label17->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel9->Location = System::Drawing::Point(470, 340);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(488, 2);
			this->panel9->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label16->Location = System::Drawing::Point(262, 384);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(183, 42);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Password";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel10->Location = System::Drawing::Point(470, 411);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(488, 2);
			this->panel10->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label39);
			this->panel4->Controls->Add(this->textBox24);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->pictureBox7);
			this->panel4->Controls->Add(this->groupBox2);
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->label24);
			this->panel4->Controls->Add(this->label25);
			this->panel4->Controls->Add(this->label26);
			this->panel4->Controls->Add(this->label27);
			this->panel4->Controls->Add(this->textBox15);
			this->panel4->Controls->Add(this->label28);
			this->panel4->Controls->Add(this->textBox16);
			this->panel4->Controls->Add(this->label29);
			this->panel4->Controls->Add(this->textBox17);
			this->panel4->Controls->Add(this->label30);
			this->panel4->Controls->Add(this->textBox18);
			this->panel4->Controls->Add(this->textBox19);
			this->panel4->Controls->Add(this->textBox20);
			this->panel4->Controls->Add(this->textBox21);
			this->panel4->Controls->Add(this->textBox22);
			this->panel4->Controls->Add(this->label31);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(1338, -6);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(96, 721);
			this->panel4->TabIndex = 22;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel4_Paint_1);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(423, 516);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(212, 20);
			this->label20->TabIndex = 44;
			this->label20->Text = L"Passwords Doesnt Match !";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label39->Location = System::Drawing::Point(138, 551);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(176, 29);
			this->label39->TabIndex = 43;
			this->label39->Text = L"Academic Year";
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::SystemColors::Info;
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(369, 546);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(329, 34);
			this->textBox24->TabIndex = 42;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label18->Location = System::Drawing::Point(747, 326);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(146, 20);
			this->label18->TabIndex = 41;
			this->label18->Text = L"Only for Egyptians";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(899, 551);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(228, 48);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Register";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(36, 44);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(53, 50);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 39;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox7_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Info;
			this->groupBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox2.BackgroundImage")));
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox2->Location = System::Drawing::Point(789, 416);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(457, 114);
			this->groupBox2->TabIndex = 38;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Current Status";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton3->Location = System::Drawing::Point(28, 68);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(141, 33);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Expatriate";
			this->radioButton3->UseVisualStyleBackColor = false;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->radioButton4->Location = System::Drawing::Point(28, 32);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(127, 33);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Eqyptian";
			this->radioButton4->UseVisualStyleBackColor = false;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::radioButton4_CheckedChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label23->Location = System::Drawing::Point(717, 367);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(176, 29);
			this->label23->TabIndex = 37;
			this->label23->Text = L"Phone Number";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label24->Location = System::Drawing::Point(751, 297);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(131, 29);
			this->label24->TabIndex = 36;
			this->label24->Text = L"National ID";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm1::label24_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label25->Location = System::Drawing::Point(829, 253);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(53, 29);
			this->label25->TabIndex = 35;
			this->label25->Text = L"City";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label26->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label26->Location = System::Drawing::Point(141, 488);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(210, 29);
			this->label26->TabIndex = 33;
			this->label26->Text = L"Confirm Password";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label27->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label27->Location = System::Drawing::Point(141, 427);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(120, 29);
			this->label27->TabIndex = 31;
			this->label27->Text = L"Password";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::Info;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(899, 364);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(347, 34);
			this->textBox15->TabIndex = 29;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label28->Location = System::Drawing::Point(138, 369);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(74, 29);
			this->label28->TabIndex = 30;
			this->label28->Text = L"Email";
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::Info;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(899, 308);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(347, 34);
			this->textBox16->TabIndex = 28;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label29->Location = System::Drawing::Point(137, 312);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(124, 29);
			this->label29->TabIndex = 32;
			this->label29->Text = L"Username";
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::SystemColors::Info;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(899, 245);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(347, 34);
			this->textBox17->TabIndex = 26;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label30->Location = System::Drawing::Point(141, 250);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(113, 29);
			this->label30->TabIndex = 34;
			this->label30->Text = L"Fullname";
			this->label30->Click += gcnew System::EventHandler(this, &MyForm1::label30_Click);
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::SystemColors::Info;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(372, 479);
			this->textBox18->Name = L"textBox18";
			this->textBox18->PasswordChar = '*';
			this->textBox18->Size = System::Drawing::Size(329, 34);
			this->textBox18->TabIndex = 25;
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox18_TextChanged);
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::SystemColors::Info;
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(369, 422);
			this->textBox19->Name = L"textBox19";
			this->textBox19->PasswordChar = '*';
			this->textBox19->Size = System::Drawing::Size(329, 34);
			this->textBox19->TabIndex = 24;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::SystemColors::Info;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(369, 364);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(329, 34);
			this->textBox20->TabIndex = 23;
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::SystemColors::Info;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(369, 304);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(329, 34);
			this->textBox21->TabIndex = 22;
			this->textBox21->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox21_TextChanged);
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::SystemColors::Info;
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(369, 244);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(329, 34);
			this->textBox22->TabIndex = 27;
			this->textBox22->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox22_TextChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label31->Location = System::Drawing::Point(435, 108);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(649, 72);
			this->label31->TabIndex = 21;
			this->label31->Text = L"Sign Up New Student";
			this->label31->Click += gcnew System::EventHandler(this, &MyForm1::label31_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(283, 337);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(332, 209);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(802, 337);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(351, 209);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Location = System::Drawing::Point(526, 339);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(431, 2);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel2->Location = System::Drawing::Point(526, 412);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(431, 2);
			this->panel2->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(322, 388);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 42);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(387, 317);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label14->Location = System::Drawing::Point(514, 165);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(432, 72);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Student Login";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Info;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(525, 317);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(431, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged_1);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Info;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(526, 317);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(431, 34);
			this->textBox3->TabIndex = 15;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox3_TextChanged);
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox3_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Info;
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->textBox2->Location = System::Drawing::Point(525, 390);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(431, 22);
			this->textBox2->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Info;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(526, 390);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(431, 34);
			this->textBox4->TabIndex = 15;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox4_TextChanged);
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::textBox4_KeyDown);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Info;
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->panel4);
			this->panel7->Controls->Add(this->panel3);
			this->panel7->Controls->Add(this->button2);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->Controls->Add(this->textBox2);
			this->panel7->Controls->Add(this->textBox3);
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->panel2);
			this->panel7->Controls->Add(this->panel1);
			this->panel7->Controls->Add(this->label5);
			this->panel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel7->Location = System::Drawing::Point(3, 9);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1446, 691);
			this->panel7->TabIndex = 14;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel7_Paint);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->dateTimePicker1);
			this->panel3->Controls->Add(this->panel12);
			this->panel3->Controls->Add(this->groupBox1);
			this->panel3->Controls->Add(this->label19);
			this->panel3->Controls->Add(this->pictureBox11);
			this->panel3->Location = System::Drawing::Point(0, 11);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1440, 670);
			this->panel3->TabIndex = 45;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->pictureBox6);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->textBox9);
			this->panel5->Location = System::Drawing::Point(0, -11);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(10, 925);
			this->panel5->TabIndex = 18;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(18, 13);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(55, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 18;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox6_Click_2);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(427, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(413, 69);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Attendance History";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Info;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(209, 136);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(856, 368);
			this->textBox9->TabIndex = 0;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox9_TextChanged);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(34, 81);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(252, 22);
			this->dateTimePicker1->TabIndex = 20;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->Controls->Add(this->label33);
			this->panel12->Controls->Add(this->textBox8);
			this->panel12->Controls->Add(this->textBox7);
			this->panel12->Controls->Add(this->pictureBox12);
			this->panel12->Controls->Add(this->label21);
			this->panel12->Location = System::Drawing::Point(0, -11);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(10, 678);
			this->panel12->TabIndex = 1;
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label33.Image")));
			this->label33->Location = System::Drawing::Point(69, 108);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(259, 42);
			this->label33->TabIndex = 0;
			this->label33->Text = L"First Term";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Info;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(692, 177);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(541, 480);
			this->textBox8->TabIndex = 18;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Info;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(75, 177);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(494, 480);
			this->textBox7->TabIndex = 18;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(37, 23);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(55, 50);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 17;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox12_Click);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label21.Image")));
			this->label21->Location = System::Drawing::Point(709, 108);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(410, 42);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Second Term";
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"groupBox1.BackgroundImage")));
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Location = System::Drawing::Point(216, 234);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(943, 346);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Choose One Please";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(24, 209);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(872, 46);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Attendance History";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click_1);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(24, 277);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(872, 46);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Cousres";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click_1);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(24, 138);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(872, 46);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Attendance without Face";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click_1);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(24, 69);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(872, 46);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Attendance by Face";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 37.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label19->Location = System::Drawing::Point(513, 102);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(422, 72);
			this->label19->TabIndex = 17;
			this->label19->Text = L"Student Menu";
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(20, 32);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(55, 50);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 19;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox11_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(592, 499);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(233, 50);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Log in";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::HighlightText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(680, 457);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(226, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Dont have account\? Register";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(40, 32);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(55, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox3_Click_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(912, 457);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 20);
			this->label5->TabIndex = 18;
			this->label5->Text = L"HERE";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm1::label5_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1452, 712);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"MyForm1";
			this->Text = L"Attendance";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::MyForm1_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//------->TYPE ON LAPEL

	/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//label1->Text = "Hello";
		//label1->Text = textBox1->Text;
	}*/

		//--------->ADDITION

	/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1 ->Text = "+";
		int result = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		label2->Text = System::Convert::ToString(result) ;
		

	}*/
	//private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//}
//private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
//}
//private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//} 
	   //Checkbox Window Yes or No

	/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if(MessageBox::Show("This is the message", "this is the Title", MessageBoxButtons::YesNo, MessageBoxIcon::Warning /*this determine the emoji in the message) == 
			//System::Windows::Forms::DialogResult::Yes)
		//{
			//Application::Exit();
		//}
		//else { button1->PerformClick(); }
	}*/


	/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

/*calling class of the other form and making new class of it then calling and also include the form in header */		// MyForm2^ aboutform = gcnew MyForm2;
		//aboutform->ShowDialog(); /* dialog was written to avoid that multiple clicking on About button open file multiple times*/
		
   //}








private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	//panel3->Show();
}

private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
/*private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox1->Checked)
	{
		button1->Enabled = true;
	}
	else { button1->Enabled = false; }


}
/*private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}*/
/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "admin" && textBox2->Text == "root")
	{

		MessageBox::Show("Access Allowed", "Sign in Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//Application::Exit();
		 panel4->Show();
		  //this->Hide();   //hide login form
		  //Datain^ dataform = gcnew Datain;
		  //dataform->ShowDialog();
		
		
		
	}
	else if (textBox1->Text != "admin" || textBox2->Text != "root")
	{
			MessageBox::Show("Invalid Email or Password ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			textBox1->Text = "";
			textBox2->Text = "";

		}
	
	


}*/

/*private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
}*/


	  
	   
private: System::Void MyForm1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
}
private: System::Void MyForm1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}
private: System::Void MyForm1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}

private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
	{
        textBox2->Focus();
	}
}
/*private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		button6->PerformClick();
	}

}*/
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	//panel4->Hide();
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox4_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Show();
	panel7->Hide();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel7->Show();
	panel8->Hide();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	//panel3->Show();
	//panel6->Show();
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel8->Hide();
	
}
private: System::Void pictureBox3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	panel7->Hide();
	
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Show();

}
private: System::Void label8_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
	

}
	   System::String^ email;
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
}
private: System::Void label31_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox6_Click_1(System::Object^ sender, System::EventArgs^ e) {

	panel4->Show();
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
//	panel5->Show();
	//StreamReader stud("students.txt", System::Text::Encoding::Default);
	//textBox7->Text = stud.ReadToEnd();                   //stud.ReadLine();
	//stud.Close();
}

	   /*if (goBack == 3)
			{
				int i = 0;
				string student;
				ifstream list("students.txt", ios::in);
				while (list)
				{
					getline(list, student);
					cout << i + 1 << "." << student << "\n";
				}
				list.close();
			}
		}*/
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ pass;
	pass = textBox3->Text;
	//StreamReader login(email + ".txt");
	//login.Close();
}
private: System::Void textBox22_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//StreamWriter email1(email + ".txt", true);
	//System::String^ mail;
	//mail = textBox22->Text;
	//email1.WriteLine(mail);
		//email1.Close();
}
private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox4->Focus();
	}
}
private: System::Void textBox4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		button2->PerformClick();
	}
}
private: System::Void textBox5_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox6->Focus();
	}
}
private: System::Void textBox6_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		button7->PerformClick();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox18->Text == textBox19->Text 
		&& textBox15->Text!=""
		&& textBox17->Text != ""
		&& textBox18->Text != ""
		&& textBox19->Text != ""
		&& textBox20->Text != ""
		&& textBox21->Text != ""
		&& textBox22->Text != ""
		&& textBox24->Text != ""
		)

	{StreamWriter email1(textBox20->Text  + ".txt", true);
	email1.WriteLine(textBox22->Text);
	email1.WriteLine(textBox21->Text);
	email1.WriteLine(textBox20->Text);
	email1.WriteLine(textBox19->Text);
	email1.WriteLine(textBox18->Text);
	email1.WriteLine(textBox17->Text);
	email1.WriteLine(textBox16->Text);
	email1.WriteLine(textBox15->Text);
	email1.WriteLine(textBox24->Text);
	StreamWriter forlogin(textBox20->Text + "log.txt", true);
	forlogin.WriteLine(textBox20->Text);
	forlogin.WriteLine(textBox19->Text);
	StreamWriter forAcad(textBox20->Text + "Year.txt", true);
	forAcad.WriteLine(textBox24->Text);
	StreamWriter forData("Data.txt", true);
	forData.WriteLine(textBox20->Text);
	StreamWriter stod("students.txt", true);
	stod.WriteLine(textBox22->Text) ;
	panel4->Hide();

	}
	else if (textBox15->Text == ""
		|| textBox17->Text == ""
		|| textBox18->Text == ""
		|| textBox19->Text == ""
		|| textBox20->Text == ""
		|| textBox21->Text == ""
		|| textBox22->Text == ""
		|| textBox24->Text == ""
		)
	{
		MessageBox::Show("Please Complete All Data ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

	else if (textBox18->Text != textBox19->Text)

	{
		label20->Show();
		textBox18->Text = "";
		textBox19->Text = "";


	}
	else if (textBox16->Text == "" && radioButton3->Checked)
	{
		StreamWriter email1(textBox20->Text + ".txt", true);
		email1.WriteLine(textBox22->Text);
		email1.WriteLine(textBox21->Text);
		email1.WriteLine(textBox20->Text);
		email1.WriteLine(textBox19->Text);
		email1.WriteLine(textBox18->Text);
		email1.WriteLine(textBox17->Text);
		email1.WriteLine(textBox16->Text);
		email1.WriteLine(textBox15->Text);
		email1.WriteLine(textBox24->Text);
		StreamWriter forlogin(textBox20->Text + "log.txt", true);
		forlogin.WriteLine(textBox20->Text);
		forlogin.WriteLine(textBox19->Text);
		StreamWriter forAcad(textBox20->Text + "Year.txt", true);
		forAcad.WriteLine(textBox24->Text);
		StreamWriter forData("Data.txt", true);
		forData.WriteLine(textBox20->Text);
		StreamWriter stod("students.txt", true);
		stod.WriteLine(textBox22->Text);





	}







	
}
private: System::Void textBox21_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	StreamWriter email1(textBox20->Text + ".txt", true);
	email1.WriteLine("Eqyptian");


}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox16->Text = "";
	StreamWriter email1(textBox20->Text + ".txt", true);
	email1.WriteLine("Exypatriate");

}
private: System::Void textBox18_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}



	


private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   //StreamReader login(email + ".txt");

private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	panel12->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "admin" && textBox6->Text == "admin@2")
	{
		StreamReader admon("students.txt");
		while (!admon.EndOfStream) {

			textBox10->Text = admon.ReadToEnd();
		}
		panel6->Show();
	}
	else {
		MessageBox::Show("Invalid Email or Password ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		textBox5->Text = "";
		textBox6->Text = "";
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	email = textBox3->Text;
	int x = 0;
	StreamReader check("Data.txt");
	while (!check.EndOfStream)
	{
		if (email==check.ReadLine())
		{
			StreamReader checkpass(email + ".txt");
			while (!checkpass.EndOfStream)
			{
				if(textBox4->Text==checkpass.ReadLine())
				{   
					x++;
				}
			}


			
		}


	}	if (x > 0) {
		panel3->Show();
	}else
	{
		MessageBox::Show("Email not found ", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {

	
StreamReader courses(textBox3->Text + "Year.txt");
System::String^ mail= courses.ReadLine();
courses.Close();

	StreamReader std1(mail + "term1.txt");
	while (!std1.EndOfStream) {
		
			textBox7->Text = std1.ReadToEnd();
		
	}
	

	StreamReader std2(mail + "term2.txt");
	while (!std2.EndOfStream) {
		
		textBox8->Text = std2.ReadToEnd();
	}
	panel12->Show();
	std1.Close();
	std2.Close();
	


}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Attended !!", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	StreamWriter Time("Time.txt", true);
	Time.WriteLine(dateTimePicker1->Value);


}

private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	StreamReader readHis("Time.txt");
	while (!readHis.EndOfStream) {

		textBox9->Text = readHis.ReadToEnd();
	}
	readHis.Close();
	panel5->Show();
}
private: System::Void pictureBox6_Click_2(System::Object^ sender, System::EventArgs^ e) {
	panel5->Hide();


}
private: System::Void textBox6_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void pictureBox8_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel6->Hide();
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label30_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
}
};


}
