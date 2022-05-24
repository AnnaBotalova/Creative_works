#pragma once

namespace datecalcul {

	
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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(62, 68);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 34);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(152, 68);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 34);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(332, 68);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(90, 34);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(453, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 66);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Российский формат";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(453, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(273, 66);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Американский формат";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			//
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(453, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(273, 66);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Английский формат";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(59, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"День";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(186, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 25);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Месяц";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(348, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Год";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(120, 188);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 38);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(120, 255);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 34);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(98, 134);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(275, 30);
			this->textBox6->TabIndex = 12;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(764, 353);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор дат";
			this->ResumeLayout(false);
			this->PerformLayout();

		} #pragma endregion
		bool Protect() //защита от неверного ввода 
		{
			if ((textBox1->Text->Length == 0) || (textBox2->Text->Length == 0))
			{
				return 0;
			}

			for (int i = 0; i < textBox1->Text->Length; i++)
			{
				if (!((textBox1->Text[i] >= '0') && (textBox1->Text[i] <= '9')))
				{
					return 0;
				}
			}
			int date = System::Convert::ToInt64(textBox1->Text);
			int age = System::Convert::ToInt64(textBox3->Text);
			if (textBox2->Text == "Январь" || textBox2->Text == "январь" || textBox2->Text == "Января" || textBox2->Text == "января")
			{
				if (!(date >= 1 && date <= 31))
					return 0;
			}
			else
				if (textBox2->Text == "Февраль" || textBox2->Text == "февраль" || textBox2->Text == "Февраля" || textBox2->Text == "февраля")
				{
					if (age % 4 == 0)
					{
						if (!(date >= 1 && date <= 29))
							return 0;
					}
					else
						if (!(date >= 1 && date <= 28))
							return 0;
				}
				else
					if (textBox2->Text == "Март" || textBox2->Text == "март" || textBox2->Text == "марта" || textBox2->Text == "Марта")
					{
						if (!(date >= 1 && date <= 31))
							return 0;
					}
					else
						if (textBox2->Text == "Апрель" || textBox2->Text == "апрель" || textBox2->Text == "апреля" || textBox2->Text == "Апреля")
						{
							if (!(date >= 1 && date <= 30))
								return 0;
						}
						else
							if (textBox2->Text == "Май" || textBox2->Text == "май" || textBox2->Text == "Мая" || textBox2->Text == "мая")
							{
								if (!(date >= 1 && date <= 31))
									return 0;
							}
							else
								if (textBox2->Text == "Июнь" || textBox2->Text == "июнь" || textBox2->Text == "Июня" || textBox2->Text == "июня")
								{
									if (!(date >= 1 && date <= 30))
										return 0;
								}
								else
									if (textBox2->Text == "Июль" || textBox2->Text == "июль" || textBox2->Text == "июля" || textBox2->Text == "Июля")
									{
										if (!(date >= 1 && date <= 31))
											return 0;
									}
									else
										if (textBox2->Text == "Август" || textBox2->Text == "август" || textBox2->Text == "августа" || textBox2->Text == "Августа")
										{
											if (!(date >= 1 && date <= 31))
												return 0;
										}
										else
											if (textBox2->Text == "Сентябрь" || textBox2->Text == "сентябрь" || textBox2->Text == "Сентября" || textBox2->Text == "сентября")
											{
												if (!(date >= 1 && date <= 30))
													return 0;
											}
											else
												if (textBox2->Text == "Октябрь" || textBox2->Text == "октябрь" || textBox2->Text == "октября" || textBox2->Text == "Октября")
												{
													if (!(date >= 1 && date <= 31))
														return 0;
												}
												else
													if (textBox2->Text == "Ноябрь" || textBox2->Text == "ноябрь" || textBox2->Text == "Ноября" || textBox2->Text == "ноября")
													{
														if (!(date >= 1 && date <= 30))
															return 0;
													}
													else
														if (textBox2->Text == "Декабрь" || textBox2->Text == "декабрь" || textBox2->Text == "Декабря" || textBox2->Text == "декабря")
														{
															if (!(date >= 1 && date <= 31))
																return 0;
														}
														else
														{
															return 0;
														}


			for (int i = 0; i < textBox3->Text->Length; i++)
			{
				if (!((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9')))
				{
					return 0;
				}
			}
			return 1;
		}
		void Clear() // очистка полей
		{
			textBox4->Text = "";
			textBox6->Text = "";
			textBox5->Text = "";
		}
		int Month() // номер месяца
		{
			int month = 0;
			if (textBox2->Text == "Январь" || textBox2->Text == "январь" || textBox2->Text == "Января" || textBox2->Text == "января")
			{
				month = 1;
			}
			else
				if (textBox2->Text == "Февраль" || textBox2->Text == "февраль" || textBox2->Text == "Февраля" || textBox2->Text == "февраля")
				{
					month = 2;
				}
				else
					if (textBox2->Text == "Март" || textBox2->Text == "март" || textBox2->Text == "марта" || textBox2->Text == "Марта")
					{
						month = 3;
					}
					else
						if (textBox2->Text == "Апрель" || textBox2->Text == "апрель" || textBox2->Text == "апреля" || textBox2->Text == "Апреля")
						{
							month = 4;
						}
						else
							if (textBox2->Text == "Май" || textBox2->Text == "май" || textBox2->Text == "Мая" || textBox2->Text == "мая")
							{
								month = 5;
							}
							else
								if (textBox2->Text == "Июнь" || textBox2->Text == "июнь" || textBox2->Text == "Июня" || textBox2->Text == "июня")
								{
									month = 6;
								}
								else
									if (textBox2->Text == "Июль" || textBox2->Text == "июль" || textBox2->Text == "июля" || textBox2->Text == "Июля")
									{
										month = 7;
									}
									else
										if (textBox2->Text == "Август" || textBox2->Text == "август" || textBox2->Text == "августа" || textBox2->Text == "Августа")
										{
											month = 8;
										}
										else
											if (textBox2->Text == "Сентябрь" || textBox2->Text == "сентябрь" || textBox2->Text == "Сентября" || textBox2->Text == "сентября")
											{
												month = 9;
											}
											else
												if (textBox2->Text == "Октябрь" || textBox2->Text == "октябрь" || textBox2->Text == "октября" || textBox2->Text == "Октября")
												{
													month = 10;
												}
												else
													if (textBox2->Text == "Ноябрь" || textBox2->Text == "ноябрь" || textBox2->Text == "Ноября" || textBox2->Text == "ноября")
													{
														month = 11;
													}
													else
														if (textBox2->Text == "Декабрь" || textBox2->Text == "декабрь" || textBox2->Text == "Декабря" || textBox2->Text == "декабря")
														{
															month = 12;
														}
			return month;
		}

		int Date() // день недели
		{
			int a;
			int y;
			int m;
			int R;
			a = (14 - Month()) / 12;
			y = System::Convert::ToInt64(textBox3->Text) - a;
			m = Month() + 12 * a - 2;
			R = 7000 + (System::Convert::ToInt64(textBox1->Text) + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
			return R % 7;
		}
		void Day_of_the_week() 
		{
			switch (Date())
			{
			case 0:
				textBox5->Text = "Воскресенье";
				break;
			case 1:
				textBox5->Text = "Понедельник";
				break;
			case 2:
				textBox5->Text = "Вторник";
				break;
			case 3:
				textBox5->Text = "Среда";
				break;
			case 4:
				textBox5->Text = "Четверг";
				break;
			case 5:
				textBox5->Text = "Пятница";
				break;
			case 6:
				textBox5->Text = "Суббота";
				break;
			}
		}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) { // российский формат
	if (Protect())
	{
		Clear(); 
		textBox6->Text = "Российский формат";
		textBox4->Text = textBox1->Text + ".";
		textBox4->Text += System::Convert::ToString(Month());
		textBox4->Text = textBox4->Text + "." + textBox3->Text;
		Day_of_the_week();
	}
	else
	{
		MessageBox::Show("Ошибка ввода!", "Ошибка");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //американский формат
	if (Protect())
	{
		Clear();
		textBox6->Text = "Американский формат";
		textBox4->Text = System::Convert::ToString(Month()) + ".";
		textBox4->Text += textBox1->Text;
		textBox4->Text = textBox4->Text + "." + textBox3->Text;
		Day_of_the_week();
	}
	else
	{
		MessageBox::Show("Ошибка ввода!", "Ошибка");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { // английский формат
	if (Protect())
	{
		Clear();
		textBox6->Text = "Английский формат";
		textBox4->Text = textBox1->Text + ".";
		textBox4->Text += System::Convert::ToString(Month());
		textBox4->Text = textBox4->Text + "." + textBox3->Text;
		Day_of_the_week();
	}
	else
	{
		MessageBox::Show("Ошибка ввода!", "Ошибка");
	}

}
};
}
