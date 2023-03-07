#pragma once

namespace Kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pomoc
	/// </summary>
	public ref class Pomoc : public System::Windows::Forms::Form
	{
	public:
		Pomoc(void)
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
		~Pomoc()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ pomoc_tekst;
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
			this->pomoc_tekst = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// pomoc_tekst
			// 
			this->pomoc_tekst->AutoSize = true;
			this->pomoc_tekst->Location = System::Drawing::Point(53, 27);
			this->pomoc_tekst->Name = L"pomoc_tekst";
			this->pomoc_tekst->Size = System::Drawing::Size(35, 13);
			this->pomoc_tekst->TabIndex = 1;
			this->pomoc_tekst->Text = L"label1";
			this->pomoc_tekst->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(56, 80);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(160, 86);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Program kalkulacyjny\r\n-----------------------\r\nAutor: Jakub Kopycki\r\n***\r\n2021 ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Pomoc::textBox1_TextChanged);
			// 
			// Pomoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pomoc_tekst);
			this->Name = L"Pomoc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pomoc";
			this->Load += gcnew System::EventHandler(this, &Pomoc::Pomoc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pomoc_Load(System::Object^ sender, System::EventArgs^ e) {
		pomoc_tekst->Text = " Program kalkulacyjny\n Autor: Jakub Kopycki\n Rok produkcji: 2021";
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
