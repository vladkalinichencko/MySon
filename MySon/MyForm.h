#pragma once

#include "Class.h"

namespace MySon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		int j = 0;
		String^ i;
		int max;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Одежда;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Размер;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column7;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column14;
			 Class cl;
			 int chetchic = 0;

			 int res(int h) {
				 if (h == 0) {
					 chetchic = 0;
					 return 0;
				 }
				dataGridView1->Rows->Add();
				//dataGridView1->Rows[chetchic]->Cells[0]->Value = cl.sel("Одежда", h - 1);
				//dataGridView1->Rows[chetchic]->Cells[1]->Value = cl.sel("Размер", h - 1);
				//dataGridView1->Rows[chetchic]->Cells[2]->Value = cl.sel("Пол", h - 1);
				//dataGridView1->Rows[chetchic]->Cells[3]->Value = cl.sel("Цвет", h - 1);
				//dataGridView1->Rows[chetchic]->Cells[4]->Value = cl.sel("Особенности", h - 1);
				//dataGridView1->Rows[chetchic]->Cells[5]->Value = cl.sel("Оптовая_цена", h - 1);
				//dataGridView1->Rows[chetchic]->Cells[6]->Value = cl.sel("Розничная_цена", h - 1);
				//dataGridView1->Rows[chetchic]->Cells[7]->Value = cl.sel("Скидка", h - 1);
				chetchic++;
				return res(h - 1);
			 }

			 void qwe() {
				 String^ z = Convert::ToString(q);

				 StreamReader^ a = gcnew StreamReader("q.txt");
				 while (a->Peek() != -1) {
					 z = a->ReadLine();
				 }
				 a->Close();

				 q = Convert::ToInt16(z);
			 }

			 void qwe2() {
				 String^ ze = Convert::ToString(q2);

				 StreamReader^ x = gcnew StreamReader("q2.txt");
				 while (x->Peek() != -1) {
					 ze = x->ReadLine();
				 }
				 x->Close();

				 q2 = Convert::ToInt16(ze);
			 }

			 void res2(int h2) {
				 for (int i = 0; i < h2; i++) {
					 dataGridView2->Rows->Add();
					 //dataGridView2->Rows[i]->Cells[0]->Value = cl.sel("Одежда", h2 - 1);
					 //dataGridView2->Rows[i]->Cells[1]->Value = cl.sel("Размер", h2 - 1);
					 //dataGridView2->Rows[i]->Cells[2]->Value = cl.sel("Пол", h2 - 1);
					 //dataGridView2->Rows[i]->Cells[3]->Value = cl.sel("Цвет", h2 - 1);
					 //dataGridView2->Rows[i]->Cells[4]->Value = cl.sel("Особенности", h2 - 1);
					 //dataGridView2->Rows[i]->Cells[5]->Value = cl.sel("Доход", h2 - 1);
				 }
			 }

			 void mult() {
				 qwe();
				 res(q);
				 qwe2();
				 res2(q2);
			 }

			 int q = 0;
			 int q2 = 0;


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
	private: System::Windows::Forms::TabControl^  tabControl;
	private: System::Windows::Forms::TabPage^  Настройки;
	private: System::Windows::Forms::TabPage^  Проданное;
	private: System::Windows::Forms::TabPage^  Купленное;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox6;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox9;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label1;
	protected:

	protected:



	protected:




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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->Настройки = (gcnew System::Windows::Forms::TabPage());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Проданное = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Купленное = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Одежда = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Размер = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl->SuspendLayout();
			this->Настройки->SuspendLayout();
			this->Проданное->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->Купленное->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl->Controls->Add(this->Настройки);
			this->tabControl->Controls->Add(this->Проданное);
			this->tabControl->Controls->Add(this->Купленное);
			this->tabControl->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabControl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl->ItemSize = System::Drawing::Size(50, 35);
			this->tabControl->Location = System::Drawing::Point(-2, 0);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(1326, 674);
			this->tabControl->TabIndex = 0;
			// 
			// Настройки
			// 
			this->Настройки->AutoScroll = true;
			this->Настройки->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Настройки->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Настройки->Controls->Add(this->button9);
			this->Настройки->Controls->Add(this->button2);
			this->Настройки->Controls->Add(this->button1);
			this->Настройки->Controls->Add(this->maskedTextBox7);
			this->Настройки->Controls->Add(this->maskedTextBox8);
			this->Настройки->Controls->Add(this->maskedTextBox9);
			this->Настройки->Controls->Add(this->label13);
			this->Настройки->Controls->Add(this->label14);
			this->Настройки->Controls->Add(this->label15);
			this->Настройки->Controls->Add(this->maskedTextBox6);
			this->Настройки->Controls->Add(this->maskedTextBox5);
			this->Настройки->Controls->Add(this->maskedTextBox4);
			this->Настройки->Controls->Add(this->label10);
			this->Настройки->Controls->Add(this->label9);
			this->Настройки->Controls->Add(this->label8);
			this->Настройки->Controls->Add(this->label7);
			this->Настройки->Controls->Add(this->label6);
			this->Настройки->Controls->Add(this->label5);
			this->Настройки->Controls->Add(this->label4);
			this->Настройки->Controls->Add(this->label3);
			this->Настройки->Controls->Add(this->label2);
			this->Настройки->Controls->Add(this->panel1);
			this->Настройки->Location = System::Drawing::Point(4, 39);
			this->Настройки->Name = L"Настройки";
			this->Настройки->Size = System::Drawing::Size(1318, 631);
			this->Настройки->TabIndex = 0;
			this->Настройки->Text = L"Настройки";
			this->Настройки->Click += gcnew System::EventHandler(this, &MyForm::Настройки_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Location = System::Drawing::Point(491, 819);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(203, 53);
			this->button9->TabIndex = 29;
			this->button9->Text = L"Обновить";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(261, 819);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 53);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(31, 819);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 53);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->BackColor = System::Drawing::Color::White;
			this->maskedTextBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox7->Location = System::Drawing::Point(684, 597);
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(151, 33);
			this->maskedTextBox7->TabIndex = 22;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->BackColor = System::Drawing::Color::White;
			this->maskedTextBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox8->Location = System::Drawing::Point(684, 498);
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->Size = System::Drawing::Size(151, 33);
			this->maskedTextBox8->TabIndex = 21;
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->BackColor = System::Drawing::Color::White;
			this->maskedTextBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox9->Location = System::Drawing::Point(684, 392);
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->Size = System::Drawing::Size(151, 33);
			this->maskedTextBox9->TabIndex = 17;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::PowderBlue;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(841, 505);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 33);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Руб.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::PowderBlue;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(841, 604);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 33);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Дн.";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::PowderBlue;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(841, 399);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 33);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Дн.";
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->BackColor = System::Drawing::Color::White;
			this->maskedTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox6->Location = System::Drawing::Point(684, 290);
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(151, 33);
			this->maskedTextBox6->TabIndex = 16;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->BackColor = System::Drawing::Color::White;
			this->maskedTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox5->Location = System::Drawing::Point(684, 191);
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(151, 33);
			this->maskedTextBox5->TabIndex = 15;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->BackColor = System::Drawing::Color::White;
			this->maskedTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox4->Location = System::Drawing::Point(684, 85);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(151, 33);
			this->maskedTextBox4->TabIndex = 1;
			this->maskedTextBox4->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox4_MaskInputRejected);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::PowderBlue;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(841, 198);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 33);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Дн.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::PowderBlue;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(841, 297);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 33);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Руб.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::PowderBlue;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(841, 92);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 33);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Руб.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::PowderBlue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(25, 604);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(583, 33);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Период выплачивания денег на развитие:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::PowderBlue;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(180, 399);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(428, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Период выплачивания налога:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::PowderBlue;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(170, 191);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(438, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Период выплачивания аренды:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PowderBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(459, 505);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Развитие:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PowderBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(504, 297);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Налог:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::PowderBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(485, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Аренда:";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::PowderBlue;
			this->panel1->Location = System::Drawing::Point(-4, 58);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1516, 612);
			this->panel1->TabIndex = 30;
			// 
			// Проданное
			// 
			this->Проданное->AutoScroll = true;
			this->Проданное->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Проданное->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Проданное->Controls->Add(this->dataGridView2);
			this->Проданное->Controls->Add(this->panel2);
			this->Проданное->Location = System::Drawing::Point(4, 39);
			this->Проданное->Name = L"Проданное";
			this->Проданное->Size = System::Drawing::Size(1318, 631);
			this->Проданное->TabIndex = 1;
			this->Проданное->Text = L"Проданное";
			this->Проданное->Click += gcnew System::EventHandler(this, &MyForm::Проданное_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToOrderColumns = true;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column8,
					this->Column9, this->Column10, this->Column11, this->Column12, this->Column13, this->Column14
			});
			this->dataGridView2->GridColor = System::Drawing::Color::Gray;
			this->dataGridView2->Location = System::Drawing::Point(379, 17);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 24;
			this->dataGridView2->RowTemplate->Height = 50;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1544, 65535);
			this->dataGridView2->TabIndex = 15;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DataGridView2_CellContentClick);
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Одежда";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Размер";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Пол";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Цвет";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Особенности";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Доход";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Возврат";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Text = L"Возврат";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->panel2->BackColor = System::Drawing::Color::PowderBlue;
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->label34);
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->label32);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(350, 65535);
			this->panel2->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(89, 143);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(174, 64);
			this->button5->TabIndex = 28;
			this->button5->Text = L"ОК";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Controls->Add(this->label47);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->label35);
			this->panel4->Location = System::Drawing::Point(15, 17);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(319, 109);
			this->panel4->TabIndex = 29;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::White;
			this->label47->Location = System::Drawing::Point(80, 62);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(0, 33);
			this->label47->TabIndex = 29;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(149, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 33);
			this->label1->TabIndex = 28;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(15, 10);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(0, 33);
			this->label35->TabIndex = 27;
			this->label35->Click += gcnew System::EventHandler(this, &MyForm::label35_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(48, 704);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(25, 33);
			this->label34->TabIndex = 26;
			this->label34->Text = L"-";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(29, 644);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(245, 33);
			this->label33->TabIndex = 25;
			this->label33->Text = L"Чистая прибыль:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(200, 704);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(74, 33);
			this->label32->TabIndex = 24;
			this->label32->Text = L"Руб.";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(176, 566);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(25, 33);
			this->label31->TabIndex = 23;
			this->label31->Text = L"-";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(6, 570);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(159, 29);
			this->label30->TabIndex = 22;
			this->label30->Text = L"Заработано:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(274, 566);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(74, 33);
			this->label29->TabIndex = 21;
			this->label29->Text = L"Руб.";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(176, 466);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(25, 33);
			this->label28->TabIndex = 20;
			this->label28->Text = L"-";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(176, 358);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(25, 33);
			this->label27->TabIndex = 19;
			this->label27->Text = L"-";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(176, 246);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(25, 33);
			this->label26->TabIndex = 18;
			this->label26->Text = L"-";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(274, 466);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(74, 33);
			this->label25->TabIndex = 17;
			this->label25->Text = L"Руб.";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(274, 358);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(74, 33);
			this->label24->TabIndex = 16;
			this->label24->Text = L"Руб.";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(274, 246);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(74, 33);
			this->label23->TabIndex = 15;
			this->label23->Text = L"Руб.";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(13, 466);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(149, 33);
			this->label22->TabIndex = 15;
			this->label22->Text = L"Развитие:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(58, 358);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(104, 33);
			this->label21->TabIndex = 3;
			this->label21->Text = L"Налог:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(39, 246);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(123, 33);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Аренда:";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Location = System::Drawing::Point(31, 761);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(287, 61);
			this->button3->TabIndex = 2;
			this->button3->Text = L"День прошёл";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// Купленное
			// 
			this->Купленное->AutoScroll = true;
			this->Купленное->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Купленное->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Купленное->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Купленное->Controls->Add(this->label12);
			this->Купленное->Controls->Add(this->textBox8);
			this->Купленное->Controls->Add(this->textBox7);
			this->Купленное->Controls->Add(this->textBox6);
			this->Купленное->Controls->Add(this->textBox5);
			this->Купленное->Controls->Add(this->textBox4);
			this->Купленное->Controls->Add(this->textBox3);
			this->Купленное->Controls->Add(this->textBox2);
			this->Купленное->Controls->Add(this->textBox1);
			this->Купленное->Controls->Add(this->label11);
			this->Купленное->Controls->Add(this->dataGridView1);
			this->Купленное->Controls->Add(this->button7);
			this->Купленное->Controls->Add(this->button6);
			this->Купленное->Location = System::Drawing::Point(4, 39);
			this->Купленное->Name = L"Купленное";
			this->Купленное->Size = System::Drawing::Size(1318, 631);
			this->Купленное->TabIndex = 2;
			this->Купленное->Text = L"Приобретённое";
			this->Купленное->Click += gcnew System::EventHandler(this, &MyForm::Купленное_Click);
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(682, 192);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(638, 55);
			this->label12->TabIndex = 1;
			this->label12->Text = L"-";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox8
			// 
			this->textBox8->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(16) {
				L"Шапка", L"Кепка", L"Майка",
					L"Рубашка", L"Футболка", L"Кофта", L"Свитер", L"Топ", L"Трусы", L"Штаны", L"Шорты", L"Подштаники", L"Колготки", L"Носки", L"Следки",
					L"Пельмень"
			});
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->ForeColor = System::Drawing::Color::Black;
			this->textBox8->Location = System::Drawing::Point(1751, 73);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(197, 33);
			this->textBox8->TabIndex = 34;
			// 
			// textBox7
			// 
			this->textBox7->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(16) {
				L"Шапка", L"Кепка", L"Майка",
					L"Рубашка", L"Футболка", L"Кофта", L"Свитер", L"Топ", L"Трусы", L"Штаны", L"Шорты", L"Подштаники", L"Колготки", L"Носки", L"Следки",
					L"Пельмень"
			});
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->ForeColor = System::Drawing::Color::Black;
			this->textBox7->Location = System::Drawing::Point(1503, 73);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(245, 33);
			this->textBox7->TabIndex = 33;
			// 
			// textBox6
			// 
			this->textBox6->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(16) {
				L"Шапка", L"Кепка", L"Майка",
					L"Рубашка", L"Футболка", L"Кофта", L"Свитер", L"Топ", L"Трусы", L"Штаны", L"Шорты", L"Подштаники", L"Колготки", L"Носки", L"Следки",
					L"Пельмень"
			});
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->ForeColor = System::Drawing::Color::Black;
			this->textBox6->Location = System::Drawing::Point(1259, 73);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(241, 33);
			this->textBox6->TabIndex = 32;
			// 
			// textBox5
			// 
			this->textBox5->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(16) {
				L"Шапка", L"Кепка", L"Майка",
					L"Рубашка", L"Футболка", L"Кофта", L"Свитер", L"Топ", L"Трусы", L"Штаны", L"Шорты", L"Подштаники", L"Колготки", L"Носки", L"Следки",
					L"Пельмень"
			});
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->ForeColor = System::Drawing::Color::Black;
			this->textBox5->Location = System::Drawing::Point(952, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(304, 33);
			this->textBox5->TabIndex = 31;
			// 
			// textBox4
			// 
			this->textBox4->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(16) {
				L"Шапка", L"Кепка", L"Майка",
					L"Рубашка", L"Футболка", L"Кофта", L"Свитер", L"Топ", L"Трусы", L"Штаны", L"Шорты", L"Подштаники", L"Колготки", L"Носки", L"Следки",
					L"Пельмень"
			});
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(278, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 33);
			this->textBox4->TabIndex = 30;
			// 
			// textBox3
			// 
			this->textBox3->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(11) {
				L"Чёрный", L"Голубой", L"Синий",
					L"Бежевый", L"Жёлтый", L"Салатовый", L"Зелёный", L"Розовый", L"Красный", L"Белый", L"Серый"
			});
			this->textBox3->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox3->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(692, 73);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(258, 33);
			this->textBox3->TabIndex = 29;
			// 
			// textBox2
			// 
			this->textBox2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"Женский", L"Мужской" });
			this->textBox2->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox2->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(474, 73);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(216, 33);
			this->textBox2->TabIndex = 28;
			// 
			// textBox1
			// 
			this->textBox1->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(16) {
				L"Шапка", L"Кепка", L"Майка",
					L"Рубашка", L"Футболка", L"Кофта", L"Свитер", L"Топ", L"Трусы", L"Штаны", L"Шорты", L"Подштаники", L"Колготки", L"Носки", L"Следки",
					L"Пельмень"
			});
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->textBox1->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::CustomSource;
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(15, 73);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(261, 33);
			this->textBox1->TabIndex = 27;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::PowderBlue;
			this->label11->Location = System::Drawing::Point(13, 34);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(1937, 74);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Одежда:               Размер:          Пол:                  Цвет:               "
				L"      Особенности:             Оптовая цена:   Розничная цена: Скидка:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::White;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Одежда,
					this->Размер, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 264);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 24;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1937, 65514);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Одежда
			// 
			this->Одежда->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Одежда->FillWeight = 100.1524F;
			this->Одежда->HeaderText = L"Одежда";
			this->Одежда->MinimumWidth = 6;
			this->Одежда->Name = L"Одежда";
			this->Одежда->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Одежда->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Размер
			// 
			this->Размер->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Размер->FillWeight = 99.69524F;
			this->Размер->HeaderText = L"Размер";
			this->Размер->MinimumWidth = 6;
			this->Размер->Name = L"Размер";
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column1->FillWeight = 100.1508F;
			this->Column1->HeaderText = L"Пол";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column2->FillWeight = 100.1532F;
			this->Column2->HeaderText = L"Цвет";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column3->FillWeight = 99.69585F;
			this->Column3->HeaderText = L"Особенности";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column4->FillWeight = 100.1513F;
			this->Column4->HeaderText = L"Оптовая цена, руб.";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column5->FillWeight = 100.1536F;
			this->Column5->HeaderText = L"Розничная цена, руб.";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column6->FillWeight = 99.69613F;
			this->Column6->HeaderText = L"Скидка, %";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Column7->FillWeight = 100.1515F;
			this->Column7->HeaderText = L"Продано";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Text = L"Продано";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(1004, 124);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(946, 47);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Добавить";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(13, 124);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(985, 47);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Поиск";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1322, 673);
			this->Controls->Add(this->tabControl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MySun";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl->ResumeLayout(false);
			this->Настройки->ResumeLayout(false);
			this->Настройки->PerformLayout();
			this->Проданное->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->Купленное->ResumeLayout(false);
			this->Купленное->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			mult();
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Настройки_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Class cl;

	cl.fst("b.txt", maskedTextBox4->Text->ToString());
	cl.fst("c.txt", maskedTextBox5->Text->ToString());
	cl.fst("d.txt", maskedTextBox6->Text->ToString());
	cl.fst("ej.txt", maskedTextBox9->Text->ToString());
	cl.fst("f.txt", maskedTextBox8->Text->ToString());
	cl.fst("g.txt", maskedTextBox7->Text->ToString());

	max = Convert::ToInt16(maskedTextBox5->Text);
	if (max < Convert::ToInt16(maskedTextBox9->Text))
		max = Convert::ToInt16(maskedTextBox9->Text);
	if (max < Convert::ToInt16(maskedTextBox7->Text))
		max = Convert::ToInt16(maskedTextBox7->Text);
}
private: System::Void maskedTextBox4_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label35_Click(System::Object^  sender, System::EventArgs^  e) {
}
	
private: System::Void Купленное_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Проданное_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label18_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label19_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	
	StreamReader^ b = gcnew StreamReader("b.txt");
	while (b->Peek() != -1)
	{
		maskedTextBox4->Text = b->ReadLine();
	}
	b->Close();
	StreamReader^ c = gcnew StreamReader("c.txt");
	while (c->Peek() != -1)
	{
		maskedTextBox5->Text = c->ReadLine();
	}
	c->Close();
	StreamReader^ d = gcnew StreamReader("d.txt");
	while (d->Peek() != -1)
	{
		maskedTextBox6->Text = d->ReadLine();
	}
	d->Close();
	StreamReader^ r = gcnew StreamReader("ej.txt");
	while (r->Peek() != -1)
	{
		maskedTextBox9->Text = r->ReadLine();
	}
	r->Close();
	StreamReader^ f = gcnew StreamReader("f.txt");
	while (f->Peek() != -1)
	{
		maskedTextBox8->Text = f->ReadLine();
	}
	f->Close();
	StreamReader^ g = gcnew StreamReader("g.txt");
	while (g->Peek() != -1)
	{
		maskedTextBox7->Text = g->ReadLine();
	}
	g->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Class cl;

	cl.fst("b.txt", " ");
	cl.fst("c.txt", " ");
	cl.fst("d.txt", " ");
	cl.fst("ej.txt", " ");
	cl.fst("f.txt", " ");
	cl.fst("g.txt", " ");

	maskedTextBox4->Text = " ";
	maskedTextBox5->Text = " ";
	maskedTextBox6->Text = " ";
	maskedTextBox9->Text = " ";
	maskedTextBox8->Text = " ";
	maskedTextBox7->Text = " ";
}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	Class cl;

	StreamReader^ in = gcnew StreamReader("count.txt");
	while (in->Peek() != -1)
	{
		i = in->ReadLine();
	}
	in->Close();

	j = Convert::ToInt16(i) + 1;
	i = Convert::ToString(j);
	cl.fst("count.txt", i);

	if (i == maskedTextBox5->Text){
		label35->Text = "Прошло";
		label1->Text = i;
		label47->Text = "дней!";
		button5->Visible = true;
		label26->Text = maskedTextBox4->Text;
		label31->Text = "0";
		label34->Text = "0";
	}
	if (i == maskedTextBox9->Text) {
		label35->Text = "Прошло";
		label1->Text = i;
		label47->Text = "дней!";
		button5->Visible = true;
		label27->Text = maskedTextBox6->Text;
		label31->Text = "0";
		label34->Text = "0";
	}
	if (i == maskedTextBox7->Text) {
		label35->Text = "Прошло";
		label1->Text = i;
		label47->Text = "дней!";
		button5->Visible = true;
		label28->Text = maskedTextBox8->Text;
		label31->Text = "0";
		label34->Text = "0";
	}		
	if (j%7 == 0) {
		label35->Text = "Прошло";
		label1->Text = "7";
		label47->Text = "дней!"; 
		button5->Visible = true;
		label31->Text = "0";
	}
	if (i == Convert::ToString(max + 1)) {
		i = "0";
		cl.fst("count.txt", i);

		label26->Text = "0";
		label27->Text = "0";
		label28->Text = "0";
		label31->Text = "0";
		label34->Text = "0";
		label35->Text = " ";
		label1->Text = " ";
		label47->Text = " ";

		q = 0;
		cl.fst("q.txt", Convert::ToString(q));
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Class cl;
	button5->Visible = false;

	while (0 != dataGridView2->RowCount)
		dataGridView2->Rows->RemoveAt(0);

	//cl.delAll();
	q2 = 0;
	cl.fst("q2.txt", Convert::ToString(q2));

	label35->Text = " ";
	label1->Text = " ";
	label47->Text = " ";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text == "" || textBox4->Text == "" || textBox2->Text == "" || textBox3->Text == "" || textBox5->Text == "" || textBox6->Text == "" || textBox7->Text == "" || textBox8->Text == "") {
		MessageBox::Show("Все поля должны быть заполнены в нужном формате!");
	}
	else {
		Class cl;
		String^ z = Convert::ToString(q);

		StreamReader^ a = gcnew StreamReader("q.txt");
		while (a->Peek() != -1) {
			z = a->ReadLine();
		}
		a->Close();

		q = Convert::ToInt16(z);

		q++;
		cl.fst("q.txt", Convert::ToString(q));
		dataGridView1->Rows->Add();

		//cl.put(q - 1 , textBox1->Text, textBox4->Text, textBox2->Text, textBox3->Text, textBox5->Text, textBox6->Text, textBox7->Text, textBox8->Text);
		dataGridView1->Rows[q - 1]->Cells[0]->Value = textBox1->Text;
		dataGridView1->Rows[q - 1]->Cells[1]->Value = textBox4->Text;
		dataGridView1->Rows[q - 1]->Cells[2]->Value = textBox2->Text;
		dataGridView1->Rows[q - 1]->Cells[3]->Value = textBox3->Text;
		dataGridView1->Rows[q - 1]->Cells[4]->Value = textBox5->Text;
		dataGridView1->Rows[q - 1]->Cells[5]->Value = textBox6->Text;
		dataGridView1->Rows[q - 1]->Cells[6]->Value = textBox7->Text;
		dataGridView1->Rows[q - 1]->Cells[7]->Value = textBox8->Text;
		textBox1->Text = "";
		textBox4->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Class cl;
	int sch = 0;
	for (int i = 0; i < q; i++) {
		if (textBox1->Text != "") {
			if (dataGridView1->Rows[i]->Cells[0]->Value->ToString() != textBox1->Text->ToString())
				continue;
		}
		if (textBox4->Text != "") {
			if (dataGridView1->Rows[i]->Cells[1]->Value->ToString() != textBox4->Text->ToString())
				continue;
		}
		if (textBox2->Text != "") {
			if (dataGridView1->Rows[i]->Cells[2]->Value->ToString() != textBox2->Text->ToString())
				continue;
		}
		if (textBox3->Text != "") {
			if (dataGridView1->Rows[i]->Cells[3]->Value->ToString() != textBox3->Text->ToString())
				continue;
		}
		if (textBox5->Text != "") {
			if (dataGridView1->Rows[i]->Cells[4]->Value->ToString() != textBox5->Text->ToString())
				continue;
		}
		if (textBox6->Text != "") {
			if (dataGridView1->Rows[i]->Cells[5]->Value->ToString() != textBox6->Text->ToString())
				continue;
		}
		if (textBox7->Text != "") {
			if (dataGridView1->Rows[i]->Cells[6]->Value->ToString() != textBox7->Text->ToString())
				continue;
		}
		if (textBox8->Text != "") {
			if (dataGridView1->Rows[i]->Cells[7]->Value->ToString() != textBox8->Text->ToString())
				continue;
		}
			sch++;
			dataGridView1->Rows->Add();
			for (int j = q - 1; j >= 0; j--) {
				//cl.upd(j, j + 1);
				dataGridView1->Rows[j + 1]->Cells[0]->Value = dataGridView1->Rows[j]->Cells[0]->Value;
				dataGridView1->Rows[j + 1]->Cells[1]->Value = dataGridView1->Rows[j]->Cells[1]->Value;
				dataGridView1->Rows[j + 1]->Cells[2]->Value = dataGridView1->Rows[j]->Cells[2]->Value;
				dataGridView1->Rows[j + 1]->Cells[3]->Value = dataGridView1->Rows[j]->Cells[3]->Value;
				dataGridView1->Rows[j + 1]->Cells[4]->Value = dataGridView1->Rows[j]->Cells[4]->Value;
				dataGridView1->Rows[j + 1]->Cells[5]->Value = dataGridView1->Rows[j]->Cells[5]->Value;
				dataGridView1->Rows[j + 1]->Cells[6]->Value = dataGridView1->Rows[j]->Cells[6]->Value;
				dataGridView1->Rows[j + 1]->Cells[7]->Value = dataGridView1->Rows[j]->Cells[7]->Value;
			}
			//cl.upd(i + 1, 0);
			dataGridView1->Rows[0]->Cells[0]->Value = dataGridView1->Rows[i + 1]->Cells[0]->Value;
			dataGridView1->Rows[0]->Cells[1]->Value = dataGridView1->Rows[i + 1]->Cells[1]->Value;
			dataGridView1->Rows[0]->Cells[2]->Value = dataGridView1->Rows[i + 1]->Cells[2]->Value;
			dataGridView1->Rows[0]->Cells[3]->Value = dataGridView1->Rows[i + 1]->Cells[3]->Value;
			dataGridView1->Rows[0]->Cells[4]->Value = dataGridView1->Rows[i + 1]->Cells[4]->Value;
			dataGridView1->Rows[0]->Cells[5]->Value = dataGridView1->Rows[i + 1]->Cells[5]->Value;
			dataGridView1->Rows[0]->Cells[6]->Value = dataGridView1->Rows[i + 1]->Cells[6]->Value;
			dataGridView1->Rows[0]->Cells[7]->Value = dataGridView1->Rows[i + 1]->Cells[7]->Value;
			dataGridView1->Rows->RemoveAt(i + 1);
			//for (int j = i + 2; j <= q; j++) {
			//	cl.upd(j, j - 1);
			//}
		}
		textBox1->Text = "";
		textBox4->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		label12->Text = "Найдено " + Convert::ToString(sch) + " элементов:";
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	int ind = dataGridView1->CurrentCell->RowIndex;
	dataGridView2->Rows->Add();
	Class cl;
	//cl.del(ind);
	String^ z = Convert::ToString(q2);

	StreamReader^ х = gcnew StreamReader("q2.txt");
	while (х->Peek() != -1) {
		z = х->ReadLine();
	}
	х->Close();
	q2 = Convert::ToInt16(z);
	q2 += 1;
	cl.fst("q2.txt", Convert::ToString(q2));

	//cl.put2(dataGridView1->Rows[ind]->Cells[0]->Value->ToString(), dataGridView1->Rows[ind]->Cells[1]->Value->ToString(), dataGridView1->Rows[ind]->Cells[2]->Value->ToString(), dataGridView1->Rows[ind]->Cells[3]->Value->ToString(), dataGridView1->Rows[ind]->Cells[4]->Value->ToString(), Convert::ToString((Convert::ToDouble(dataGridView1->Rows[ind]->Cells[6]->Value) - ((Convert::ToDouble(dataGridView1->Rows[ind]->Cells[6]->Value) / 100) * Convert::ToDouble(dataGridView1->Rows[ind]->Cells[7]->Value))) - Convert::ToDouble(dataGridView1->Rows[ind]->Cells[5]->Value)), q2 - 1);
	if (dataGridView1->Rows[ind]->Cells[0]->Value == nullptr)
		dataGridView2->Rows[q2 - 1]->Cells[0]->Value = "";
	else
		dataGridView2->Rows[q2 - 1]->Cells[0]->Value = dataGridView1->Rows[ind]->Cells[0]->Value->ToString();
	if (dataGridView1->Rows[ind]->Cells[0]->Value == nullptr)
		dataGridView2->Rows[q2 - 1]->Cells[1]->Value = "";
	else
		dataGridView2->Rows[q2 - 1]->Cells[1]->Value = dataGridView1->Rows[ind]->Cells[1]->Value->ToString();
	if (dataGridView1->Rows[ind]->Cells[0]->Value == nullptr)
		dataGridView2->Rows[q2 - 1]->Cells[2]->Value = "";
	else
		dataGridView2->Rows[q2 - 1]->Cells[2]->Value = dataGridView1->Rows[ind]->Cells[2]->Value->ToString();
	if (dataGridView1->Rows[ind]->Cells[0]->Value == nullptr)
		dataGridView2->Rows[q2 - 1]->Cells[3]->Value = "";
	else
		dataGridView2->Rows[q2 - 1]->Cells[3]->Value = dataGridView1->Rows[ind]->Cells[3]->Value->ToString();
	if (dataGridView1->Rows[ind]->Cells[0]->Value == nullptr)
		dataGridView2->Rows[q2 - 1]->Cells[4]->Value = "";
	else
		dataGridView2->Rows[q2 - 1]->Cells[4]->Value = dataGridView1->Rows[ind]->Cells[4]->Value->ToString();
	if (dataGridView1->Rows[ind]->Cells[6]->Value == "" & dataGridView1->Rows[ind]->Cells[7]->Value == "" & dataGridView1->Rows[ind]->Cells[5]->Value == "")
		dataGridView2->Rows[q2 - 1]->Cells[5]->Value = "";
	else
		dataGridView2->Rows[q2 - 1]->Cells[5]->Value = Convert::ToString((Convert::ToDouble(dataGridView1->Rows[ind]->Cells[6]->Value) - ((Convert::ToDouble(dataGridView1->Rows[ind]->Cells[6]->Value) / 100) * Convert::ToDouble(dataGridView1->Rows[ind]->Cells[7]->Value))) - Convert::ToDouble(dataGridView1->Rows[ind]->Cells[5]->Value));

	z = Convert::ToString(q);

	StreamReader^ a = gcnew StreamReader("q.txt");
	while (a->Peek() != -1) {
		z = a->ReadLine();
	}
	a->Close();
	q = Convert::ToInt16(z);
	q--;
	cl.fst("q.txt", Convert::ToString(q));

	dataGridView1->Rows->RemoveAt(ind);

	//for (int i = (ind+1); i < q; i++) {
	//	cl.upd(i, i-1);
	//}
}
private: System::Void DataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int ind = dataGridView2->CurrentCell->RowIndex;
	dataGridView1->Rows->Add();
	Class cl;
	//cl.del2(ind);
	String^ z = Convert::ToString(q);

	StreamReader^ a = gcnew StreamReader("q.txt");
	while (a->Peek() != -1) {
		z = a->ReadLine();
	}
	a->Close();
	q = Convert::ToInt16(z);
	q += 1;
	cl.fst("q.txt", Convert::ToString(q));

	//cl.put(q - 1, dataGridView2->Rows[ind]->Cells[0]->Value->ToString(), dataGridView2->Rows[ind]->Cells[1]->Value->ToString(), dataGridView2->Rows[ind]->Cells[2]->Value->ToString(), dataGridView2->Rows[ind]->Cells[3]->Value->ToString(), dataGridView2->Rows[ind]->Cells[4]->Value->ToString(), "", "", "";
	dataGridView1->Rows[q - 1]->Cells[0]->Value = dataGridView2->Rows[ind]->Cells[0]->Value->ToString();
	dataGridView1->Rows[q - 1]->Cells[1]->Value = dataGridView2->Rows[ind]->Cells[1]->Value->ToString();
	dataGridView1->Rows[q - 1]->Cells[2]->Value = dataGridView2->Rows[ind]->Cells[2]->Value->ToString();
	dataGridView1->Rows[q - 1]->Cells[3]->Value = dataGridView2->Rows[ind]->Cells[3]->Value->ToString();
	dataGridView1->Rows[q - 1]->Cells[4]->Value = dataGridView2->Rows[ind]->Cells[4]->Value->ToString();
	dataGridView1->Rows[q - 1]->Cells[5]->Value = "";
	dataGridView1->Rows[q - 1]->Cells[6]->Value = "";
	dataGridView1->Rows[q - 1]->Cells[7]->Value = "";

	z = Convert::ToString(q2);

	StreamReader^ x = gcnew StreamReader("q2.txt");
	while (x->Peek() != -1) {
		z = x->ReadLine();
	}
	x->Close();
	q2 = Convert::ToInt16(z);
	q2--;
	cl.fst("q2.txt", Convert::ToString(q2));

	dataGridView2->Rows->RemoveAt(ind);

	//for (int i = (ind+1); i < q; i++) {
	//	cl.upd2(i, i-1);
	//}
}
};
}