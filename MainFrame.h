#pragma once
#include "database.h"

namespace DataBaseForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainFrame
	/// </summary>
	public ref class MainFrame : public System::Windows::Forms::Form
	{
	public:
		MainFrame(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainFrame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::TextBox^ textBoxGroup;
	private: System::Windows::Forms::TextBox^ textBoxPhone;
	private: System::Windows::Forms::TextBox^ textBoxClass;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBoxMark;

	private: System::Windows::Forms::TextBox^ textBoxDate;

	private: System::Windows::Forms::TextBox^ textBoxTEMail;

	private: System::Windows::Forms::TextBox^ textBoxTName;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::ListView^ DataTable;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ColumnHeader^ columnID;
	private: System::Windows::Forms::ColumnHeader^ columnNAME;
	private: System::Windows::Forms::ColumnHeader^ columnPHONE;
	private: System::Windows::Forms::ColumnHeader^ columnCLASS;
	private: System::Windows::Forms::ColumnHeader^ columnTNAME;
	private: System::Windows::Forms::ColumnHeader^ columnTMAIL;
	private: System::Windows::Forms::ColumnHeader^ columnDATE;
	private: System::Windows::Forms::ColumnHeader^ columnMARK;
	private: System::Windows::Forms::ColumnHeader^ columnGROUP;
	private: System::Windows::Forms::ListView^ RequestRes;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::ColumnHeader^ columnHeader4;
	private: System::Windows::Forms::ColumnHeader^ columnHeader5;
	private: System::Windows::Forms::ColumnHeader^ columnHeader6;
	private: System::Windows::Forms::ColumnHeader^ columnHeader7;
	private: System::Windows::Forms::ColumnHeader^ columnHeader8;
	private: System::Windows::Forms::ColumnHeader^ columnHeader9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGroup = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClass = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxMark = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTEMail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTName = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->DataTable = (gcnew System::Windows::Forms::ListView());
			this->columnID = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnNAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnGROUP = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnPHONE = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnCLASS = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnTNAME = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnTMAIL = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnDATE = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnMARK = (gcnew System::Windows::Forms::ColumnHeader());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->RequestRes = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(26, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(260, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Прочитать данные из файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainFrame::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(22, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(218, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Добавить данные";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainFrame::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(21, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 34);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Удаление данных";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainFrame::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(21, 288);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(219, 32);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Поиск данных";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainFrame::button4_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(26, 562);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(260, 47);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Вывод данных";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainFrame::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(26, 104);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(260, 47);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Сохранение данных в файл";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainFrame::button7_Click);
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(130, 29);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(110, 20);
			this->textBoxName->TabIndex = 7;
			// 
			// textBoxGroup
			// 
			this->textBoxGroup->Location = System::Drawing::Point(130, 55);
			this->textBoxGroup->Name = L"textBoxGroup";
			this->textBoxGroup->Size = System::Drawing::Size(110, 20);
			this->textBoxGroup->TabIndex = 8;
			// 
			// textBoxPhone
			// 
			this->textBoxPhone->Location = System::Drawing::Point(130, 81);
			this->textBoxPhone->Name = L"textBoxPhone";
			this->textBoxPhone->Size = System::Drawing::Size(110, 20);
			this->textBoxPhone->TabIndex = 9;
			// 
			// textBoxClass
			// 
			this->textBoxClass->Location = System::Drawing::Point(130, 107);
			this->textBoxClass->Name = L"textBoxClass";
			this->textBoxClass->Size = System::Drawing::Size(110, 20);
			this->textBoxClass->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(19, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 18);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Name";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(19, 107);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 18);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Class";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(19, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 18);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Phone";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(19, 55);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 18);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Group";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(19, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 18);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Teacher e-mail";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(19, 185);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 18);
			this->label10->TabIndex = 31;
			this->label10->Text = L"Date";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(19, 211);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 18);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Mark";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(19, 133);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 18);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Teacher";
			// 
			// textBoxMark
			// 
			this->textBoxMark->Location = System::Drawing::Point(130, 211);
			this->textBoxMark->Name = L"textBoxMark";
			this->textBoxMark->Size = System::Drawing::Size(110, 20);
			this->textBoxMark->TabIndex = 28;
			// 
			// textBoxDate
			// 
			this->textBoxDate->Location = System::Drawing::Point(130, 185);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(110, 20);
			this->textBoxDate->TabIndex = 27;
			// 
			// textBoxTEMail
			// 
			this->textBoxTEMail->Location = System::Drawing::Point(130, 159);
			this->textBoxTEMail->Name = L"textBoxTEMail";
			this->textBoxTEMail->Size = System::Drawing::Size(110, 20);
			this->textBoxTEMail->TabIndex = 26;
			// 
			// textBoxTName
			// 
			this->textBoxTName->Location = System::Drawing::Point(130, 133);
			this->textBoxTName->Name = L"textBoxTName";
			this->textBoxTName->Size = System::Drawing::Size(110, 20);
			this->textBoxTName->TabIndex = 25;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->textBoxMark);
			this->groupBox1->Controls->Add(this->textBoxDate);
			this->groupBox1->Controls->Add(this->textBoxTEMail);
			this->groupBox1->Controls->Add(this->textBoxTName);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxClass);
			this->groupBox1->Controls->Add(this->textBoxPhone);
			this->groupBox1->Controls->Add(this->textBoxGroup);
			this->groupBox1->Controls->Add(this->textBoxName);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(26, 166);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(260, 385);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			// 
			// DataTable
			// 
			this->DataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->columnID, this->columnNAME,
					this->columnGROUP, this->columnPHONE, this->columnCLASS, this->columnTNAME, this->columnTMAIL, this->columnDATE, this->columnMARK
			});
			this->DataTable->HideSelection = false;
			this->DataTable->Location = System::Drawing::Point(325, 199);
			this->DataTable->Name = L"DataTable";
			this->DataTable->Size = System::Drawing::Size(895, 410);
			this->DataTable->TabIndex = 34;
			this->DataTable->UseCompatibleStateImageBehavior = false;
			this->DataTable->View = System::Windows::Forms::View::Details;
			this->DataTable->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &DataBaseForms::MainFrame::ColumnClick);
			// 
			// columnID
			// 
			this->columnID->Text = L"ID";
			// 
			// columnNAME
			// 
			this->columnNAME->Text = L"NAME";
			this->columnNAME->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnNAME->Width = 110;
			// 
			// columnGROUP
			// 
			this->columnGROUP->Text = L"GROUP";
			// 
			// columnPHONE
			// 
			this->columnPHONE->Text = L"PHONE";
			this->columnPHONE->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnPHONE->Width = 110;
			// 
			// columnCLASS
			// 
			this->columnCLASS->Text = L"CLASS";
			this->columnCLASS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnCLASS->Width = 110;
			// 
			// columnTNAME
			// 
			this->columnTNAME->Text = L"TEACHER NAME";
			this->columnTNAME->Width = 120;
			// 
			// columnTMAIL
			// 
			this->columnTMAIL->Text = L"TEACHER E-MAIL";
			this->columnTMAIL->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnTMAIL->Width = 140;
			// 
			// columnDATE
			// 
			this->columnDATE->Text = L"DATE";
			this->columnDATE->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnDATE->Width = 100;
			// 
			// columnMARK
			// 
			this->columnMARK->Text = L"MARK";
			this->columnMARK->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnMARK->Width = 80;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainFrame::openFileDialog1_FileOk);
			// 
			// RequestRes
			// 
			this->RequestRes->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7, this->columnHeader8,
					this->columnHeader9
			});
			this->RequestRes->HideSelection = false;
			this->RequestRes->Location = System::Drawing::Point(325, 51);
			this->RequestRes->Name = L"RequestRes";
			this->RequestRes->Size = System::Drawing::Size(895, 100);
			this->RequestRes->TabIndex = 35;
			this->RequestRes->UseCompatibleStateImageBehavior = false;
			this->RequestRes->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"ID";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"NAME";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 110;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"GROUP";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"PHONE";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 110;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"CLASS";
			this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader5->Width = 110;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"TEACHER NAME";
			this->columnHeader6->Width = 120;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"TEACHER E-MAIL";
			this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader7->Width = 140;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"DATE";
			this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader8->Width = 100;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"MARK";
			this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader9->Width = 80;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(705, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 25);
			this->label2->TabIndex = 36;
			this->label2->Text = L"DataBase";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(685, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(151, 25);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Request result";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(122, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 25);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Menu";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"txt files (*.txt)|*.txt";
			this->saveFileDialog1->RestoreDirectory = true;
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainFrame::saveFileDialog1_FileOk);
			// 
			// MainFrame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1246, 621);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->RequestRes);
			this->Controls->Add(this->DataTable);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Name = L"MainFrame";
			this->Text = L"MainFrame";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e);
	   private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e);
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e);
	   void ShowTable();
	   void SetDefSettingsTextBoxes();
	   void AddRowReqTable(STUDENT student);
	   void ClearReqTable();
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	   private: System::Void ColumnClick(System::Object^ sender, ColumnClickEventArgs^ e);
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
};
}
