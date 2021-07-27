#pragma once


namespace miniTextEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Functions
	/// </summary>
	public ref class Functions : public System::Windows::Forms::Form
	{
	public:
		Functions(void)
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
		~Functions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ home;
	protected:
	private: System::Windows::Forms::Panel^ showall;
	private: System::Windows::Forms::Panel^ add;
	private: System::Windows::Forms::Panel^ insert;
	private: System::Windows::Forms::Panel^ findall;
	private: System::Windows::Forms::Panel^ findandreplace;
	private: System::Windows::Forms::Panel^ updateline;
	private: System::Windows::Forms::Panel^ Deleatt;
	private: System::Windows::Forms::Panel^ getline;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ okShow;

	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ okdeleate;

	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ okgetline;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ okUpdate;

	private: System::Windows::Forms::Button^ okinsert;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ okFAR;
	private: System::Windows::Forms::Button^ okadd;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ okfindall;



	private: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::TextBox^ lapelShow;




	private:

	private:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Functions::typeid));
			this->home = (gcnew System::Windows::Forms::Panel());
			this->showall = (gcnew System::Windows::Forms::Panel());
			this->lapelShow = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->okShow = (gcnew System::Windows::Forms::Button());
			this->insert = (gcnew System::Windows::Forms::Panel());
			this->okinsert = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->findall = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->okfindall = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Panel());
			this->okadd = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Deleatt = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->okdeleate = (gcnew System::Windows::Forms::Button());
			this->updateline = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->okUpdate = (gcnew System::Windows::Forms::Button());
			this->findandreplace = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->okFAR = (gcnew System::Windows::Forms::Button());
			this->getline = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->okgetline = (gcnew System::Windows::Forms::Button());
			this->home->SuspendLayout();
			this->showall->SuspendLayout();
			this->insert->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->findall->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->add->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Deleatt->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->updateline->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->findandreplace->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->getline->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// home
			// 
			this->home->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"home.BackgroundImage")));
			this->home->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->home->Controls->Add(this->findall);
			this->home->Controls->Add(this->add);
			this->home->Controls->Add(this->Deleatt);
			this->home->Controls->Add(this->updateline);
			this->home->Controls->Add(this->findandreplace);
			this->home->Controls->Add(this->getline);
			this->home->Controls->Add(this->insert);
			this->home->Controls->Add(this->showall);
			this->home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->home->Location = System::Drawing::Point(0, 0);
			this->home->Name = L"home";
			this->home->Size = System::Drawing::Size(827, 508);
			this->home->TabIndex = 0;
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
			this->showall->Size = System::Drawing::Size(827, 508);
			this->showall->TabIndex = 1;
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
			this->lapelShow->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->lapelShow->Size = System::Drawing::Size(419, 416);
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
			this->label9->Click += gcnew System::EventHandler(this, &Functions::label9_Click);
			// 
			// okShow
			// 
			this->okShow->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okShow.BackgroundImage")));
			this->okShow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okShow->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okShow->ForeColor = System::Drawing::Color::White;
			this->okShow->Location = System::Drawing::Point(489, 429);
			this->okShow->Name = L"okShow";
			this->okShow->Size = System::Drawing::Size(101, 52);
			this->okShow->TabIndex = 5;
			this->okShow->Text = L"OK";
			this->okShow->UseVisualStyleBackColor = true;
			this->okShow->Click += gcnew System::EventHandler(this, &Functions::okShow_Click);
			// 
			// insert
			// 
			this->insert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->insert->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"insert.BackgroundImage")));
			this->insert->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->insert->Controls->Add(this->okinsert);
			this->insert->Controls->Add(this->label2);
			this->insert->Controls->Add(this->textBox3);
			this->insert->Controls->Add(this->label1);
			this->insert->Controls->Add(this->textBox2);
			this->insert->Controls->Add(this->pictureBox2);
			this->insert->Dock = System::Windows::Forms::DockStyle::Fill;
			this->insert->Location = System::Drawing::Point(0, 0);
			this->insert->Name = L"insert";
			this->insert->Size = System::Drawing::Size(827, 508);
			this->insert->TabIndex = 1;
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
			this->okinsert->Size = System::Drawing::Size(101, 52);
			this->okinsert->TabIndex = 5;
			this->okinsert->Text = L"OK";
			this->okinsert->UseVisualStyleBackColor = true;
			this->okinsert->Click += gcnew System::EventHandler(this, &Functions::okinsert_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Gray;
			this->label2->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(12, 333);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 42);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Text";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Gray;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(75, 333);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(373, 42);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Gray;
			this->label1->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(12, 196);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 42);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Line`s Number";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Gray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(176, 200);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(190, 42);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// findall
			// 
			this->findall->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->findall->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"findall.BackgroundImage")));
			this->findall->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->findall->Controls->Add(this->label14);
			this->findall->Controls->Add(this->label13);
			this->findall->Controls->Add(this->textBox10);
			this->findall->Controls->Add(this->label12);
			this->findall->Controls->Add(this->pictureBox7);
			this->findall->Controls->Add(this->okfindall);
			this->findall->Dock = System::Windows::Forms::DockStyle::Fill;
			this->findall->Location = System::Drawing::Point(0, 0);
			this->findall->Name = L"findall";
			this->findall->Size = System::Drawing::Size(827, 508);
			this->findall->TabIndex = 1;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label14.Image")));
			this->label14->Location = System::Drawing::Point(36, 302);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 33);
			this->label14->TabIndex = 6;
			this->label14->Text = L"The Lines";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label13.Image")));
			this->label13->Location = System::Drawing::Point(152, 247);
			this->label13->Name = L"label13";
			this->label13->Padding = System::Windows::Forms::Padding(10);
			this->label13->Size = System::Drawing::Size(155, 225);
			this->label13->TabIndex = 5;
			this->label13->Click += gcnew System::EventHandler(this, &Functions::label13_Click);
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
			this->label12->Size = System::Drawing::Size(58, 42);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Word";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label12->Click += gcnew System::EventHandler(this, &Functions::label12_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(75, 47);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(123, 72);
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
			this->okfindall->Size = System::Drawing::Size(139, 67);
			this->okfindall->TabIndex = 2;
			this->okfindall->Text = L"OK";
			this->okfindall->UseVisualStyleBackColor = true;
			this->okfindall->Click += gcnew System::EventHandler(this, &Functions::okfindall_Click);
			// 
			// add
			// 
			this->add->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add.BackgroundImage")));
			this->add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add->Controls->Add(this->okadd);
			this->add->Controls->Add(this->textBox1);
			this->add->Controls->Add(this->pictureBox1);
			this->add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add->ForeColor = System::Drawing::Color::White;
			this->add->Location = System::Drawing::Point(0, 0);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(827, 508);
			this->add->TabIndex = 1;
			// 
			// okadd
			// 
			this->okadd->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okadd.BackgroundImage")));
			this->okadd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okadd->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->okadd->ForeColor = System::Drawing::Color::White;
			this->okadd->Location = System::Drawing::Point(145, 337);
			this->okadd->Name = L"okadd";
			this->okadd->Size = System::Drawing::Size(139, 67);
			this->okadd->TabIndex = 2;
			this->okadd->Text = L"Add";
			this->okadd->UseVisualStyleBackColor = true;
			this->okadd->Click += gcnew System::EventHandler(this, &Functions::okadd_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Gray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(45, 200);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(392, 53);
			this->textBox1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(99, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(255, 72);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Deleatt
			// 
			this->Deleatt->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Deleatt->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Deleatt.BackgroundImage")));
			this->Deleatt->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Deleatt->Controls->Add(this->pictureBox6);
			this->Deleatt->Controls->Add(this->textBox11);
			this->Deleatt->Controls->Add(this->label10);
			this->Deleatt->Controls->Add(this->okdeleate);
			this->Deleatt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Deleatt->Location = System::Drawing::Point(0, 0);
			this->Deleatt->Name = L"Deleatt";
			this->Deleatt->Size = System::Drawing::Size(827, 508);
			this->Deleatt->TabIndex = 1;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(99, 65);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(219, 54);
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
			this->textBox11->Size = System::Drawing::Size(190, 42);
			this->textBox11->TabIndex = 1;
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Gray;
			this->label10->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label10.Image")));
			this->label10->Location = System::Drawing::Point(39, 238);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(141, 42);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Line`s Number";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// okdeleate
			// 
			this->okdeleate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okdeleate.BackgroundImage")));
			this->okdeleate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okdeleate->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okdeleate->ForeColor = System::Drawing::Color::White;
			this->okdeleate->Location = System::Drawing::Point(145, 368);
			this->okdeleate->Name = L"okdeleate";
			this->okdeleate->Size = System::Drawing::Size(101, 52);
			this->okdeleate->TabIndex = 5;
			this->okdeleate->Text = L"OK";
			this->okdeleate->UseVisualStyleBackColor = true;
			this->okdeleate->Click += gcnew System::EventHandler(this, &Functions::okdeleate_Click);
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
			this->updateline->Controls->Add(this->label5);
			this->updateline->Controls->Add(this->okUpdate);
			this->updateline->Dock = System::Windows::Forms::DockStyle::Fill;
			this->updateline->Location = System::Drawing::Point(0, 0);
			this->updateline->Name = L"updateline";
			this->updateline->Size = System::Drawing::Size(827, 508);
			this->updateline->TabIndex = 1;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(99, 47);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(208, 72);
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
			this->textBox7->Size = System::Drawing::Size(190, 42);
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
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(75, 333);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(373, 42);
			this->textBox6->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Gray;
			this->label5->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->Location = System::Drawing::Point(12, 333);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 42);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Text";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// okUpdate
			// 
			this->okUpdate->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"okUpdate.BackgroundImage")));
			this->okUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->okUpdate->Font = (gcnew System::Drawing::Font(L"Viner Hand ITC", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->okUpdate->ForeColor = System::Drawing::Color::White;
			this->okUpdate->Location = System::Drawing::Point(176, 429);
			this->okUpdate->Name = L"okUpdate";
			this->okUpdate->Size = System::Drawing::Size(101, 52);
			this->okUpdate->TabIndex = 5;
			this->okUpdate->Text = L"OK";
			this->okUpdate->UseVisualStyleBackColor = true;
			this->okUpdate->Click += gcnew System::EventHandler(this, &Functions::okUpdate_Click);
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
			this->findandreplace->Controls->Add(this->label3);
			this->findandreplace->Controls->Add(this->okFAR);
			this->findandreplace->Dock = System::Windows::Forms::DockStyle::Fill;
			this->findandreplace->Location = System::Drawing::Point(0, 0);
			this->findandreplace->Name = L"findandreplace";
			this->findandreplace->Size = System::Drawing::Size(827, 508);
			this->findandreplace->TabIndex = 1;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(99, 47);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(284, 54);
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
			this->textBox5->Size = System::Drawing::Size(190, 42);
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
			this->textBox4->Size = System::Drawing::Size(190, 42);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Gray;
			this->label3->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label3.Image")));
			this->label3->Location = System::Drawing::Point(12, 320);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 42);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Replace Py";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->okFAR->Size = System::Drawing::Size(101, 52);
			this->okFAR->TabIndex = 5;
			this->okFAR->Text = L"OK";
			this->okFAR->UseVisualStyleBackColor = true;
			this->okFAR->Click += gcnew System::EventHandler(this, &Functions::okFAR_Click);
			// 
			// getline
			// 
			this->getline->BackColor = System::Drawing::SystemColors::ControlDark;
			this->getline->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"getline.BackgroundImage")));
			this->getline->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->getline->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->getline->Controls->Add(this->pictureBox5);
			this->getline->Controls->Add(this->textBox9);
			this->getline->Controls->Add(this->label8);
			this->getline->Controls->Add(this->textBox8);
			this->getline->Controls->Add(this->label7);
			this->getline->Controls->Add(this->okgetline);
			this->getline->Dock = System::Windows::Forms::DockStyle::Fill;
			this->getline->Location = System::Drawing::Point(0, 0);
			this->getline->Name = L"getline";
			this->getline->Size = System::Drawing::Size(827, 508);
			this->getline->TabIndex = 1;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(99, 47);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(219, 54);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Gray;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(176, 200);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(190, 42);
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
			this->label8->Location = System::Drawing::Point(12, 196);
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
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(75, 333);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(373, 42);
			this->textBox8->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Gray;
			this->label7->Font = (gcnew System::Drawing::Font(L"Barlow Condensed", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label7.Image")));
			this->label7->Location = System::Drawing::Point(12, 333);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 42);
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
			this->okgetline->Location = System::Drawing::Point(176, 429);
			this->okgetline->Name = L"okgetline";
			this->okgetline->Size = System::Drawing::Size(101, 52);
			this->okgetline->TabIndex = 5;
			this->okgetline->Text = L"OK";
			this->okgetline->UseVisualStyleBackColor = true;
			this->okgetline->Click += gcnew System::EventHandler(this, &Functions::okgetline_Click);
			// 
			// Functions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 508);
			this->Controls->Add(this->home);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Functions";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Functions";
			this->home->ResumeLayout(false);
			this->showall->ResumeLayout(false);
			this->showall->PerformLayout();
			this->insert->ResumeLayout(false);
			this->insert->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->findall->ResumeLayout(false);
			this->findall->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->add->ResumeLayout(false);
			this->add->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Deleatt->ResumeLayout(false);
			this->Deleatt->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->updateline->ResumeLayout(false);
			this->updateline->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->findandreplace->ResumeLayout(false);
			this->findandreplace->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->getline->ResumeLayout(false);
			this->getline->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		public:void getinsertp()
		{
			this->insert->BringToFront();
		}
		public:void getShowp()
		{
			
			this->showall->BringToFront();
		}
		public:void getaddp()
		{
			this->add->BringToFront();
		}
		public:void getdeleatp()
		{
			this->Deleatt->BringToFront();
		}
		public:void getupdatep()
		{
			this->updateline->BringToFront();
		}
		public:void getlinep()
		{
			this->getline->BringToFront();
		}
		public:void getfindallp()
		{
			this->findall->BringToFront();
		}
		public:void getfindandreplasep()
		{
			this->findandreplace->BringToFront();
		}
	


private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void okinsert_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}

private: System::Void okFAR_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void okUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void okdeleate_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void okadd_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void okgetline_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void okfindall_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void okShow_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
