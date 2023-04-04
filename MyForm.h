#pragma once

namespace student {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// MyForm 摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;
		DataSet^ DS = gcnew DataSet();

		String^ sqlQuery;
		String^ sqlServer = "localhost";
		String^ username = "root";
		String^ password = "123456";
		String^ database = "cppstudentdb";
	private: System::Windows::Forms::TabPage^ stuData;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txt1;




	private: System::Windows::Forms::ComboBox^ cboModule2;



	private: System::Windows::Forms::ComboBox^ cboModule1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt8;

	private: System::Windows::Forms::TextBox^ txt4;
	private: System::Windows::Forms::TextBox^ txt6;
	private: System::Windows::Forms::TextBox^ txt7;



	private: System::Windows::Forms::TextBox^ txt3;
	private: System::Windows::Forms::TextBox^ txt5;


	private: System::Windows::Forms::ComboBox^ cboModule8;

	private: System::Windows::Forms::ComboBox^ cboModule4;
	private: System::Windows::Forms::ComboBox^ cboModule7;


	private: System::Windows::Forms::ComboBox^ cboModule3;
	private: System::Windows::Forms::ComboBox^ cboModule6;


	private: System::Windows::Forms::ComboBox^ cboModule5;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Label^ lblRanking;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::NumericUpDown^ phdnum;
	private: System::Windows::Forms::NumericUpDown^ mscnum;
	private: System::Windows::Forms::NumericUpDown^ MAnum;
	private: System::Windows::Forms::NumericUpDown^ BScnum;




private: System::Windows::Forms::NumericUpDown^ BAnum;

private: System::Windows::Forms::Label^ BA;
private: System::Windows::Forms::Label^ Phd;


private: System::Windows::Forms::Label^ MSc;

private: System::Windows::Forms::Label^ BSc;
private: System::Windows::Forms::Label^ MA;


private: System::Windows::Forms::Label^ HomeStudent;
private: System::Windows::Forms::Label^ ScholarShip;


private: System::Windows::Forms::Label^ Exchange;

private: System::Windows::Forms::Label^ Accommodation;

private: System::Windows::Forms::Label^ Oversea;
private: System::Windows::Forms::ComboBox^ ScholarShipCombo;



private: System::Windows::Forms::ComboBox^ ExchangeCombo;

private: System::Windows::Forms::ComboBox^ accommodationCombo;

private: System::Windows::Forms::ComboBox^ OverseaCombo;

private: System::Windows::Forms::ComboBox^ HomeStudentCombo;

private: System::Windows::Forms::Button^ btnExit;

private: System::Windows::Forms::Button^ btnResult;

private: System::Windows::Forms::Button^ btnReset;

private: System::Windows::Forms::Button^ btnAddNew;
private: System::Windows::Forms::Label^ DeanofFaculty;
private: System::Windows::Forms::Label^ ProgramLeader;



private: System::Windows::Forms::Label^ Course;
private: System::Windows::Forms::Label^ Coursetutor;


private: System::Windows::Forms::Label^ CourseCode;
private: System::Windows::Forms::Label^ Faculty;
private: System::Windows::Forms::ComboBox^ CourseCombo;




private: System::Windows::Forms::TextBox^ TutorText;


private: System::Windows::Forms::TextBox^ leaderText;

private: System::Windows::Forms::TextBox^ FacultyDeanText;

private: System::Windows::Forms::TextBox^ FacultyText;

private: System::Windows::Forms::TextBox^ CourseCodeText;













private: System::Windows::Forms::Label^ Address;

private: System::Windows::Forms::Label^ StudentID;
private: System::Windows::Forms::Label^ Mobile;


private: System::Windows::Forms::Label^ Gender;
private: System::Windows::Forms::TextBox^ FirstNameText;


private: System::Windows::Forms::Label^ Email;
private: System::Windows::Forms::TextBox^ SubNameText;


private: System::Windows::Forms::Label^ DOB;
private: System::Windows::Forms::TextBox^ AddressText;
private: System::Windows::Forms::TextBox^ MobileText;



private: System::Windows::Forms::Label^ FirstName;
private: System::Windows::Forms::TextBox^ StudentIDText;
private: System::Windows::Forms::TextBox^ EmailText;



private: System::Windows::Forms::Label^ SubName;
private: System::Windows::Forms::TextBox^ DOBText;


private: System::Windows::Forms::ComboBox^ GenderComba;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->txt8 = (gcnew System::Windows::Forms::TextBox());
			this->txt4 = (gcnew System::Windows::Forms::TextBox());
			this->txt6 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt7 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txt5 = (gcnew System::Windows::Forms::TextBox());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->cboModule8 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule4 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule7 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule3 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule6 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule2 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule5 = (gcnew System::Windows::Forms::ComboBox());
			this->cboModule1 = (gcnew System::Windows::Forms::ComboBox());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblRanking = (gcnew System::Windows::Forms::Label());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->phdnum = (gcnew System::Windows::Forms::NumericUpDown());
			this->mscnum = (gcnew System::Windows::Forms::NumericUpDown());
			this->MAnum = (gcnew System::Windows::Forms::NumericUpDown());
			this->BScnum = (gcnew System::Windows::Forms::NumericUpDown());
			this->BAnum = (gcnew System::Windows::Forms::NumericUpDown());
			this->BA = (gcnew System::Windows::Forms::Label());
			this->Phd = (gcnew System::Windows::Forms::Label());
			this->MSc = (gcnew System::Windows::Forms::Label());
			this->BSc = (gcnew System::Windows::Forms::Label());
			this->MA = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->HomeStudent = (gcnew System::Windows::Forms::Label());
			this->ScholarShip = (gcnew System::Windows::Forms::Label());
			this->Exchange = (gcnew System::Windows::Forms::Label());
			this->Accommodation = (gcnew System::Windows::Forms::Label());
			this->Oversea = (gcnew System::Windows::Forms::Label());
			this->ScholarShipCombo = (gcnew System::Windows::Forms::ComboBox());
			this->ExchangeCombo = (gcnew System::Windows::Forms::ComboBox());
			this->accommodationCombo = (gcnew System::Windows::Forms::ComboBox());
			this->OverseaCombo = (gcnew System::Windows::Forms::ComboBox());
			this->HomeStudentCombo = (gcnew System::Windows::Forms::ComboBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAddNew = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->DeanofFaculty = (gcnew System::Windows::Forms::Label());
			this->ProgramLeader = (gcnew System::Windows::Forms::Label());
			this->Course = (gcnew System::Windows::Forms::Label());
			this->Coursetutor = (gcnew System::Windows::Forms::Label());
			this->CourseCode = (gcnew System::Windows::Forms::Label());
			this->Faculty = (gcnew System::Windows::Forms::Label());
			this->CourseCombo = (gcnew System::Windows::Forms::ComboBox());
			this->TutorText = (gcnew System::Windows::Forms::TextBox());
			this->leaderText = (gcnew System::Windows::Forms::TextBox());
			this->FacultyDeanText = (gcnew System::Windows::Forms::TextBox());
			this->FacultyText = (gcnew System::Windows::Forms::TextBox());
			this->CourseCodeText = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Address = (gcnew System::Windows::Forms::Label());
			this->StudentID = (gcnew System::Windows::Forms::Label());
			this->Mobile = (gcnew System::Windows::Forms::Label());
			this->Gender = (gcnew System::Windows::Forms::Label());
			this->FirstNameText = (gcnew System::Windows::Forms::TextBox());
			this->Email = (gcnew System::Windows::Forms::Label());
			this->SubNameText = (gcnew System::Windows::Forms::TextBox());
			this->DOB = (gcnew System::Windows::Forms::Label());
			this->AddressText = (gcnew System::Windows::Forms::TextBox());
			this->MobileText = (gcnew System::Windows::Forms::TextBox());
			this->FirstName = (gcnew System::Windows::Forms::Label());
			this->StudentIDText = (gcnew System::Windows::Forms::TextBox());
			this->EmailText = (gcnew System::Windows::Forms::TextBox());
			this->SubName = (gcnew System::Windows::Forms::Label());
			this->DOBText = (gcnew System::Windows::Forms::TextBox());
			this->GenderComba = (gcnew System::Windows::Forms::ComboBox());
			this->stuData = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->phdnum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mscnum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MAnum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BScnum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BAnum))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->stuData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->stuData);
			this->tabControl1->Location = System::Drawing::Point(-2, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1284, 577);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Controls->Add(this->panel7);
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1276, 551);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"大学系统";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->txt8);
			this->panel7->Controls->Add(this->txt4);
			this->panel7->Controls->Add(this->txt6);
			this->panel7->Controls->Add(this->txt2);
			this->panel7->Controls->Add(this->txt7);
			this->panel7->Controls->Add(this->txt3);
			this->panel7->Controls->Add(this->txt5);
			this->panel7->Controls->Add(this->txt1);
			this->panel7->Controls->Add(this->cboModule8);
			this->panel7->Controls->Add(this->cboModule4);
			this->panel7->Controls->Add(this->cboModule7);
			this->panel7->Controls->Add(this->cboModule3);
			this->panel7->Controls->Add(this->cboModule6);
			this->panel7->Controls->Add(this->cboModule2);
			this->panel7->Controls->Add(this->cboModule5);
			this->panel7->Controls->Add(this->cboModule1);
			this->panel7->Controls->Add(this->lblDate);
			this->panel7->Controls->Add(this->label11);
			this->panel7->Controls->Add(this->lblRanking);
			this->panel7->Controls->Add(this->lblTotal);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->label1);
			this->panel7->Controls->Add(this->monthCalendar1);
			this->panel7->Location = System::Drawing::Point(898, 9);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(366, 538);
			this->panel7->TabIndex = 0;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
			// 
			// txt8
			// 
			this->txt8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt8->Location = System::Drawing::Point(232, 376);
			this->txt8->Name = L"txt8";
			this->txt8->Size = System::Drawing::Size(97, 21);
			this->txt8->TabIndex = 5;
			this->txt8->Text = L"0";
			this->txt8->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// txt4
			// 
			this->txt4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt4->Location = System::Drawing::Point(232, 274);
			this->txt4->Name = L"txt4";
			this->txt4->Size = System::Drawing::Size(97, 21);
			this->txt4->TabIndex = 5;
			this->txt4->Text = L"0";
			this->txt4->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// txt6
			// 
			this->txt6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt6->Location = System::Drawing::Point(232, 325);
			this->txt6->Name = L"txt6";
			this->txt6->Size = System::Drawing::Size(97, 21);
			this->txt6->TabIndex = 5;
			this->txt6->Text = L"0";
			this->txt6->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// txt2
			// 
			this->txt2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt2->Location = System::Drawing::Point(232, 223);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(97, 21);
			this->txt2->TabIndex = 5;
			this->txt2->Text = L"0";
			this->txt2->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// txt7
			// 
			this->txt7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt7->Location = System::Drawing::Point(232, 351);
			this->txt7->Name = L"txt7";
			this->txt7->Size = System::Drawing::Size(97, 21);
			this->txt7->TabIndex = 5;
			this->txt7->Text = L"0";
			this->txt7->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// txt3
			// 
			this->txt3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt3->Location = System::Drawing::Point(232, 249);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(97, 21);
			this->txt3->TabIndex = 5;
			this->txt3->Text = L"0";
			this->txt3->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// txt5
			// 
			this->txt5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt5->Location = System::Drawing::Point(232, 300);
			this->txt5->Name = L"txt5";
			this->txt5->Size = System::Drawing::Size(97, 21);
			this->txt5->TabIndex = 5;
			this->txt5->Text = L"0";
			this->txt5->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// txt1
			// 
			this->txt1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt1->Location = System::Drawing::Point(232, 198);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(97, 21);
			this->txt1->TabIndex = 5;
			this->txt1->Text = L"0";
			this->txt1->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeave);
			// 
			// cboModule8
			// 
			this->cboModule8->FormattingEnabled = true;
			this->cboModule8->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule8->Location = System::Drawing::Point(66, 377);
			this->cboModule8->Name = L"cboModule8";
			this->cboModule8->Size = System::Drawing::Size(163, 20);
			this->cboModule8->TabIndex = 3;
			this->cboModule8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule8_SelectedIndexChanged);
			// 
			// cboModule4
			// 
			this->cboModule4->FormattingEnabled = true;
			this->cboModule4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule4->Location = System::Drawing::Point(66, 275);
			this->cboModule4->Name = L"cboModule4";
			this->cboModule4->Size = System::Drawing::Size(163, 20);
			this->cboModule4->TabIndex = 3;
			this->cboModule4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule4_SelectedIndexChanged);
			// 
			// cboModule7
			// 
			this->cboModule7->FormattingEnabled = true;
			this->cboModule7->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule7->Location = System::Drawing::Point(66, 352);
			this->cboModule7->Name = L"cboModule7";
			this->cboModule7->Size = System::Drawing::Size(163, 20);
			this->cboModule7->TabIndex = 3;
			this->cboModule7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule7_SelectedIndexChanged);
			// 
			// cboModule3
			// 
			this->cboModule3->FormattingEnabled = true;
			this->cboModule3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule3->Location = System::Drawing::Point(66, 250);
			this->cboModule3->Name = L"cboModule3";
			this->cboModule3->Size = System::Drawing::Size(163, 20);
			this->cboModule3->TabIndex = 3;
			this->cboModule3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule3_SelectedIndexChanged);
			// 
			// cboModule6
			// 
			this->cboModule6->FormattingEnabled = true;
			this->cboModule6->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule6->Location = System::Drawing::Point(66, 326);
			this->cboModule6->Name = L"cboModule6";
			this->cboModule6->Size = System::Drawing::Size(163, 20);
			this->cboModule6->TabIndex = 3;
			this->cboModule6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule6_SelectedIndexChanged);
			// 
			// cboModule2
			// 
			this->cboModule2->FormattingEnabled = true;
			this->cboModule2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule2->Location = System::Drawing::Point(66, 224);
			this->cboModule2->Name = L"cboModule2";
			this->cboModule2->Size = System::Drawing::Size(163, 20);
			this->cboModule2->TabIndex = 3;
			this->cboModule2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule2_SelectedIndexChanged);
			// 
			// cboModule5
			// 
			this->cboModule5->FormattingEnabled = true;
			this->cboModule5->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule5->Location = System::Drawing::Point(66, 301);
			this->cboModule5->Name = L"cboModule5";
			this->cboModule5->Size = System::Drawing::Size(163, 20);
			this->cboModule5->TabIndex = 3;
			this->cboModule5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// cboModule1
			// 
			this->cboModule1->FormattingEnabled = true;
			this->cboModule1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"", L"Visual c++", L"Visual c#", L"python" });
			this->cboModule1->Location = System::Drawing::Point(66, 199);
			this->cboModule1->Name = L"cboModule1";
			this->cboModule1->Size = System::Drawing::Size(163, 20);
			this->cboModule1->TabIndex = 3;
			this->cboModule1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// lblDate
			// 
			this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblDate->Location = System::Drawing::Point(71, 480);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(258, 16);
			this->lblDate->TabIndex = 1;
			this->lblDate->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(22, 480);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 14);
			this->label11->TabIndex = 1;
			this->label11->Text = L"日期";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// lblRanking
			// 
			this->lblRanking->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblRanking->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblRanking->Location = System::Drawing::Point(71, 454);
			this->lblRanking->Name = L"lblRanking";
			this->lblRanking->Size = System::Drawing::Size(258, 16);
			this->lblRanking->TabIndex = 1;
			this->lblRanking->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// lblTotal
			// 
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblTotal->Location = System::Drawing::Point(71, 424);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(258, 16);
			this->lblTotal->TabIndex = 1;
			this->lblTotal->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(22, 454);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(35, 14);
			this->label10->TabIndex = 1;
			this->label10->Text = L"排名";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(22, 424);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 14);
			this->label9->TabIndex = 1;
			this->label9->Text = L"总分";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Location = System::Drawing::Point(22, 380);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 14);
			this->label8->TabIndex = 1;
			this->label8->Text = L"8";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Location = System::Drawing::Point(22, 329);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 14);
			this->label6->TabIndex = 1;
			this->label6->Text = L"6";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Location = System::Drawing::Point(22, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 14);
			this->label3->TabIndex = 1;
			this->label3->Text = L"3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Location = System::Drawing::Point(22, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 14);
			this->label7->TabIndex = 1;
			this->label7->Text = L"7";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(22, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 14);
			this->label5->TabIndex = 1;
			this->label5->Text = L"5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(22, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 14);
			this->label4->TabIndex = 1;
			this->label4->Text = L"4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Location = System::Drawing::Point(23, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 14);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Location = System::Drawing::Point(22, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 14);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(74, 9);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowWeekNumbers = true;
			this->monthCalendar1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->phdnum);
			this->panel5->Controls->Add(this->mscnum);
			this->panel5->Controls->Add(this->MAnum);
			this->panel5->Controls->Add(this->BScnum);
			this->panel5->Controls->Add(this->BAnum);
			this->panel5->Controls->Add(this->BA);
			this->panel5->Controls->Add(this->Phd);
			this->panel5->Controls->Add(this->MSc);
			this->panel5->Controls->Add(this->BSc);
			this->panel5->Controls->Add(this->MA);
			this->panel5->Location = System::Drawing::Point(665, 189);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(227, 269);
			this->panel5->TabIndex = 0;
			// 
			// phdnum
			// 
			this->phdnum->Location = System::Drawing::Point(64, 203);
			this->phdnum->Name = L"phdnum";
			this->phdnum->Size = System::Drawing::Size(120, 21);
			this->phdnum->TabIndex = 2;
			// 
			// mscnum
			// 
			this->mscnum->Location = System::Drawing::Point(64, 151);
			this->mscnum->Name = L"mscnum";
			this->mscnum->Size = System::Drawing::Size(120, 21);
			this->mscnum->TabIndex = 2;
			// 
			// MAnum
			// 
			this->MAnum->Location = System::Drawing::Point(64, 105);
			this->MAnum->Name = L"MAnum";
			this->MAnum->Size = System::Drawing::Size(120, 21);
			this->MAnum->TabIndex = 2;
			// 
			// BScnum
			// 
			this->BScnum->Location = System::Drawing::Point(64, 59);
			this->BScnum->Name = L"BScnum";
			this->BScnum->Size = System::Drawing::Size(120, 21);
			this->BScnum->TabIndex = 2;
			// 
			// BAnum
			// 
			this->BAnum->Location = System::Drawing::Point(64, 15);
			this->BAnum->Name = L"BAnum";
			this->BAnum->Size = System::Drawing::Size(120, 21);
			this->BAnum->TabIndex = 2;
			// 
			// BA
			// 
			this->BA->AutoSize = true;
			this->BA->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->BA->Location = System::Drawing::Point(16, 18);
			this->BA->Name = L"BA";
			this->BA->Size = System::Drawing::Size(21, 14);
			this->BA->TabIndex = 1;
			this->BA->Text = L"BA";
			this->BA->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Phd
			// 
			this->Phd->AutoSize = true;
			this->Phd->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Phd->Location = System::Drawing::Point(16, 203);
			this->Phd->Name = L"Phd";
			this->Phd->Size = System::Drawing::Size(28, 14);
			this->Phd->TabIndex = 1;
			this->Phd->Text = L"Phd";
			this->Phd->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// MSc
			// 
			this->MSc->AutoSize = true;
			this->MSc->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->MSc->Location = System::Drawing::Point(16, 152);
			this->MSc->Name = L"MSc";
			this->MSc->Size = System::Drawing::Size(28, 14);
			this->MSc->TabIndex = 1;
			this->MSc->Text = L"MSc";
			this->MSc->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// BSc
			// 
			this->BSc->AutoSize = true;
			this->BSc->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->BSc->Location = System::Drawing::Point(16, 59);
			this->BSc->Name = L"BSc";
			this->BSc->Size = System::Drawing::Size(28, 14);
			this->BSc->TabIndex = 1;
			this->BSc->Text = L"BSc";
			this->BSc->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// MA
			// 
			this->MA->AutoSize = true;
			this->MA->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->MA->Location = System::Drawing::Point(16, 103);
			this->MA->Name = L"MA";
			this->MA->Size = System::Drawing::Size(21, 14);
			this->MA->TabIndex = 1;
			this->MA->Text = L"MA";
			this->MA->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->HomeStudent);
			this->panel4->Controls->Add(this->ScholarShip);
			this->panel4->Controls->Add(this->Exchange);
			this->panel4->Controls->Add(this->Accommodation);
			this->panel4->Controls->Add(this->Oversea);
			this->panel4->Controls->Add(this->ScholarShipCombo);
			this->panel4->Controls->Add(this->ExchangeCombo);
			this->panel4->Controls->Add(this->accommodationCombo);
			this->panel4->Controls->Add(this->OverseaCombo);
			this->panel4->Controls->Add(this->HomeStudentCombo);
			this->panel4->Location = System::Drawing::Point(454, 189);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(205, 269);
			this->panel4->TabIndex = 0;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// HomeStudent
			// 
			this->HomeStudent->AutoSize = true;
			this->HomeStudent->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->HomeStudent->Location = System::Drawing::Point(9, 20);
			this->HomeStudent->Name = L"HomeStudent";
			this->HomeStudent->Size = System::Drawing::Size(91, 14);
			this->HomeStudent->TabIndex = 1;
			this->HomeStudent->Text = L"Home Student";
			this->HomeStudent->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// ScholarShip
			// 
			this->ScholarShip->AutoSize = true;
			this->ScholarShip->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ScholarShip->Location = System::Drawing::Point(9, 198);
			this->ScholarShip->Name = L"ScholarShip";
			this->ScholarShip->Size = System::Drawing::Size(84, 14);
			this->ScholarShip->TabIndex = 1;
			this->ScholarShip->Text = L"ScholarShip";
			this->ScholarShip->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Exchange
			// 
			this->Exchange->AutoSize = true;
			this->Exchange->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Exchange->Location = System::Drawing::Point(9, 152);
			this->Exchange->Name = L"Exchange";
			this->Exchange->Size = System::Drawing::Size(63, 14);
			this->Exchange->TabIndex = 1;
			this->Exchange->Text = L"Exchange";
			this->Exchange->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Accommodation
			// 
			this->Accommodation->AutoSize = true;
			this->Accommodation->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Accommodation->Location = System::Drawing::Point(9, 110);
			this->Accommodation->Name = L"Accommodation";
			this->Accommodation->Size = System::Drawing::Size(98, 14);
			this->Accommodation->TabIndex = 1;
			this->Accommodation->Text = L"Accommodation";
			this->Accommodation->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Oversea
			// 
			this->Oversea->AutoSize = true;
			this->Oversea->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Oversea->Location = System::Drawing::Point(9, 65);
			this->Oversea->Name = L"Oversea";
			this->Oversea->Size = System::Drawing::Size(56, 14);
			this->Oversea->TabIndex = 1;
			this->Oversea->Text = L"Oversea";
			this->Oversea->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// ScholarShipCombo
			// 
			this->ScholarShipCombo->FormattingEnabled = true;
			this->ScholarShipCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NO", L"YES" });
			this->ScholarShipCombo->Location = System::Drawing::Point(120, 197);
			this->ScholarShipCombo->Name = L"ScholarShipCombo";
			this->ScholarShipCombo->Size = System::Drawing::Size(72, 20);
			this->ScholarShipCombo->TabIndex = 3;
			this->ScholarShipCombo->Text = L"NO";
			this->ScholarShipCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// ExchangeCombo
			// 
			this->ExchangeCombo->FormattingEnabled = true;
			this->ExchangeCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NO", L"YES" });
			this->ExchangeCombo->Location = System::Drawing::Point(120, 146);
			this->ExchangeCombo->Name = L"ExchangeCombo";
			this->ExchangeCombo->Size = System::Drawing::Size(72, 20);
			this->ExchangeCombo->TabIndex = 3;
			this->ExchangeCombo->Text = L"NO";
			this->ExchangeCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// accommodationCombo
			// 
			this->accommodationCombo->FormattingEnabled = true;
			this->accommodationCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NO", L"YES" });
			this->accommodationCombo->Location = System::Drawing::Point(120, 104);
			this->accommodationCombo->Name = L"accommodationCombo";
			this->accommodationCombo->Size = System::Drawing::Size(72, 20);
			this->accommodationCombo->TabIndex = 3;
			this->accommodationCombo->Text = L"NO";
			this->accommodationCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// OverseaCombo
			// 
			this->OverseaCombo->FormattingEnabled = true;
			this->OverseaCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NO", L"YES" });
			this->OverseaCombo->Location = System::Drawing::Point(120, 59);
			this->OverseaCombo->Name = L"OverseaCombo";
			this->OverseaCombo->Size = System::Drawing::Size(72, 20);
			this->OverseaCombo->TabIndex = 3;
			this->OverseaCombo->Text = L"NO";
			this->OverseaCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// HomeStudentCombo
			// 
			this->HomeStudentCombo->FormattingEnabled = true;
			this->HomeStudentCombo->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"NO", L"YES" });
			this->HomeStudentCombo->Location = System::Drawing::Point(120, 17);
			this->HomeStudentCombo->Name = L"HomeStudentCombo";
			this->HomeStudentCombo->Size = System::Drawing::Size(72, 20);
			this->HomeStudentCombo->TabIndex = 3;
			this->HomeStudentCombo->Text = L"NO";
			this->HomeStudentCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->btnExit);
			this->panel6->Controls->Add(this->btnResult);
			this->panel6->Controls->Add(this->btnReset);
			this->panel6->Controls->Add(this->btnAddNew);
			this->panel6->Location = System::Drawing::Point(454, 464);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(438, 83);
			this->panel6->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->btnExit->Location = System::Drawing::Point(348, 25);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(76, 39);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnResult
			// 
			this->btnResult->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->btnResult->Location = System::Drawing::Point(238, 25);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(76, 39);
			this->btnResult->TabIndex = 6;
			this->btnResult->Text = L"Result";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// btnReset
			// 
			this->btnReset->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->btnReset->Location = System::Drawing::Point(133, 25);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(76, 39);
			this->btnReset->TabIndex = 6;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnAddNew
			// 
			this->btnAddNew->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->btnAddNew->Location = System::Drawing::Point(31, 25);
			this->btnAddNew->Name = L"btnAddNew";
			this->btnAddNew->Size = System::Drawing::Size(76, 39);
			this->btnAddNew->TabIndex = 6;
			this->btnAddNew->Text = L"Add";
			this->btnAddNew->UseVisualStyleBackColor = true;
			this->btnAddNew->Click += gcnew System::EventHandler(this, &MyForm::btnAddNew_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->DeanofFaculty);
			this->panel2->Controls->Add(this->ProgramLeader);
			this->panel2->Controls->Add(this->Course);
			this->panel2->Controls->Add(this->Coursetutor);
			this->panel2->Controls->Add(this->CourseCode);
			this->panel2->Controls->Add(this->Faculty);
			this->panel2->Controls->Add(this->CourseCombo);
			this->panel2->Controls->Add(this->TutorText);
			this->panel2->Controls->Add(this->leaderText);
			this->panel2->Controls->Add(this->FacultyDeanText);
			this->panel2->Controls->Add(this->FacultyText);
			this->panel2->Controls->Add(this->CourseCodeText);
			this->panel2->Location = System::Drawing::Point(454, 9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(438, 174);
			this->panel2->TabIndex = 0;
			// 
			// DeanofFaculty
			// 
			this->DeanofFaculty->AutoSize = true;
			this->DeanofFaculty->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DeanofFaculty->Location = System::Drawing::Point(17, 85);
			this->DeanofFaculty->Name = L"DeanofFaculty";
			this->DeanofFaculty->Size = System::Drawing::Size(112, 14);
			this->DeanofFaculty->TabIndex = 1;
			this->DeanofFaculty->Text = L"Dean of Faculty";
			this->DeanofFaculty->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// ProgramLeader
			// 
			this->ProgramLeader->AutoSize = true;
			this->ProgramLeader->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ProgramLeader->Location = System::Drawing::Point(17, 109);
			this->ProgramLeader->Name = L"ProgramLeader";
			this->ProgramLeader->Size = System::Drawing::Size(105, 14);
			this->ProgramLeader->TabIndex = 1;
			this->ProgramLeader->Text = L"Program Leader";
			this->ProgramLeader->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Course
			// 
			this->Course->AutoSize = true;
			this->Course->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Course->Location = System::Drawing::Point(17, 9);
			this->Course->Name = L"Course";
			this->Course->Size = System::Drawing::Size(49, 14);
			this->Course->TabIndex = 1;
			this->Course->Text = L"Course";
			this->Course->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Coursetutor
			// 
			this->Coursetutor->AutoSize = true;
			this->Coursetutor->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Coursetutor->Location = System::Drawing::Point(17, 135);
			this->Coursetutor->Name = L"Coursetutor";
			this->Coursetutor->Size = System::Drawing::Size(84, 14);
			this->Coursetutor->TabIndex = 1;
			this->Coursetutor->Text = L"CourseTutor";
			this->Coursetutor->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// CourseCode
			// 
			this->CourseCode->AutoSize = true;
			this->CourseCode->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->CourseCode->Location = System::Drawing::Point(17, 33);
			this->CourseCode->Name = L"CourseCode";
			this->CourseCode->Size = System::Drawing::Size(77, 14);
			this->CourseCode->TabIndex = 1;
			this->CourseCode->Text = L"CourseCode";
			this->CourseCode->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Faculty
			// 
			this->Faculty->AutoSize = true;
			this->Faculty->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Faculty->Location = System::Drawing::Point(17, 59);
			this->Faculty->Name = L"Faculty";
			this->Faculty->Size = System::Drawing::Size(56, 14);
			this->Faculty->TabIndex = 1;
			this->Faculty->Text = L"Faculty";
			this->Faculty->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// CourseCombo
			// 
			this->CourseCombo->FormattingEnabled = true;
			this->CourseCombo->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"English", L"Math", L"Computer Science", L"Chinese",
					L"Physical", L"Sports", L"C++", L"PHP", L"Python"
			});
			this->CourseCombo->Location = System::Drawing::Point(130, 8);
			this->CourseCombo->Name = L"CourseCombo";
			this->CourseCombo->Size = System::Drawing::Size(294, 20);
			this->CourseCombo->TabIndex = 3;
			this->CourseCombo->Text = L"Select a Course";
			this->CourseCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::CourseCombo_SelectedIndexChanged);
			// 
			// TutorText
			// 
			this->TutorText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TutorText->Location = System::Drawing::Point(130, 135);
			this->TutorText->Name = L"TutorText";
			this->TutorText->Size = System::Drawing::Size(294, 21);
			this->TutorText->TabIndex = 5;
			// 
			// leaderText
			// 
			this->leaderText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->leaderText->Location = System::Drawing::Point(130, 109);
			this->leaderText->Name = L"leaderText";
			this->leaderText->Size = System::Drawing::Size(294, 21);
			this->leaderText->TabIndex = 5;
			// 
			// FacultyDeanText
			// 
			this->FacultyDeanText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FacultyDeanText->Location = System::Drawing::Point(130, 84);
			this->FacultyDeanText->Name = L"FacultyDeanText";
			this->FacultyDeanText->Size = System::Drawing::Size(294, 21);
			this->FacultyDeanText->TabIndex = 5;
			// 
			// FacultyText
			// 
			this->FacultyText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FacultyText->Location = System::Drawing::Point(130, 59);
			this->FacultyText->Name = L"FacultyText";
			this->FacultyText->Size = System::Drawing::Size(294, 21);
			this->FacultyText->TabIndex = 5;
			// 
			// CourseCodeText
			// 
			this->CourseCodeText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CourseCodeText->Location = System::Drawing::Point(130, 34);
			this->CourseCodeText->Name = L"CourseCodeText";
			this->CourseCodeText->Size = System::Drawing::Size(294, 21);
			this->CourseCodeText->TabIndex = 5;
			this->CourseCodeText->TextChanged += gcnew System::EventHandler(this, &MyForm::CourseCodeText_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Location = System::Drawing::Point(10, 281);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(438, 266);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->Address);
			this->panel1->Controls->Add(this->StudentID);
			this->panel1->Controls->Add(this->Mobile);
			this->panel1->Controls->Add(this->Gender);
			this->panel1->Controls->Add(this->FirstNameText);
			this->panel1->Controls->Add(this->Email);
			this->panel1->Controls->Add(this->SubNameText);
			this->panel1->Controls->Add(this->DOB);
			this->panel1->Controls->Add(this->AddressText);
			this->panel1->Controls->Add(this->MobileText);
			this->panel1->Controls->Add(this->FirstName);
			this->panel1->Controls->Add(this->StudentIDText);
			this->panel1->Controls->Add(this->EmailText);
			this->panel1->Controls->Add(this->SubName);
			this->panel1->Controls->Add(this->DOBText);
			this->panel1->Controls->Add(this->GenderComba);
			this->panel1->Location = System::Drawing::Point(10, 9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(438, 266);
			this->panel1->TabIndex = 0;
			// 
			// Address
			// 
			this->Address->AutoSize = true;
			this->Address->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Address->Location = System::Drawing::Point(21, 90);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(56, 14);
			this->Address->TabIndex = 1;
			this->Address->Text = L"Address";
			this->Address->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// StudentID
			// 
			this->StudentID->AutoSize = true;
			this->StudentID->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->StudentID->Location = System::Drawing::Point(21, 14);
			this->StudentID->Name = L"StudentID";
			this->StudentID->Size = System::Drawing::Size(70, 14);
			this->StudentID->TabIndex = 1;
			this->StudentID->Text = L"StudentID";
			this->StudentID->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Mobile
			// 
			this->Mobile->AutoSize = true;
			this->Mobile->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Mobile->Location = System::Drawing::Point(21, 169);
			this->Mobile->Name = L"Mobile";
			this->Mobile->Size = System::Drawing::Size(49, 14);
			this->Mobile->TabIndex = 1;
			this->Mobile->Text = L"Mobile";
			this->Mobile->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// Gender
			// 
			this->Gender->AutoSize = true;
			this->Gender->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Gender->Location = System::Drawing::Point(21, 114);
			this->Gender->Name = L"Gender";
			this->Gender->Size = System::Drawing::Size(49, 14);
			this->Gender->TabIndex = 1;
			this->Gender->Text = L"Gender";
			this->Gender->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// FirstNameText
			// 
			this->FirstNameText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FirstNameText->Location = System::Drawing::Point(112, 39);
			this->FirstNameText->Name = L"FirstNameText";
			this->FirstNameText->Size = System::Drawing::Size(298, 21);
			this->FirstNameText->TabIndex = 5;
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Email->Location = System::Drawing::Point(21, 195);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(42, 14);
			this->Email->TabIndex = 1;
			this->Email->Text = L"Email";
			this->Email->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// SubNameText
			// 
			this->SubNameText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SubNameText->Location = System::Drawing::Point(112, 64);
			this->SubNameText->Name = L"SubNameText";
			this->SubNameText->Size = System::Drawing::Size(298, 21);
			this->SubNameText->TabIndex = 5;
			this->SubNameText->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// DOB
			// 
			this->DOB->AutoSize = true;
			this->DOB->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DOB->Location = System::Drawing::Point(21, 140);
			this->DOB->Name = L"DOB";
			this->DOB->Size = System::Drawing::Size(28, 14);
			this->DOB->TabIndex = 1;
			this->DOB->Text = L"DOB";
			this->DOB->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// AddressText
			// 
			this->AddressText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AddressText->Location = System::Drawing::Point(112, 89);
			this->AddressText->Name = L"AddressText";
			this->AddressText->Size = System::Drawing::Size(298, 21);
			this->AddressText->TabIndex = 5;
			// 
			// MobileText
			// 
			this->MobileText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MobileText->Location = System::Drawing::Point(112, 169);
			this->MobileText->Name = L"MobileText";
			this->MobileText->Size = System::Drawing::Size(298, 21);
			this->MobileText->TabIndex = 5;
			// 
			// FirstName
			// 
			this->FirstName->AutoSize = true;
			this->FirstName->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->FirstName->Location = System::Drawing::Point(21, 38);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(70, 14);
			this->FirstName->TabIndex = 1;
			this->FirstName->Text = L"FirstName";
			this->FirstName->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// StudentIDText
			// 
			this->StudentIDText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->StudentIDText->Location = System::Drawing::Point(112, 12);
			this->StudentIDText->Name = L"StudentIDText";
			this->StudentIDText->Size = System::Drawing::Size(298, 21);
			this->StudentIDText->TabIndex = 5;
			// 
			// EmailText
			// 
			this->EmailText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->EmailText->Location = System::Drawing::Point(112, 195);
			this->EmailText->Name = L"EmailText";
			this->EmailText->Size = System::Drawing::Size(298, 21);
			this->EmailText->TabIndex = 5;
			// 
			// SubName
			// 
			this->SubName->AutoSize = true;
			this->SubName->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->SubName->Location = System::Drawing::Point(21, 64);
			this->SubName->Name = L"SubName";
			this->SubName->Size = System::Drawing::Size(56, 14);
			this->SubName->TabIndex = 1;
			this->SubName->Text = L"SubName";
			this->SubName->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// DOBText
			// 
			this->DOBText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->DOBText->Location = System::Drawing::Point(112, 140);
			this->DOBText->Name = L"DOBText";
			this->DOBText->Size = System::Drawing::Size(298, 21);
			this->DOBText->TabIndex = 5;
			// 
			// GenderComba
			// 
			this->GenderComba->FormattingEnabled = true;
			this->GenderComba->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"男", L"女" });
			this->GenderComba->Location = System::Drawing::Point(112, 114);
			this->GenderComba->Name = L"GenderComba";
			this->GenderComba->Size = System::Drawing::Size(298, 20);
			this->GenderComba->TabIndex = 3;
			this->GenderComba->Text = L"Select a gender";
			this->GenderComba->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModule1_SelectedIndexChanged);
			// 
			// stuData
			// 
			this->stuData->BackColor = System::Drawing::Color::Gainsboro;
			this->stuData->Controls->Add(this->dataGridView1);
			this->stuData->Location = System::Drawing::Point(4, 22);
			this->stuData->Name = L"stuData";
			this->stuData->Padding = System::Windows::Forms::Padding(3);
			this->stuData->Size = System::Drawing::Size(1276, 551);
			this->stuData->TabIndex = 1;
			this->stuData->Text = L"学生数据";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(-1, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(1277, 531);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CancelRowEdit += gcnew System::Windows::Forms::QuestionEventHandler(this, &MyForm::dataGridView1_CancelRowEdit);
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			this->dataGridView1->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm::dataGridView1_RowHeaderMouseDoubleClick);
			this->dataGridView1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::dataGridView1_KeyDown);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1272, 579);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->phdnum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mscnum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MAnum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BScnum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BAnum))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->stuData->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void studentUpload() {	//将学生信息进行上传
			sqlConn->ConnectionString = "server=" + sqlServer + ";" + "username=" + username + ";" +
				"password=" + password + ";" + "database=" + database;
			sqlConn->Open();
			sqlCmd->Connection = sqlConn;
			sqlCmd->CommandText = "select * from cppstudentdb";
			sqlRd = sqlCmd->ExecuteReader();
			sqlDt->Load(sqlRd);
			sqlRd->Close();
			sqlConn->Close();
			dataGridView1->DataSource = sqlDt;
		}


	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cboModule1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule1->Text == "") {
		txt1->Text = "0";
		txt1->Enabled = false;
	}
	else {
		txt1->Enabled = true;
		txt1->Text = "";
		txt1->Focus();
	}
	
}
private: System::Void cboModule2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule2->Text == "") {
		txt2->Text = "0";
		txt2->Enabled = false;
	}
	else {
		txt2->Enabled = true;
		txt2->Text = "";
		txt2->Focus();
	}
}
private: System::Void cboModule3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule3->Text == "") {
		txt3->Text = "0";
		txt3->Enabled = false;
	}
	else {
		txt3->Enabled = true;
		txt3->Text = "";
		txt3->Focus();
	}
}
private: System::Void cboModule4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule4->Text == "") {
		txt4->Text = "0";
		txt4->Enabled = false;
	}
	else {
		txt4->Enabled = true;
		txt4->Text = "";
		txt4->Focus();
	}
}
private: System::Void cboModule5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule5->Text == "") {
		txt5->Text = "0";
		txt5->Enabled = false;
	}
	else {
		txt5->Enabled = true;
		txt5->Text = "";
		txt5->Focus();
	}
}
private: System::Void cboModule6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule6->Text == "") {
		txt6->Text = "0";
		txt6->Enabled = false;
	}
	else {
		txt6->Enabled = true;
		txt6->Text = "";
		txt6->Focus();
	}
}
private: System::Void cboModule7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule7->Text == "") {
		txt7->Text = "0";
		txt7->Enabled = false;
	}
	else {
		txt7->Enabled = true;
		txt7->Text = "";
		txt7->Focus();
	}
}

private: System::Void cboModule8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModule8->Text == "") {
		txt8->Text = "0";
		txt8->Enabled = false;
	}
	else {
		txt8->Enabled = true;
		txt8->Text = "";
		txt8->Focus();
	}
}

private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	studentUpload();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddNew_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + sqlServer + ";" + "username=" + username + ";" +
		"password=" + password + ";" + "database=" + database;

	try {
		sqlConn->Open();
		sqlQuery = "insert into cppstudentdb(StudentID,FirstName,SubName,Address,Gender,DOB,Mobile,Email,Course,HomeStudent,OverSeaStudent,Accommodation,Exchange,Scholarship,BA,BSc,MA," +
			" MSc,PhD,CourseCode,Module1,Module2,Module3,Module4,Module5,Module6,Module7,Module8,Score1,Score2,Score3,Score4,Score5,Score6,Score7,Score8," +
			"TotalScore,Ranking,Date)" + "values('" + StudentIDText->Text + "','" + FirstNameText->Text + "','" + SubNameText->Text + "','" + AddressText->Text +
			"','" + GenderComba->Text + "','" + DOBText->Text + "','" + MobileText->Text + "','" + EmailText->Text + "','" + CourseCombo->Text + "','" + HomeStudent->Text + "','"
			+ OverseaCombo->Text + "','" + accommodationCombo->Text + "','" + ExchangeCombo->Text + "','" + ScholarShipCombo->Text + "','" + BAnum->Text + "','" + BScnum->Text + "','" +
			MAnum->Text + "','" + mscnum->Text + "','" + phdnum->Text + "','" + CourseCodeText->Text + "','" + cboModule1->Text + "','" + cboModule2->Text + "','" + cboModule3->Text + "','" + 
			cboModule4->Text + "','" + cboModule5->Text + "','" + cboModule6->Text + "','" + cboModule7->Text + "','" + cboModule8->Text + "','" + txt1->Text + "','" + txt2->Text + "','" + 
			txt3->Text + "','" + txt4->Text + "','" + txt5->Text + "','" + txt6->Text + "','" + txt7->Text + "','" + txt8->Text + "','" + lblTotal->Text + "','" + lblRanking->Text + "','" + lblDate->Text + "')";
		sqlCmd = gcnew MySqlCommand(sqlQuery,sqlConn);
		sqlRd = sqlCmd->ExecuteReader();
		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();
	}
	MessageBox::Show("Student Management System Updated");
	studentUpload();
}	
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	iExit = MessageBox::Show("Confirm if you want to exit","Student Management System",
		MessageBoxButtons::YesNo,MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void CourseCodeText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CourseCombo_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show("111");
	if (CourseCombo->Text == "Select a Course") {
		CourseCodeText->Text = "";
		FacultyText->Text = "";
		FacultyDeanText->Text = "";
		leaderText->Text = "";
		TutorText->Text = "";
	}
	else if (CourseCombo->Text == "English") {
		CourseCodeText->Text = "E01";
		FacultyText->Text = "Forean Collage";
		FacultyDeanText->Text = "pr.ZHAO";
		leaderText->Text = "DR.WANG";
		TutorText->Text = "DR.SAMi";
	}
	else if (CourseCombo->Text == "Math") {
		CourseCodeText->Text = "M01";
		FacultyText->Text = "Math Collage";
		FacultyDeanText->Text = "pr.ZHAO";
		leaderText->Text = "DR.LI";
		TutorText->Text = "DR.YOO";
	}
	else if (CourseCombo->Text == "Computer Science") {
		CourseCodeText->Text = "C02";
		FacultyText->Text = "Computer Collage";
		FacultyDeanText->Text = "pr.WO";
		leaderText->Text = "DR.LI";
		TutorText->Text = "DR.W";
	}
	else if (CourseCombo->Text == "Chinese") {
		CourseCodeText->Text = "C03";
		FacultyText->Text = "Chinese Collage";
		FacultyDeanText->Text = "pr.sa";
		leaderText->Text = "professor ui";
		TutorText->Text = "DR.L";
	}
}
private: System::Void MLeave(System::Object^ sender, System::EventArgs^ e) {
	TextBox^ c = safe_cast<TextBox^>(sender);
	if (c->Text == "") {
		c->Text = "0";
	}
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	StudentIDText->Text = String::Empty;
	FirstNameText->Text = String::Empty;
	SubNameText->Text = "";
	AddressText->Text = "";
	GenderComba->Text = "Select a Gender";
	DOBText->Text = "";
	MobileText->Text = "";
	EmailText->Text = "";
}
private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
	int Unit[9];
	try {
		Unit[0] = Convert::ToInt32(txt1->Text);
		Unit[1] = Convert::ToInt32(txt2->Text);
		Unit[2] = Convert::ToInt32(txt3->Text);
		Unit[3] = Convert::ToInt32(txt4->Text); 
		Unit[4] = Convert::ToInt32(txt5->Text);
		Unit[5] = Convert::ToInt32(txt6->Text);
		Unit[6] = Convert::ToInt32(txt7->Text);
		Unit[7] = Convert::ToInt32(txt8->Text);

		Unit[8] = Unit[0] + Unit[1] + Unit[2] + Unit[3] + Unit[4] + Unit[5] + Unit[6] + Unit[7];
		lblTotal->Text = Convert::ToString(Unit[8]);
		if (Unit[8] > 500) {
			lblRanking->Text = "优秀";
		}
		else {
			lblRanking->Text = "一般";
		}
		lblDate->Text = monthCalendar1->SelectionStart.ToLongDateString();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		StudentIDText->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		FirstNameText->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void dataGridView1_CancelRowEdit(System::Object^ sender, System::Windows::Forms::QuestionEventArgs^ e) {
}
private: System::Void dataGridView1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
}
private: System::Void dataGridView1_RowHeaderMouseDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
	sqlConn->ConnectionString = "server=" + sqlServer + ";" + "username=" + username + ";" +
		"password=" + password + ";" + "database=" + database;

	try {
		sqlConn->Open();
		sqlQuery = "DELETE FROM cppstudentdb.cppstudentdb WHERE StudentID = " + dataGridView1->SelectedRows[0]->Cells[0]->Value;
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlRd = sqlCmd->ExecuteReader();
		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();
	}
	dataGridView1->Rows->Remove(dataGridView1->SelectedRows[0]);
	dataGridView1->Refresh();
	studentUpload();
	MessageBox::Show("Successfully Delete!,Student Management System Updated");
	
}
};
}
