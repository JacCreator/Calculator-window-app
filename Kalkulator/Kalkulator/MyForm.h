#include "Pomoc.h"
#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		char operacja = '?';
		double x0, x1;
		double wynik = 0.0;


	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ standardowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ finansowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pomocToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ wyswietlacz;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;




	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;

	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::ComponentModel::IContainer^ components;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finansowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wyswietlacz = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(504, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->okienkoToolStripMenuItem->Text = L"Okienko";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::okienkoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardowyToolStripMenuItem,
					this->finansowyToolStripMenuItem, this->graToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->widokToolStripMenuItem->Text = L"Widok";
			// 
			// standardowyToolStripMenuItem
			// 
			this->standardowyToolStripMenuItem->Name = L"standardowyToolStripMenuItem";
			this->standardowyToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->standardowyToolStripMenuItem->Text = L"Standardowy";
			this->standardowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::standardowyToolStripMenuItem_Click);
			// 
			// finansowyToolStripMenuItem
			// 
			this->finansowyToolStripMenuItem->Name = L"finansowyToolStripMenuItem";
			this->finansowyToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->finansowyToolStripMenuItem->Text = L"Finansowy";
			this->finansowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::finansowyToolStripMenuItem_Click);
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->Enabled = false;
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->graToolStripMenuItem->Text = L"Gra";
			this->graToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::graToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pomocToolStripMenuItem_Click);
			// 
			// wyswietlacz
			// 
			this->wyswietlacz->BackColor = System::Drawing::Color::Blue;
			this->wyswietlacz->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->wyswietlacz->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wyswietlacz->ForeColor = System::Drawing::SystemColors::Info;
			this->wyswietlacz->Location = System::Drawing::Point(21, 50);
			this->wyswietlacz->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->wyswietlacz->Name = L"wyswietlacz";
			this->wyswietlacz->Size = System::Drawing::Size(454, 69);
			this->wyswietlacz->TabIndex = 1;
			this->wyswietlacz->Text = L"0";
			this->wyswietlacz->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->wyswietlacz->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(203, 213);
			this->button1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 78);
			this->button1->TabIndex = 2;
			this->button1->Text = L"9";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(112, 213);
			this->button2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 78);
			this->button2->TabIndex = 3;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(21, 213);
			this->button3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 78);
			this->button3->TabIndex = 4;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(21, 299);
			this->button6->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(85, 78);
			this->button6->TabIndex = 8;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(203, 300);
			this->button7->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(85, 78);
			this->button7->TabIndex = 7;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::LightBlue;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(112, 300);
			this->button8->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(85, 78);
			this->button8->TabIndex = 6;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightBlue;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(203, 385);
			this->button10->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(85, 78);
			this->button10->TabIndex = 12;
			this->button10->Text = L"3";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightBlue;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(112, 385);
			this->button11->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(85, 78);
			this->button11->TabIndex = 11;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightBlue;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(21, 385);
			this->button12->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(85, 78);
			this->button12->TabIndex = 10;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::LightBlue;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->Location = System::Drawing::Point(21, 470);
			this->button17->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(176, 78);
			this->button17->TabIndex = 18;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(203, 470);
			this->button4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(85, 78);
			this->button4->TabIndex = 19;
			this->button4->Text = L",";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(296, 213);
			this->button5->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(85, 78);
			this->button5->TabIndex = 20;
			this->button5->Text = L"-";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::LightBlue;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(296, 300);
			this->button9->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 78);
			this->button9->TabIndex = 21;
			this->button9->Text = L"x";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightBlue;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(295, 387);
			this->button13->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(85, 162);
			this->button13->TabIndex = 22;
			this->button13->Text = L"+";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::SkyBlue;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(296, 127);
			this->button14->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(85, 78);
			this->button14->TabIndex = 26;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::SkyBlue;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->Location = System::Drawing::Point(21, 127);
			this->button15->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(176, 78);
			this->button15->TabIndex = 25;
			this->button15->Text = L"C";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::SkyBlue;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->Location = System::Drawing::Point(203, 127);
			this->button18->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(85, 78);
			this->button18->TabIndex = 23;
			this->button18->Text = L"CE";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::DarkOrange;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->Location = System::Drawing::Point(391, 127);
			this->button16->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(85, 78);
			this->button16->TabIndex = 30;
			this->button16->Text = L"√";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click_1);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkOrange;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->Location = System::Drawing::Point(390, 387);
			this->button19->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(85, 162);
			this->button19->TabIndex = 29;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DarkOrange;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->Location = System::Drawing::Point(391, 300);
			this->button20->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(85, 78);
			this->button20->TabIndex = 28;
			this->button20->Text = L"%";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkOrange;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->Location = System::Drawing::Point(391, 213);
			this->button21->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(85, 78);
			this->button21->TabIndex = 27;
			this->button21->Text = L"a²";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::LightBlue;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(516, 471);
			this->button22->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(176, 78);
			this->button22->TabIndex = 31;
			this->button22->Text = L"narzut";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::LightBlue;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(516, 385);
			this->button23->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(176, 78);
			this->button23->TabIndex = 32;
			this->button23->Text = L"marża";
			this->button23->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::LightBlue;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button26->Location = System::Drawing::Point(517, 213);
			this->button26->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(176, 78);
			this->button26->TabIndex = 34;
			this->button26->Text = L"netto -> brutto";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::LightBlue;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->Location = System::Drawing::Point(516, 300);
			this->button25->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(176, 78);
			this->button25->TabIndex = 35;
			this->button25->Text = L"brutto -> netto";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::DarkOrange;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(300, 627);
			this->button24->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(176, 78);
			this->button24->TabIndex = 38;
			this->button24->Text = L"dodawanie";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::DarkOrange;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->Location = System::Drawing::Point(300, 712);
			this->button27->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(176, 78);
			this->button27->TabIndex = 37;
			this->button27->Text = L"odejmowanie";
			this->button27->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::DarkOrange;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->Location = System::Drawing::Point(300, 798);
			this->button28->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(176, 78);
			this->button28->TabIndex = 36;
			this->button28->Text = L"mnożenie";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 627);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(258, 258);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"unnamed.jpg");
			this->imageList1->Images->SetKeyName(1, L"unnamed2.jpg");
			this->imageList1->Images->SetKeyName(2, L"unnamed1.jpg");
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Enabled = false;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(517, 50);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(176, 155);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(504, 586);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wyswietlacz);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Kalkulator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: Void Wypisz(String^ liczba) {
			if (wyswietlacz->Text == "0") {
				if (liczba != "+" && liczba != "/" && liczba != "*") wyswietlacz->Text = liczba;
			}
			else {
				 wyswietlacz->Text += liczba;	
			}
		}
		private: int Modulo() {
			int x0_int = Convert::ToInt32(x0);
			int x1_int = Convert::ToInt32(x1);
			int temp = x0_int;
			
			while (temp >= x1_int) { 
				temp -= x1_int;
			}
			if (x0_int/x1_int == 1) return 1;
			return temp;
		}

		private: Void Oblicz() {
			String^ split = wyswietlacz->Text;
			array<wchar_t>^ id = { '+' ,'-', '/', '*', '%', 'm', 'n'};
			x0 = Convert::ToDouble(split->Split(id)[0]);
			x1 = Convert::ToDouble(split->Split(id)[1]);
			switch (operacja) {
			case '+':
				wynik = x0 + x1;
				break;
			case '-':
				wynik = x0 - x1;
				break;
			case '/':
				if (x1 == 0) {
					MessageBox::Show("Dzielenie przez zero!");
				}
				else wynik = x0 / x1;
				break;
			case '*':
				wynik = x0 * x1;
				break;
			case '%':
				if (x1 > x0) wynik = 0.0;
				wynik = Modulo();
				break;
			case 'm':
				// obliczenie marży
				// marża = (cena_sprzedaży - cena_zakupu) / cena_sprzedaży
				// x0 -> zakup
				// x1 -> sprzedaż
				wynik = (x1 - x0) / x1 * 100;
				break;
			case 'n':
				// obliczenie marży
				// marża = (cena_sprzedaży - cena_zakupu) / cena_sprzedaży
				// x0 -> zakup
				// x1 -> sprzedaż
				wynik = (x1 - x0) / x0 * 100;
				break;
			default:
				wyswietlacz->Text = "error!";
			}
			if (operacja == 'm' || operacja == 'n') wyswietlacz->Text = Convert::ToString(wynik) + "%";
			else wyswietlacz->Text = Convert::ToString(wynik);
			wynik = 0;
		}



	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pomocToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Pomoc^ o_nas = gcnew Pomoc();
		o_nas->Show();
	}
private: System::Void standardowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 520;
	MyForm::Height = 625;
}
private: System::Void finansowyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 743;
	MyForm::Height = 625;
}
private: System::Void graToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::Width = 520;
	MyForm::Height = 978;
}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;
}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Czy wyłączyć kalkulator?", "Zamknięcie kalkulatora", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("9");
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("5");
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("0");
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	operacja = '+';
	Wypisz("+");
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	x0 = Convert::ToDouble(wyswietlacz->Text);
	wynik = x0 * 1.23;
	wyswietlacz->Text = Convert::ToString(wynik);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("1");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("2");
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("3");
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("4");
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("6");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("7");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz("8");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Wypisz(",");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	operacja = '/';
	Wypisz("/");
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	operacja = '-';
	Wypisz("-");
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	operacja = '*';
	Wypisz("*");
}
private: System::Void button16_Click_1(System::Object^ sender, System::EventArgs^ e) {
	x0 = Convert::ToDouble(wyswietlacz->Text);
	wynik = Math::Sqrt(x0);
	wyswietlacz->Text = Convert::ToString(wynik);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	wyswietlacz->Text = "0";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		wyswietlacz->Text = wyswietlacz->Text->Substring(0, (wyswietlacz->Text->Length) - 1);
	}
	catch (...) {}
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	Oblicz();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	operacja = '%';
	Wypisz("%");
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	x0 = Convert::ToDouble(wyswietlacz->Text);
	wynik = Math::Pow(x0, 2);
	wyswietlacz->Text = Convert::ToString(wynik);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	x0 = Convert::ToDouble(wyswietlacz->Text);
	wynik = x0 / 1.23;
	wyswietlacz->Text = Convert::ToString(wynik);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	operacja = 'm';
	Wypisz("m"); 
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	operacja = 'n';
	Wypisz("n");
}
};
}
