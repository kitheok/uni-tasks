#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
namespace test3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Button^ button1;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Файлы:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Thistle;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(391, 32);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(339, 56);
			this->textBox3->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(387, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(271, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Счётчик букв и цифр в тексте:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Чтение файла:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 132);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(339, 258);
			this->textBox1->TabIndex = 20;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::GhostWhite;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(12, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(339, 51);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Редкатирование ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::redac_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(391, 132);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(339, 258);
			this->textBox2->TabIndex = 22;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::GhostWhite;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(391, 396);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 51);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Сохранить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::save_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::GhostWhite;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(619, 396);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 51);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Очистить";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::clean_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(387, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(243, 20);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Отредактированный текст:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::GhostWhite;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(10, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(341, 54);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Выберите файл...";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::test_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(742, 456);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Лабораторная работа 3.  Строки и работа с файлами ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void test_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ FileName = "";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = openFileDialog1->FileName;
	}
	try {
		StreamReader^ file = File::OpenText(FileName);
		textBox1->Text = file->ReadToEnd();
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Не удалось открыть файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ FileName = "";
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		FileName = saveFileDialog1->FileName;
	}
	try {
		StreamWriter^ writer = gcnew StreamWriter(FileName);
		writer->Write(textBox2->Text);
		writer->Close();
		MessageBox::Show(this, "Файл успешно сохранен", "Успешно", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ e) {
		MessageBox::Show(this, "Не удалось сохранить файл", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void redac_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ originalText = textBox1->Text;
	int counter1 = 0;
	int counter2 = 0;
	//создание объекта для построения новой строки с вставкой символов
	System::Text::StringBuilder^ newText = gcnew System::Text::StringBuilder();

	//конструкция, используемая для итерации по элементам коллекции или последовательности
	if (textBox1->Text == "") {
		MessageBox::Show(this, "Отсутствует текст для редактирования.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		for each (wchar_t c in originalText) {
			newText->Append(c);
			if (c == L'?') {
				newText->Append(L"%");
			}

			if (Char::IsDigit(c)) {
				counter2 += 1;
			}
			else if (Char::IsLetter(c)) {
				counter1 += 1;
			}
		}
	}
	//установка измененного текста обратно в textBox1
	textBox2->Text = newText->ToString();
	textBox3->Text = "Количество букв: " + counter1 + "\r\n" + "Количество цифр: " + counter2;
}
private: System::Void clean_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
