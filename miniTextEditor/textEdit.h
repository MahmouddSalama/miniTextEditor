#pragma once
#include"ArrList.cpp"
#include<iostream>
#include<fstream>
#include <fstream>
#include <dos.h> 
#include <windows.h>
#include<vector>
#include<utility>
#include<string>
#include <sstream>
#include<algorithm>
using namespace std;
using namespace System::IO;
namespace miniTextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;
	using System::Runtime::InteropServices::Marshal;

	/// <summary>
	/// Summary for textEdit
	/// </summary>
	public ref class textEdit : public System::Windows::Forms::Form
	{
	public:
		textEdit(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~textEdit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Button^ print;

	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ addLine;
	private: System::Windows::Forms::Button^ insertline;
	private: System::Windows::Forms::Button^ deleate;
	public:String^ filename;
		   String^ pathfile;
		   String^ filetext;
		   bool isOpen = false;
		   /// Functions form ///
	private : ArrList <string> filelines;
	private: System::Windows::Forms::Button^ getlines;


	private: System::Windows::Forms::Button^ update;
	private: System::Windows::Forms::Button^ find;



	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button11;


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label1;

		 static  float fontsize = 10.2f;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::Panel^ textPanal;
	private: System::Windows::Forms::Panel^ showall;
	public: System::Windows::Forms::TextBox^ lapelShow;
	private:
	private: System::Windows::Forms::Label^ label9;
	public:
	private: System::Windows::Forms::Button^ okShow;
	private: System::Windows::Forms::Panel^ insert;
	private: System::Windows::Forms::Button^ okinsert;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ lineInsert;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ lineIndex;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ lineGet;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ okgetline;
	private: System::Windows::Forms::Panel^ findandreplace;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ okFAR;
	private: System::Windows::Forms::Panel^ updateline;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ okUpdate;
private: System::Windows::Forms::Panel^ Deleatt;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Button^ okdeleate;
private: System::Windows::Forms::Panel^ add;
private: System::Windows::Forms::Button^ okadd;
private: System::Windows::Forms::TextBox^ Boxaddline;

private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Panel^ findall;
private: System::Windows::Forms::Label^ label14;

private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Button^ okfindall;
private: System::Windows::Forms::Panel^ textBoxpanal;

private: System::Windows::Forms::TextBox^ textBoxedit;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Panel^ newfilepanal;
private: System::Windows::Forms::TextBox^ Enterfilename;

private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ closebutton;
private: System::Windows::Forms::TextBox^ textBox1;





	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(textEdit::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textPanal = (gcnew System::Windows::Forms::Panel());
			this->findall = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->okfindall = (gcnew System::Windows::Forms::Button());
			this->insert = (gcnew System::Windows::Forms::Panel());
			this->okinsert = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lineInsert = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lineIndex = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->updateline = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->okUpdate = (gcnew System::Windows::Forms::Button());
			this->textBoxpanal = (gcnew System::Windows::Forms::Panel());
			this->textBoxedit = (gcnew System::Windows::Forms::TextBox());
			this->findandreplace = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->okFAR = (gcnew System::Windows::Forms::Button());
			this->Deleatt = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->okdeleate = (gcnew System::Windows::Forms::Button());
			this->lineGet = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->okgetline = (gcnew System::Windows::Forms::Button());
			this->newfilepanal = (gcnew System::Windows::Forms::Panel());
			this->Enterfilename = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->showall = (gcnew System::Windows::Forms::Panel());
			this->lapelShow = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->okShow = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Panel());
			this->okadd = (gcnew System::Windows::Forms::Button());
			this->Boxaddline = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->closebutton = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->save = (gcnew System::Windows::Forms::Button());
			this->print = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->addLine = (gcnew System::Windows::Forms::Button());
			this->insertline = (gcnew System::Windows::Forms::Button());
			this->deleate = (gcnew System::Windows::Forms::Button());
			this->getlines = (gcnew System::Windows::Forms::Button());
			this->update = (gcnew System::Windows::Forms::Button());
			this->find = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->textPanal->SuspendLayout();
			this->findall->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->insert->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->updateline->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->textBoxpanal->SuspendLayout();
			this->findandreplace->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->Deleatt->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->lineGet->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->newfilepanal->SuspendLayout();
			this->showall->SuspendLayout();
			this->add->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textPanal);
			this->panel1->Controls->Add(this->flowLayoutPanel2);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Controls->Add(this->menuStrip1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1040, 679);
			this->panel1->TabIndex = 0;
			// 
			// textPanal
			// 
			this->textPanal->Controls->Add(this->findall);
			this->textPanal->Controls->Add(this->insert);
			this->textPanal->Controls->Add(this->updateline);
			this->textPanal->Controls->Add(this->textBoxpanal);
			this->textPanal->Controls->Add(this->findandreplace);
			this->textPanal->Controls->Add(this->Deleatt);
			this->textPanal->Controls->Add(this->lineGet);
			this->textPanal->Controls->Add(this->newfilepanal);
			this->textPanal->Controls->Add(this->showall);
			this->textPanal->Controls->Add(this->add);
			this->textPanal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textPanal->Location = System::Drawing::Point(0, 110);
			this->textPanal->Name = L"textPanal";
			this->textPanal->Size = System::Drawing::Size(935, 569);
			this->textPanal->TabIndex = 4;
			// 
			// findall
			// 
			this->findall->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->findall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findall.BackgroundImage")));
			this->findall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->findall->Controls->Add(this->label14);
			this->findall->Controls->Add(this->textBox1);
			this->findall->Controls->Add(this->textBox10);
			this->findall->Controls->Add(this->label12);
			this->findall->Controls->Add(this->pictureBox7);
			this->findall->Controls->Add(this->okfindall);
			this->findall->Dock = System::Windows::Forms::DockStyle::Fill;
			this->findall->Location = System::Drawing::Point(0, 0);
			this->findall->Name = L"findall";
			this->findall->Size = System::Drawing::Size(935, 569);
			this->findall->TabIndex = 12;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
			this->label14->Location = System::Drawing::Point(38, 287);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 33);
			this->label14->TabIndex = 6;
			this->label14->Text = L"The Lines";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(146, 286);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 230);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::Gray;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(145, 168);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(190, 42);
			this->textBox10->TabIndex = 3;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Gray;
			this->label12->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label12.Image")));
			this->label12->Location = System::Drawing::Point(50, 172);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(69, 42);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Word";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(75, 47);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(213, 72);
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// okfindall
			// 
			this->okfindall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okfindall.BackgroundImage")));
			this->okfindall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okfindall->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okfindall->ForeColor = System::Drawing::Color::White;
			this->okfindall->Location = System::Drawing::Point(395, 414);
			this->okfindall->Name = L"okfindall";
			this->okfindall->Size = System::Drawing::Size(129, 67);
			this->okfindall->TabIndex = 2;
			this->okfindall->Text = L"OK";
			this->okfindall->UseVisualStyleBackColor = true;
			// 
			// insert
			// 
			this->insert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->insert->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"insert.BackgroundImage")));
			this->insert->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->insert->Controls->Add(this->okinsert);
			this->insert->Controls->Add(this->label2);
			this->insert->Controls->Add(this->lineInsert);
			this->insert->Controls->Add(this->label3);
			this->insert->Controls->Add(this->lineIndex);
			this->insert->Controls->Add(this->pictureBox2);
			this->insert->Dock = System::Windows::Forms::DockStyle::Fill;
			this->insert->Location = System::Drawing::Point(0, 0);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(935, 569);
			this->insert->TabIndex = 7;
			// 
			// okinsert
			// 
			this->okinsert->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okinsert.BackgroundImage")));
			this->okinsert->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okinsert->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okinsert->ForeColor = System::Drawing::Color::White;
			this->okinsert->Location = System::Drawing::Point(176, 429);
			this->okinsert->Name = L"okinsert";
			this->okinsert->Size = System::Drawing::Size(214, 52);
			this->okinsert->TabIndex = 5;
			this->okinsert->Text = L"OK";
			this->okinsert->UseVisualStyleBackColor = true;
			this->okinsert->Click += gcnew System::EventHandler(this, &textEdit::okinsert_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Gray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(12, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 57);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Text";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lineInsert
			// 
			this->lineInsert->BackColor = System::Drawing::Color::Gray;
			this->lineInsert->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lineInsert->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lineInsert->ForeColor = System::Drawing::Color::White;
			this->lineInsert->Location = System::Drawing::Point(75, 311);
			this->lineInsert->Multiline = true;
			this->lineInsert->Name = L"lineInsert";
			this->lineInsert->Size = System::Drawing::Size(408, 90);
			this->lineInsert->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Gray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(12, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 42);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Line`s Number";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lineIndex
			// 
			this->lineIndex->BackColor = System::Drawing::Color::Gray;
			this->lineIndex->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lineIndex->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lineIndex->ForeColor = System::Drawing::Color::White;
			this->lineIndex->Location = System::Drawing::Point(176, 200);
			this->lineIndex->Multiline = true;
			this->lineIndex->Name = L"lineIndex";
			this->lineIndex->Size = System::Drawing::Size(190, 42);
			this->lineIndex->TabIndex = 1;
			this->lineIndex->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(99, 47);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(219, 54);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// updateline
			// 
			this->updateline->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->updateline->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"updateline.BackgroundImage")));
			this->updateline->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->updateline->Controls->Add(this->pictureBox4);
			this->updateline->Controls->Add(this->textBox7);
			this->updateline->Controls->Add(this->label6);
			this->updateline->Controls->Add(this->textBox6);
			this->updateline->Controls->Add(this->label10);
			this->updateline->Controls->Add(this->okUpdate);
			this->updateline->Dock = System::Windows::Forms::DockStyle::Fill;
			this->updateline->Location = System::Drawing::Point(0, 0);
			this->updateline->Name = L"updateline";
			this->updateline->Size = System::Drawing::Size(935, 569);
			this->updateline->TabIndex = 9;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(99, 47);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(237, 82);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Gray;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(176, 200);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(238, 42);
			this->textBox7->TabIndex = 1;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Gray;
			this->label6->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(12, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(141, 42);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Line`s Number";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Gray;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(75, 309);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(408, 123);
			this->textBox6->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Gray;
			this->label10->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(12, 359);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 42);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Text";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// okUpdate
			// 
			this->okUpdate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okUpdate.BackgroundImage")));
			this->okUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okUpdate->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okUpdate->ForeColor = System::Drawing::Color::White;
			this->okUpdate->Location = System::Drawing::Point(189, 464);
			this->okUpdate->Name = L"okUpdate";
			this->okUpdate->Size = System::Drawing::Size(197, 52);
			this->okUpdate->TabIndex = 5;
			this->okUpdate->Text = L"OK";
			this->okUpdate->UseVisualStyleBackColor = true;
			this->okUpdate->Click += gcnew System::EventHandler(this, &textEdit::okUpdate_Click);
			// 
			// textBoxpanal
			// 
			this->textBoxpanal->Controls->Add(this->textBoxedit);
			this->textBoxpanal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBoxpanal->Location = System::Drawing::Point(0, 0);
			this->textBoxpanal->Name = L"textBoxpanal";
			this->textBoxpanal->Size = System::Drawing::Size(935, 569);
			this->textBoxpanal->TabIndex = 7;
			// 
			// textBoxedit
			// 
			this->textBoxedit->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxedit->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxedit->Location = System::Drawing::Point(5, 10);
			this->textBoxedit->MaxLength = 999999999;
			this->textBoxedit->Multiline = true;
			this->textBoxedit->Name = L"textBoxedit";
			this->textBoxedit->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxedit->Size = System::Drawing::Size(924, 554);
			this->textBoxedit->TabIndex = 0;
			// 
			// findandreplace
			// 
			this->findandreplace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->findandreplace->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findandreplace.BackgroundImage")));
			this->findandreplace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->findandreplace->Controls->Add(this->pictureBox3);
			this->findandreplace->Controls->Add(this->textBox5);
			this->findandreplace->Controls->Add(this->label4);
			this->findandreplace->Controls->Add(this->textBox4);
			this->findandreplace->Controls->Add(this->label5);
			this->findandreplace->Controls->Add(this->okFAR);
			this->findandreplace->Dock = System::Windows::Forms::DockStyle::Fill;
			this->findandreplace->Location = System::Drawing::Point(0, 0);
			this->findandreplace->Name = L"findandreplace";
			this->findandreplace->Size = System::Drawing::Size(935, 569);
			this->findandreplace->TabIndex = 6;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(99, 47);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(274, 69);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Gray;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(176, 200);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(291, 42);
			this->textBox5->TabIndex = 1;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Gray;
			this->label4->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4.Image")));
			this->label4->Location = System::Drawing::Point(12, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 42);
			this->label4->TabIndex = 2;
			this->label4->Text = L"The Word";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Gray;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(176, 320);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(291, 42);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Gray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(12, 320);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 42);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Replace Py";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// okFAR
			// 
			this->okFAR->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okFAR.BackgroundImage")));
			this->okFAR->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okFAR->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okFAR->ForeColor = System::Drawing::Color::White;
			this->okFAR->Location = System::Drawing::Point(176, 429);
			this->okFAR->Name = L"okFAR";
			this->okFAR->Size = System::Drawing::Size(131, 52);
			this->okFAR->TabIndex = 5;
			this->okFAR->Text = L"OK";
			this->okFAR->UseVisualStyleBackColor = true;
			this->okFAR->Click += gcnew System::EventHandler(this, &textEdit::okFAR_Click);
			// 
			// Deleatt
			// 
			this->Deleatt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Deleatt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Deleatt.BackgroundImage")));
			this->Deleatt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Deleatt->Controls->Add(this->pictureBox6);
			this->Deleatt->Controls->Add(this->textBox11);
			this->Deleatt->Controls->Add(this->label11);
			this->Deleatt->Controls->Add(this->okdeleate);
			this->Deleatt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Deleatt->Location = System::Drawing::Point(0, 0);
			this->Deleatt->Name = L"Deleatt";
			this->Deleatt->Size = System::Drawing::Size(935, 569);
			this->Deleatt->TabIndex = 10;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(99, 65);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(180, 64);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Gray;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(203, 242);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(228, 38);
			this->textBox11->TabIndex = 1;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Gray;
			this->label11->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label11.Image")));
			this->label11->Location = System::Drawing::Point(39, 238);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 42);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Line`s Number";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// okdeleate
			// 
			this->okdeleate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okdeleate.BackgroundImage")));
			this->okdeleate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okdeleate->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okdeleate->ForeColor = System::Drawing::Color::White;
			this->okdeleate->Location = System::Drawing::Point(145, 394);
			this->okdeleate->Name = L"okdeleate";
			this->okdeleate->Size = System::Drawing::Size(228, 52);
			this->okdeleate->TabIndex = 5;
			this->okdeleate->Text = L"OK";
			this->okdeleate->UseVisualStyleBackColor = true;
			this->okdeleate->Click += gcnew System::EventHandler(this, &textEdit::okdeleate_Click);
			// 
			// lineGet
			// 
			this->lineGet->BackColor = System::Drawing::SystemColors::ControlDark;
			this->lineGet->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lineGet.BackgroundImage")));
			this->lineGet->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->lineGet->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lineGet->Controls->Add(this->pictureBox5);
			this->lineGet->Controls->Add(this->textBox9);
			this->lineGet->Controls->Add(this->label8);
			this->lineGet->Controls->Add(this->textBox8);
			this->lineGet->Controls->Add(this->label7);
			this->lineGet->Controls->Add(this->okgetline);
			this->lineGet->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lineGet->Location = System::Drawing::Point(0, 0);
			this->lineGet->Name = L"lineGet";
			this->lineGet->Size = System::Drawing::Size(935, 569);
			this->lineGet->TabIndex = 8;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(159, 45);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(212, 82);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Gray;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Barlow Condensed Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(198, 188);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(298, 53);
			this->textBox9->TabIndex = 1;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Gray;
			this->label8->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label8.Image")));
			this->label8->Location = System::Drawing::Point(36, 189);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 42);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Line`s Number";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Gray;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Barlow Condensed Medium", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(123, 307);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(373, 88);
			this->textBox8->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Gray;
			this->label7->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(12, 333);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 53);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Text";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// okgetline
			// 
			this->okgetline->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okgetline.BackgroundImage")));
			this->okgetline->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okgetline->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okgetline->ForeColor = System::Drawing::Color::White;
			this->okgetline->Location = System::Drawing::Point(187, 450);
			this->okgetline->Name = L"okgetline";
			this->okgetline->Size = System::Drawing::Size(214, 52);
			this->okgetline->TabIndex = 5;
			this->okgetline->Text = L"OK";
			this->okgetline->UseVisualStyleBackColor = true;
			this->okgetline->Click += gcnew System::EventHandler(this, &textEdit::okgetline_Click);
			// 
			// newfilepanal
			// 
			this->newfilepanal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newfilepanal.BackgroundImage")));
			this->newfilepanal->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->newfilepanal->Controls->Add(this->Enterfilename);
			this->newfilepanal->Controls->Add(this->button3);
			this->newfilepanal->Controls->Add(this->button4);
			this->newfilepanal->Controls->Add(this->label15);
			this->newfilepanal->Dock = System::Windows::Forms::DockStyle::Fill;
			this->newfilepanal->Location = System::Drawing::Point(0, 0);
			this->newfilepanal->Name = L"newfilepanal";
			this->newfilepanal->Size = System::Drawing::Size(935, 569);
			this->newfilepanal->TabIndex = 1;
			// 
			// Enterfilename
			// 
			this->Enterfilename->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Enterfilename->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Enterfilename->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enterfilename->ForeColor = System::Drawing::Color::White;
			this->Enterfilename->Location = System::Drawing::Point(56, 269);
			this->Enterfilename->Multiline = true;
			this->Enterfilename->Name = L"Enterfilename";
			this->Enterfilename->Size = System::Drawing::Size(251, 45);
			this->Enterfilename->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Vivaldi", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(373, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 45);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Browse";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &textEdit::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Vivaldi", 28.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(170, 403);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 59);
			this->button4->TabIndex = 2;
			this->button4->Text = L"OK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &textEdit::button4_Click);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Vivaldi", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label15.Image")));
			this->label15->Location = System::Drawing::Point(122, 62);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(268, 57);
			this->label15->TabIndex = 0;
			this->label15->Text = L"write File Name";
			// 
			// showall
			// 
			this->showall->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->showall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showall.BackgroundImage")));
			this->showall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->showall->Controls->Add(this->lapelShow);
			this->showall->Controls->Add(this->label9);
			this->showall->Controls->Add(this->okShow);
			this->showall->Dock = System::Windows::Forms::DockStyle::Fill;
			this->showall->Location = System::Drawing::Point(0, 0);
			this->showall->Name = L"showall";
			this->showall->Size = System::Drawing::Size(935, 569);
			this->showall->TabIndex = 2;
			// 
			// lapelShow
			// 
			this->lapelShow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lapelShow->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lapelShow->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lapelShow->ForeColor = System::Drawing::Color::White;
			this->lapelShow->Location = System::Drawing::Point(20, 65);
			this->lapelShow->MaxLength = 9999999;
			this->lapelShow->Multiline = true;
			this->lapelShow->Name = L"lapelShow";
			this->lapelShow->ReadOnly = true;
			this->lapelShow->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->lapelShow->Size = System::Drawing::Size(463, 478);
			this->lapelShow->TabIndex = 6;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Gray;
			this->label9->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label9.Image")));
			this->label9->Location = System::Drawing::Point(172, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 52);
			this->label9->TabIndex = 4;
			this->label9->Text = L" The Text";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// okShow
			// 
			this->okShow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okShow.BackgroundImage")));
			this->okShow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okShow->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okShow->ForeColor = System::Drawing::Color::White;
			this->okShow->Location = System::Drawing::Point(563, 464);
			this->okShow->Name = L"okShow";
			this->okShow->Size = System::Drawing::Size(101, 52);
			this->okShow->TabIndex = 5;
			this->okShow->Text = L"OK";
			this->okShow->UseVisualStyleBackColor = true;
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add.BackgroundImage")));
			this->add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add->Controls->Add(this->okadd);
			this->add->Controls->Add(this->Boxaddline);
			this->add->Controls->Add(this->pictureBox1);
			this->add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add->ForeColor = System::Drawing::Color::White;
			this->add->Location = System::Drawing::Point(0, 0);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(935, 569);
			this->add->TabIndex = 11;
			// 
			// okadd
			// 
			this->okadd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okadd.BackgroundImage")));
			this->okadd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okadd->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okadd->ForeColor = System::Drawing::Color::White;
			this->okadd->Location = System::Drawing::Point(145, 356);
			this->okadd->Name = L"okadd";
			this->okadd->Size = System::Drawing::Size(205, 67);
			this->okadd->TabIndex = 2;
			this->okadd->Text = L"Add";
			this->okadd->UseVisualStyleBackColor = true;
			this->okadd->Click += gcnew System::EventHandler(this, &textEdit::okadd_Click);
			// 
			// Boxaddline
			// 
			this->Boxaddline->BackColor = System::Drawing::Color::Gray;
			this->Boxaddline->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Boxaddline->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Boxaddline->Location = System::Drawing::Point(45, 200);
			this->Boxaddline->Multiline = true;
			this->Boxaddline->Name = L"Boxaddline";
			this->Boxaddline->Size = System::Drawing::Size(403, 93);
			this->Boxaddline->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(125, 57);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(265, 72);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->button1);
			this->flowLayoutPanel2->Controls->Add(this->button11);
			this->flowLayoutPanel2->Controls->Add(this->button13);
			this->flowLayoutPanel2->Controls->Add(this->button14);
			this->flowLayoutPanel2->Controls->Add(this->button15);
			this->flowLayoutPanel2->Controls->Add(this->button2);
			this->flowLayoutPanel2->Controls->Add(this->closebutton);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel2->Location = System::Drawing::Point(935, 110);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(105, 569);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->Location = System::Drawing::Point(12, 20);
			this->button1->Margin = System::Windows::Forms::Padding(12, 20, 3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 57);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &textEdit::button12_Click);
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->Location = System::Drawing::Point(12, 100);
			this->button11->Margin = System::Windows::Forms::Padding(12, 20, 3, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(79, 57);
			this->button11->TabIndex = 0;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &textEdit::button11_Click);
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->Location = System::Drawing::Point(12, 180);
			this->button13->Margin = System::Windows::Forms::Padding(12, 20, 3, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(79, 57);
			this->button13->TabIndex = 0;
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &textEdit::button13_Click);
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button14->Location = System::Drawing::Point(12, 260);
			this->button14->Margin = System::Windows::Forms::Padding(12, 20, 3, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(79, 57);
			this->button14->TabIndex = 0;
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &textEdit::button14_Click);
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->Location = System::Drawing::Point(12, 340);
			this->button15->Margin = System::Windows::Forms::Padding(12, 20, 3, 3);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(79, 57);
			this->button15->TabIndex = 0;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &textEdit::button15_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 420);
			this->button2->Margin = System::Windows::Forms::Padding(12, 20, 3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 57);
			this->button2->TabIndex = 1;
			this->button2->Text = L"View Box";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &textEdit::button2_Click);
			// 
			// closebutton
			// 
			this->closebutton->Font = (gcnew System::Drawing::Font(L"Century", 19.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->closebutton->Location = System::Drawing::Point(12, 500);
			this->closebutton->Margin = System::Windows::Forms::Padding(12, 20, 3, 3);
			this->closebutton->Name = L"closebutton";
			this->closebutton->Size = System::Drawing::Size(79, 57);
			this->closebutton->TabIndex = 2;
			this->closebutton->Text = L"X";
			this->closebutton->UseVisualStyleBackColor = true;
			this->closebutton->Click += gcnew System::EventHandler(this, &textEdit::closebutton_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->save);
			this->flowLayoutPanel1->Controls->Add(this->print);
			this->flowLayoutPanel1->Controls->Add(this->refresh);
			this->flowLayoutPanel1->Controls->Add(this->addLine);
			this->flowLayoutPanel1->Controls->Add(this->insertline);
			this->flowLayoutPanel1->Controls->Add(this->deleate);
			this->flowLayoutPanel1->Controls->Add(this->getlines);
			this->flowLayoutPanel1->Controls->Add(this->update);
			this->flowLayoutPanel1->Controls->Add(this->find);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 31);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1040, 79);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// save
			// 
			this->save->Location = System::Drawing::Point(12, 10);
			this->save->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(79, 57);
			this->save->TabIndex = 0;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &textEdit::save_Click);
			// 
			// print
			// 
			this->print->Location = System::Drawing::Point(106, 10);
			this->print->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->print->Name = L"print";
			this->print->Size = System::Drawing::Size(79, 57);
			this->print->TabIndex = 0;
			this->print->Text = L"Show";
			this->print->UseVisualStyleBackColor = true;
			this->print->Click += gcnew System::EventHandler(this, &textEdit::print_Click);
			// 
			// refresh
			// 
			this->refresh->Location = System::Drawing::Point(200, 10);
			this->refresh->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(79, 57);
			this->refresh->TabIndex = 0;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = true;
			this->refresh->Click += gcnew System::EventHandler(this, &textEdit::refresh_Click);
			// 
			// addLine
			// 
			this->addLine->Location = System::Drawing::Point(294, 10);
			this->addLine->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->addLine->Name = L"addLine";
			this->addLine->Size = System::Drawing::Size(79, 57);
			this->addLine->TabIndex = 0;
			this->addLine->Text = L"Add line";
			this->addLine->UseVisualStyleBackColor = true;
			this->addLine->Click += gcnew System::EventHandler(this, &textEdit::addLine_Click);
			// 
			// insertline
			// 
			this->insertline->Location = System::Drawing::Point(388, 10);
			this->insertline->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->insertline->Name = L"insertline";
			this->insertline->Size = System::Drawing::Size(79, 57);
			this->insertline->TabIndex = 0;
			this->insertline->Text = L"Insert line";
			this->insertline->UseVisualStyleBackColor = true;
			this->insertline->Click += gcnew System::EventHandler(this, &textEdit::insertline_Click);
			// 
			// deleate
			// 
			this->deleate->Location = System::Drawing::Point(482, 10);
			this->deleate->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->deleate->Name = L"deleate";
			this->deleate->Size = System::Drawing::Size(79, 57);
			this->deleate->TabIndex = 0;
			this->deleate->Text = L"Deleate ";
			this->deleate->UseVisualStyleBackColor = true;
			this->deleate->Click += gcnew System::EventHandler(this, &textEdit::deleate_Click);
			// 
			// getlines
			// 
			this->getlines->Location = System::Drawing::Point(576, 10);
			this->getlines->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->getlines->Name = L"getlines";
			this->getlines->Size = System::Drawing::Size(79, 57);
			this->getlines->TabIndex = 0;
			this->getlines->Text = L"Get Line";
			this->getlines->UseVisualStyleBackColor = true;
			this->getlines->Click += gcnew System::EventHandler(this, &textEdit::getline_Click);
			// 
			// update
			// 
			this->update->Location = System::Drawing::Point(670, 10);
			this->update->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->update->Name = L"update";
			this->update->Size = System::Drawing::Size(79, 57);
			this->update->TabIndex = 0;
			this->update->Text = L"Update";
			this->update->UseVisualStyleBackColor = true;
			this->update->Click += gcnew System::EventHandler(this, &textEdit::update_Click);
			// 
			// find
			// 
			this->find->Location = System::Drawing::Point(764, 10);
			this->find->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->find->Name = L"find";
			this->find->Size = System::Drawing::Size(79, 57);
			this->find->TabIndex = 0;
			this->find->Text = L"Find All";
			this->find->UseVisualStyleBackColor = true;
			this->find->Click += gcnew System::EventHandler(this, &textEdit::find_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(858, 10);
			this->button6->Margin = System::Windows::Forms::Padding(12, 10, 3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(79, 57);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Find Replace";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &textEdit::button6_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(955, 10);
			this->label1->Margin = System::Windows::Forms::Padding(15, 10, 3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 57);
			this->label1->TabIndex = 1;
			this->label1->Text = L"File Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1040, 31);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->newToolStripMenuItem, this->saveToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(49, 27);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(136, 28);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &textEdit::openToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(136, 28);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &textEdit::newToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(136, 28);
			this->saveToolStripMenuItem->Text = L"save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &textEdit::saveToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(53, 27);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(60, 27);
			this->viewToolStripMenuItem->Text = L"View";
			this->viewToolStripMenuItem->Click += gcnew System::EventHandler(this, &textEdit::viewToolStripMenuItem_Click);
			// 
			// textEdit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1040, 679);
			this->Controls->Add(this->panel1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"textEdit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"textEdit";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->textPanal->ResumeLayout(false);
			this->findall->ResumeLayout(false);
			this->findall->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->insert->ResumeLayout(false);
			this->insert->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->updateline->ResumeLayout(false);
			this->updateline->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->textBoxpanal->ResumeLayout(false);
			this->textBoxpanal->PerformLayout();
			this->findandreplace->ResumeLayout(false);
			this->findandreplace->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->Deleatt->ResumeLayout(false);
			this->Deleatt->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->lineGet->ResumeLayout(false);
			this->lineGet->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->newfilepanal->ResumeLayout(false);
			this->newfilepanal->PerformLayout();
			this->showall->ResumeLayout(false);
			this->showall->PerformLayout();
			this->add->ResumeLayout(false);
			this->add->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private:void changfont( float x)
{
	this->textBoxedit->Font = (gcnew System::Drawing::Font(L"Tahoma", fontsize, System::Drawing::FontStyle::Regular,
	System::Drawing::GraphicsUnit::Point,
	static_cast<System::Byte>(0)));
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	fontsize++;
	changfont(fontsize);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	fontsize--;
	changfont(fontsize);
}
private: System::Void viewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textPanal->BringToFront();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxedit->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxedit->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxedit->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
}

private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isOpen)
		saveTextToFile(textBoxedit->Text, filename);
	else
		MessageBox::Show("No File Opend to Save");
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	 if(isOpen)
	   saveTextToFile(textBoxedit->Text, filename);
}
private: System::Void print_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lapelShow->Text = this->filetext;
	this->showall->BringToFront();
}
private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxedit->Text = "";
}
private: System::Void addLine_Click(System::Object^ sender, System::EventArgs^ e) {
	this->add->BringToFront();
}
private: System::Void insertline_Click(System::Object^ sender, System::EventArgs^ e) {
	this->insert->BringToFront();
}
private: System::Void deleate_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Deleatt->BringToFront();
}
private: System::Void getline_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lineGet->BringToFront();
}
private: System::Void update_Click(System::Object^ sender, System::EventArgs^ e) {
	this->updateline->BringToFront();
}
private: System::Void find_Click(System::Object^ sender, System::EventArgs^ e) {
	this->findall->BringToFront();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->findandreplace->BringToFront();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->textBoxpanal->BringToFront();
}
	   // open file
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->InitialDirectory = "This PC";
	openFileDialog1->RestoreDirectory = true;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		filename = openFileDialog1->FileName;
		Openfineintext(filename);
		isOpen = true;
		label1->Text = filename;
	}
}
	   // new file
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->newfilepanal->BringToFront();
}
	   // pass file in the textbox
private: void Openfineintext(String^ filename)
{
	StreamReader^ open = File::OpenText(filename);
	String^ text1 = open->ReadToEnd();
	MessageBox::Show(filename);
	this->textBoxedit->Text = text1;
	filetext = text1;
	open->Close();
	
}
public: static std::string toStandardString(System::String^ string)
{
	System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
	char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
	std::string returnString(charPointer, string->Length);
	Marshal::FreeHGlobal(pointer);
	return returnString;
}
private: void saveTextToFile(String^ Text, String^ fileName)
{
	String^ infile = Text;
	StreamWriter^ streamwriter = gcnew StreamWriter(gcnew FileStream(fileName, FileMode::Create,
		FileAccess::Write, FileShare::None)
	);
	filetext = Text;
	streamwriter->WriteLine(infile);
	streamwriter->Close();
}
private:String^ path;
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	using namespace System::IO;
	FolderBrowserDialog^ pathfile = gcnew FolderBrowserDialog;
	if (pathfile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		path = pathfile->SelectedPath;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	
		StreamWriter^ writeFile = gcnew StreamWriter(gcnew FileStream(path + this->Enterfilename->Text + ".txt",
			FileMode::Create, FileAccess::Write, FileShare::ReadWrite));
		//filename2 = pathfile->SelectedPath + filename->Text + ".txt";
		writeFile->Close();
		filename = path + this->Enterfilename->Text + ".txt";
		this->textPanal->BringToFront();
		Openfineintext(filename);
		isOpen = true;
}

private: void splittext(String^ text)
{

	string lines= toStandardString(text);
	//lines.erase(remove(lines.begin(),lines.end(), '\r'), lines.end());
	stringstream check1 (lines);
	string intermediate;
	
	// Tokenizing w.r.t. space '\n'
	while (getline(check1, intermediate,'\n'))
	{
		filelines.append((intermediate));
	}
}
private: String^ getStringfromArray()
{
	string ss="";
	
	for (int i = 0; i < filelines.getSize(); i++)
	{
		ss.append(filelines.atIndx(i)+'\n');
	}
	//ss.replace(ss.begin(), ss.end(), '\r', ' ');
	
	return  gcnew String(ss.c_str());
	ss = "";
}
private: System::Void okadd_Click(System::Object^ sender, System::EventArgs^ e) {
	splittext(filetext);
	filelines.append(toStandardString(Boxaddline->Text));
	saveTextToFile("", filename);
	saveTextToFile(getStringfromArray(), filename);
	Openfineintext(filename);
	filelines.clear();
}
private: System::Void closebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isOpen)
	{
		saveTextToFile(textBoxedit->Text, filename);
		Application::Exit();
	}
	else
		Application::Exit();
}


private: System::Void okinsert_Click(System::Object^ sender, System::EventArgs^ e) {
	string index = toStandardString(this->lineIndex->Text);
	string newline = toStandardString(this->lineInsert->Text);
	stringstream geek(index);
	int x = 0;
	geek >> x;
	splittext(filetext);
	filelines.insertAt(x, (newline));
	saveTextToFile("", filename);
	saveTextToFile(getStringfromArray(), filename);
	Openfineintext(filename);
	filelines.clear();
}
private: System::Void okgetline_Click(System::Object^ sender, System::EventArgs^ e) {
	string index = toStandardString(this->textBox9->Text);
	stringstream geek(index);
	int x = 0;
	geek >> x;
	splittext(filetext);
	if (x*2 <= filelines.getSize())
	{
		this->textBox8->Text = gcnew String(filelines.atIndx(x*2).c_str());
		filelines.clear();
	}
	else
	{
		MessageBox::Show("The Index Not exist");
		filelines.clear();
	}
	
}
private: System::Void okdeleate_Click(System::Object^ sender, System::EventArgs^ e) {
	string index = toStandardString(this->textBox11->Text);
	stringstream geek(index);
	int x = 0;
	geek >> x;
	splittext(filetext);
	if (x*2 <= filelines.getSize())
	{
		filelines.deletAt(x*2);
		saveTextToFile("", filename);
		saveTextToFile(getStringfromArray(), filename);
		Openfineintext(filename);
		filelines.clear();
	}
	else
	{
		MessageBox::Show("The Index Not exist");
		filelines.clear();
	}
}
private: System::Void okUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	string index = toStandardString(this->textBox7->Text);
	stringstream geek(index);
	int x = 0;
	geek >> x;
	splittext(filetext);
	if (x*2 <= filelines.getSize())
	{
		filelines.update(x*2,(toStandardString(this->textBox6->Text)));
		saveTextToFile("", filename);
		saveTextToFile(getStringfromArray(), filename);
		Openfineintext(filename);
		filelines.clear();
	}
	else
	{
		MessageBox::Show("The Index Not exist");
		filelines.clear();
	}
}
private: string findAndReplace(string str, string old_word, string nnew)
{
	bool status = false;
	int startindex = 0, endindex = old_word.length();
	for (int i = 0; i < str.length(); i++) {
		/*if (str[0] == old_word[0]) {
			startindex = 0;
		}*/
		if (str[i] == old_word[0] && str[i - 1] == ' ') {
			startindex = i;
		
		for (int j = 0; j < old_word.length(); j++, i++) {
			if (str[i] != old_word[j]) {
				status = false;
				break;
			}
			else {
				status = true;
			}
		}
	}
}
	  if (status) {
		return str.replace(startindex, endindex, nnew);
	}
	else {
		return "";
	}
}
private: System::Void okFAR_Click(System::Object^ sender, System::EventArgs^ e) {

	string oldw = toStandardString(this->textBox5->Text);
	string neww = toStandardString(this->textBox4->Text);
	splittext(filetext);
	for (int i = 0; i < filelines.getSize(); i++)
	{
		if (filelines.atIndx(i).find(neww))
			filelines.update(i, findAndReplace(filelines.atIndx(i), oldw, neww));
	}
	saveTextToFile(getStringfromArray(), filename);
	Openfineintext(filename);
	filelines.clear();
}

private: System::Void okfindall_Click(System::Object^ sender, System::EventArgs^ e) {
	string word = toStandardString(this->textBox10->Text);
	string s;
	splittext(filetext);
	ArrList<int> indexs;
	bool stat = false;
	for (int i = 0; i < filelines.getSize(); i++)
	{
		for (int k = 0; k < filelines.atIndx(i).length(); k++)
		{
			for (int j = 0; j < word.length(); j++, k++)
			{
				if (filelines.atIndx(i)[k] != word[j])
				{
					stat = false;
					break;
				}
				else
				{
					stat = true;
					//indexs.append(i);
				}
			}
			if (stat)
			{
				indexs.append(i);
				break;
			}
			
		}
		if (stat == false)
		{
			// not found
		}
	}
	for (int i = 0; i < indexs.getSize(); i++)
	{
		s.append(to_string(indexs.atIndx(i)) + '\n');
	}
	this->textBox1->Text = "//gcnew String(s.c_str())";
	s = "";
}
};
}

