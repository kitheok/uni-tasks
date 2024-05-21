#pragma once

namespace проба2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button4;







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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Peru;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите число:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(16, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(459, 26);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Peru;
			this->button1->Location = System::Drawing::Point(16, 102);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 56);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Вариант  1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Peru;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->Location = System::Drawing::Point(182, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 56);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Вариант 2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Peru;
			this->button3->Location = System::Drawing::Point(16, 391);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(459, 56);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(16, 359);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(459, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Peru;
			this->label2->Location = System::Drawing::Point(12, 320);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Результат:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Peru;
			this->label3->Location = System::Drawing::Point(12, 189);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(293, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Формула\\критерии к задаче:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Moccasin;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->textBox3->ForeColor = System::Drawing::Color::Peru;
			this->textBox3->Location = System::Drawing::Point(16, 216);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(459, 88);
			this->textBox3->TabIndex = 9;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Peru;
			this->button4->Location = System::Drawing::Point(348, 102);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 56);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Задание 2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Moccasin;
			this->ClientSize = System::Drawing::Size(495, 468);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Лабораторная работа №1. Рекурсия";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*2 варинат*/
	int func1(int n) {
		if (n < 3) {
			return n;
		}
		else if (n > 2 && (n % 2 == 0)) {
			return 3 * (n - 1) + func1(n - 1) + 5;
		}
		else if (n > 2 && (n % 2 != 0)){
			return 3 * (n + 1) + func1(n - 2) - 2; 
		}
	}
	/*10 вариант*/
	int func2(int n) {
		if (n == 1) {
			return 1;
	}
		else if (n % 2 == 0) {
			return n + 3 * func2(n - 1);
		}
		else if (n > 1 && (n % 2 != 0)) {
			return 2 + 2 * func2(n - 2);
		}
	}
	/*2 вариант*/
	int sum(int n) {
		if (n < 10) {
			return n;
		}
		else {
			return ((n % 10) + sum(n / 10));
		}
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}bool Protect() {
	if (textBox1->Text->Length == 0) { return false; }
	for (int i = 0; i < textBox1->Text->Length; i++) {
		if ((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9')) {}
		else { return false; }
	}
	return true;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Protect()) {
		int num1, result;
		num1 = System::Convert::ToDouble(textBox1->Text);
		if (num1 < 31000) {
			result = func1(num1);
			if (result < 0) {
				MessageBox::Show("Число превышает допустимый размер", "Ошибка");
				textBox1->Text = L"";
			}
			else {
				textBox3->Text = "F(n)=n, при n<3 \r\nF(n) = 3 * (n - 1) + F(n - 1) + 5, при n > 2 и n четное число \r\nF(n)=3*(n+1)+F(n-2)-2, при n>2 и n нечетное число ";
				textBox2->Text = System::Convert::ToString(result);
			}
		}
		else {
			MessageBox::Show("Число превышает допустимый размер", "Ошибка");
			textBox1->Text = L"";
		}
	}
	else {
		MessageBox::Show("Ошибка ввода", "Ошибка");
		textBox1->Text = L"";
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Protect()) {
		int num1, result;
		num1 = System::Convert::ToDouble(textBox1->Text);
		if (num1 < 32000) {
			result = func2(num1);
			if (result < 2000000000) {
				result = func2(num1);
				textBox3->Text = "F(n)=1, при n=1 \r\nF(n)=n+3+F(n-1), если n четное число \r\nF(n)=2+2*F(n-2), при n>1 и n нечетное число ";
				textBox2->Text = System::Convert::ToString(result);
			}
			else {
				MessageBox::Show("Число превышает допустимый размер", "Ошибка");
				textBox1->Text = L"";
			}
		}
		else {
			MessageBox::Show("Число превышает допустимый размер", "Ошибка");
			textBox1->Text = L"";
		}
	}
	else {
		MessageBox::Show("Ошибка ввода", "Ошибка");
		textBox1->Text = L"";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Protect()) {
		int num1, result;
		num1 = System::Convert::ToDouble(textBox1->Text);
		if (num1 != 0) {
			result = sum(num1);
			if (result < 0) {
				MessageBox::Show("Число превышает допустимый размер или не соответствует условию задачи", "Ошибка");
				textBox1->Text = L"";
			}
			else {
				textBox3->Text = "Дано натуральное число N. Вычислите сумму его цифр.При решении этой задачи нельзя использовать строки, списки, массивы(ну и циклы, разумеется).";
				textBox2->Text = System::Convert::ToString(result);
			}
		}
		else {
			MessageBox::Show("Число превышает допустимый размер или не соответствует условию задачи", "Ошибка");
			textBox1->Text = L"";
		}
	}
	else {
		MessageBox::Show("Ошибка ввода", "Ошибка");
		textBox1->Text = L"";
	}
}
private: System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
	textBox1->Text = L"";
	textBox2->Text = L"";
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
