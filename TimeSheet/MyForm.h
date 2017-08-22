#pragma once
#include <time.h>
#include <string.h>
#include <iostream>

namespace TimeSheet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			docToPrint = gcnew System::Drawing::Printing::PrintDocument;
			docToPrint->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::document_PrintPage);
		}

		DateTime lunch_in1, lunch_in2, lunch_in3, lunch_in4, lunch_in5;
		DateTime lunch_out1, lunch_out2, lunch_out3, lunch_out4, lunch_out5;

		DateTime work_in1, work_in2, work_in3, work_in4, work_in5;
		DateTime work_out1, work_out2, work_out3, work_out4, work_out5;

		TimeSpan lunch1, lunch2, lunch3, lunch4, lunch5;
		TimeSpan hour, hour1, hour2, hour3, hour4, hour5;
		TimeSpan zeroComp = TimeSpan::Zero;

		double wage, totalSalary, hoursWorked;

		String^ savedLocation;
		String^ firstName;
		String^ lastName;
		bool saved = false;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
			 System::Drawing::Printing::PrintDocument^ docToPrint;


	public:
		

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox6;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox10;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox11;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox12;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox13;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox14;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox15;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox16;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox17;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox18;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox19;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox20;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;






















	private: System::ComponentModel::IContainer^  components;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(115, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"John";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"First Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(131, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Mon";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(44, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Lunch Out:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Morning In:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Lunch In:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(44, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Evening Out:";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(125, 127);
			this->maskedTextBox1->Mask = L"00:00";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->Text = L"0800";
			this->maskedTextBox1->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(125, 160);
			this->maskedTextBox2->Mask = L"00:00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox2->TabIndex = 8;
			this->maskedTextBox2->Text = L"1200";
			this->maskedTextBox2->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Location = System::Drawing::Point(125, 191);
			this->maskedTextBox3->Mask = L"00:00";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox3->TabIndex = 9;
			this->maskedTextBox3->Text = L"1230";
			this->maskedTextBox3->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Location = System::Drawing::Point(125, 225);
			this->maskedTextBox4->Mask = L"00:00";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(34, 20);
			this->maskedTextBox4->TabIndex = 10;
			this->maskedTextBox4->Text = L"1800";
			this->maskedTextBox4->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Location = System::Drawing::Point(168, 225);
			this->maskedTextBox5->Mask = L"00:00";
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(37, 20);
			this->maskedTextBox5->TabIndex = 15;
			this->maskedTextBox5->Text = L"1800";
			this->maskedTextBox5->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Location = System::Drawing::Point(168, 191);
			this->maskedTextBox6->Mask = L"00:00";
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(37, 20);
			this->maskedTextBox6->TabIndex = 14;
			this->maskedTextBox6->Text = L"1230";
			this->maskedTextBox6->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Location = System::Drawing::Point(168, 160);
			this->maskedTextBox7->Mask = L"00:00";
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(37, 20);
			this->maskedTextBox7->TabIndex = 13;
			this->maskedTextBox7->Text = L"1200";
			this->maskedTextBox7->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Location = System::Drawing::Point(168, 127);
			this->maskedTextBox8->Mask = L"00:00";
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->Size = System::Drawing::Size(37, 20);
			this->maskedTextBox8->TabIndex = 12;
			this->maskedTextBox8->Text = L"0800";
			this->maskedTextBox8->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox8->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &MyForm::maskedTextBox8_MaskInputRejected);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(174, 96);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Tues";
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Location = System::Drawing::Point(210, 225);
			this->maskedTextBox9->Mask = L"00:00";
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->Size = System::Drawing::Size(36, 20);
			this->maskedTextBox9->TabIndex = 20;
			this->maskedTextBox9->Text = L"1800";
			this->maskedTextBox9->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox10
			// 
			this->maskedTextBox10->Location = System::Drawing::Point(210, 191);
			this->maskedTextBox10->Mask = L"00:00";
			this->maskedTextBox10->Name = L"maskedTextBox10";
			this->maskedTextBox10->Size = System::Drawing::Size(36, 20);
			this->maskedTextBox10->TabIndex = 19;
			this->maskedTextBox10->Text = L"1230";
			this->maskedTextBox10->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox11
			// 
			this->maskedTextBox11->Location = System::Drawing::Point(210, 160);
			this->maskedTextBox11->Mask = L"00:00";
			this->maskedTextBox11->Name = L"maskedTextBox11";
			this->maskedTextBox11->Size = System::Drawing::Size(36, 20);
			this->maskedTextBox11->TabIndex = 18;
			this->maskedTextBox11->Text = L"1200";
			this->maskedTextBox11->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox12
			// 
			this->maskedTextBox12->Location = System::Drawing::Point(210, 127);
			this->maskedTextBox12->Mask = L"00:00";
			this->maskedTextBox12->Name = L"maskedTextBox12";
			this->maskedTextBox12->Size = System::Drawing::Size(36, 20);
			this->maskedTextBox12->TabIndex = 17;
			this->maskedTextBox12->Text = L"0800";
			this->maskedTextBox12->ValidatingType = System::DateTime::typeid;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(216, 96);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Wed";
			// 
			// maskedTextBox13
			// 
			this->maskedTextBox13->Location = System::Drawing::Point(251, 225);
			this->maskedTextBox13->Mask = L"00:00";
			this->maskedTextBox13->Name = L"maskedTextBox13";
			this->maskedTextBox13->Size = System::Drawing::Size(35, 20);
			this->maskedTextBox13->TabIndex = 25;
			this->maskedTextBox13->Text = L"1800";
			this->maskedTextBox13->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox14
			// 
			this->maskedTextBox14->Location = System::Drawing::Point(251, 191);
			this->maskedTextBox14->Mask = L"00:00";
			this->maskedTextBox14->Name = L"maskedTextBox14";
			this->maskedTextBox14->Size = System::Drawing::Size(35, 20);
			this->maskedTextBox14->TabIndex = 24;
			this->maskedTextBox14->Text = L"1230";
			this->maskedTextBox14->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox15
			// 
			this->maskedTextBox15->Location = System::Drawing::Point(251, 160);
			this->maskedTextBox15->Mask = L"00:00";
			this->maskedTextBox15->Name = L"maskedTextBox15";
			this->maskedTextBox15->Size = System::Drawing::Size(35, 20);
			this->maskedTextBox15->TabIndex = 23;
			this->maskedTextBox15->Text = L"1200";
			this->maskedTextBox15->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox16
			// 
			this->maskedTextBox16->Location = System::Drawing::Point(251, 127);
			this->maskedTextBox16->Mask = L"00:00";
			this->maskedTextBox16->Name = L"maskedTextBox16";
			this->maskedTextBox16->Size = System::Drawing::Size(35, 20);
			this->maskedTextBox16->TabIndex = 22;
			this->maskedTextBox16->Text = L"0800";
			this->maskedTextBox16->ValidatingType = System::DateTime::typeid;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(257, 96);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Thur";
			// 
			// maskedTextBox17
			// 
			this->maskedTextBox17->Location = System::Drawing::Point(290, 225);
			this->maskedTextBox17->Mask = L"00:00";
			this->maskedTextBox17->Name = L"maskedTextBox17";
			this->maskedTextBox17->Size = System::Drawing::Size(32, 20);
			this->maskedTextBox17->TabIndex = 30;
			this->maskedTextBox17->Text = L"1800";
			this->maskedTextBox17->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox18
			// 
			this->maskedTextBox18->Location = System::Drawing::Point(290, 191);
			this->maskedTextBox18->Mask = L"00:00";
			this->maskedTextBox18->Name = L"maskedTextBox18";
			this->maskedTextBox18->Size = System::Drawing::Size(32, 20);
			this->maskedTextBox18->TabIndex = 29;
			this->maskedTextBox18->Text = L"1230";
			this->maskedTextBox18->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox19
			// 
			this->maskedTextBox19->Location = System::Drawing::Point(290, 160);
			this->maskedTextBox19->Mask = L"00:00";
			this->maskedTextBox19->Name = L"maskedTextBox19";
			this->maskedTextBox19->Size = System::Drawing::Size(32, 20);
			this->maskedTextBox19->TabIndex = 28;
			this->maskedTextBox19->Text = L"1200";
			this->maskedTextBox19->ValidatingType = System::DateTime::typeid;
			// 
			// maskedTextBox20
			// 
			this->maskedTextBox20->Location = System::Drawing::Point(290, 127);
			this->maskedTextBox20->Mask = L"00:00";
			this->maskedTextBox20->Name = L"maskedTextBox20";
			this->maskedTextBox20->Size = System::Drawing::Size(32, 20);
			this->maskedTextBox20->TabIndex = 27;
			this->maskedTextBox20->Text = L"0800";
			this->maskedTextBox20->ValidatingType = System::DateTime::typeid;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(296, 96);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Fri";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(44, 297);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(65, 13);
			this->label11->TabIndex = 31;
			this->label11->Text = L"Total Hours:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(70, 322);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(48, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Wage: $";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(43, 344);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(75, 13);
			this->label13->TabIndex = 33;
			this->label13->Text = L"Total Salary: $";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(115, 319);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 35;
			this->textBox3->Text = L"25.25";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(215, 322);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(21, 13);
			this->label14->TabIndex = 37;
			this->label14->Text = L"/hr";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(247, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(15, 396);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 13);
			this->label15->TabIndex = 39;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(115, 297);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 40;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(115, 344);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 13);
			this->label17->TabIndex = 41;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(38, 44);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(61, 13);
			this->label18->TabIndex = 43;
			this->label18->Text = L"Last Name:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(104, 41);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(115, 20);
			this->textBox2->TabIndex = 42;
			this->textBox2->Text = L"Smith";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Location = System::Drawing::Point(393, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 44;
			this->button2->Text = L"New";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(393, 45);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Open";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(393, 74);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 46;
			this->button4->Text = L"Save";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(393, 103);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 47;
			this->button5->Text = L"Save As";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(393, 132);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 48;
			this->button6->Text = L"Print";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(393, 261);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 49;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(509, 432);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->maskedTextBox17);
			this->Controls->Add(this->maskedTextBox18);
			this->Controls->Add(this->maskedTextBox19);
			this->Controls->Add(this->maskedTextBox20);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->maskedTextBox13);
			this->Controls->Add(this->maskedTextBox14);
			this->Controls->Add(this->maskedTextBox15);
			this->Controls->Add(this->maskedTextBox16);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBox9);
			this->Controls->Add(this->maskedTextBox10);
			this->Controls->Add(this->maskedTextBox11);
			this->Controls->Add(this->maskedTextBox12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->maskedTextBox6);
			this->Controls->Add(this->maskedTextBox7);
			this->Controls->Add(this->maskedTextBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Timesheet Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
};
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	

};
private: System::Void maskedTextBox8_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {

	this->label15->Text = "Error: Input is Incorrect";
};
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		

		//Reset label
		this->label15->Text = ""; 
		
		try {
			//Get the name of the employee.
			firstName = this->textBox1->Text;
			lastName = this->textBox2->Text;

			if (firstName == "" || lastName == "") {
				throw gcnew Exception("Please Enter a Name!");
			}

			//Data Input
			lunch_in1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox3->Text);
			lunch_in2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox6->Text);
			lunch_in3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox10->Text);
			lunch_in4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox14->Text);
			lunch_in5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox18->Text);

			lunch_out1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox2->Text);
			lunch_out2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox7->Text);
			lunch_out3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox11->Text);
			lunch_out4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox15->Text);
			lunch_out5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox19->Text);

			work_in1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox1->Text);
			work_in2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox8->Text);
			work_in3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox12->Text);
			work_in4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox16->Text);
			work_in5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox20->Text);

			work_out1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox4->Text);
			work_out2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox5->Text);
			work_out3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox9->Text);
			work_out4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox13->Text);
			work_out5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox17->Text);

			wage = Convert::ToDouble(this->textBox3->Text);

			if (wage <= 0) {
				throw gcnew Exception("Wage must be positive!");
			}
			
			//Calculate the hours to be subtracted away for lunch breaks. 
			lunch1 = lunch_out1.Subtract(lunch_in1);
			lunch2 = lunch_out2.Subtract(lunch_in2);
			lunch3 = lunch_out3.Subtract(lunch_in3);
			lunch4 = lunch_out4.Subtract(lunch_in4);
			lunch5 = lunch_out5.Subtract(lunch_in5);

			//If lunch break is less than or equal to zero, cannot go back in time. Throw an exception. 
			if (lunch1 >= zeroComp || lunch2 >= zeroComp || lunch3 >= zeroComp || lunch4 >= zeroComp || lunch5 >= zeroComp) {
				throw gcnew Exception("Lunch break must be a positive time!");
			}

			//Calculate the hours worked in the day.
			hour1 = work_out1.Subtract(work_in1);
			hour2 = work_out2.Subtract(work_in2);
			hour3 = work_out3.Subtract(work_in3);
			hour4 = work_out4.Subtract(work_in4);
			hour5 = work_out5.Subtract(work_in5);

			if (hour1 <= zeroComp || hour2 <= zeroComp || hour3 <= zeroComp || hour4 <= zeroComp || hour5 <= zeroComp) {
				throw gcnew Exception("Hours must be a positive time!");
			}

			//Adds up all of the hours and "subtract" away the negative hours from lunch. 
			hour = hour1.Add(hour2).Add(hour3).Add(hour4).Add(hour5).Add(lunch1).Add(lunch2).Add(lunch3).Add(lunch4).Add(lunch5);

			hoursWorked = hour.TotalHours;
			label16->Text = hoursWorked + "hrs";

			//Calculate the salary as the hours worked multiply by the wages per hour. 
			totalSalary = hoursWorked * wage;
			label17->Text = totalSalary + "";

			if (totalSalary <= 0) {
				throw gcnew Exception("Salary must be positive!");
			}
			
		}
		catch (Exception^ ex) {
			this->label15->Text = ex->Message;
		}
		
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	//Close
	this->Close();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//New
	try {
		this->textBox1->Text = "";
		this->textBox2->Text = "";

		this->maskedTextBox3->Text = "";
		this->maskedTextBox6->Text = "";
		this->maskedTextBox10->Text = "";
		this->maskedTextBox14->Text = "";
		this->maskedTextBox18->Text = "";

		this->maskedTextBox2->Text = "";
		this->maskedTextBox7->Text = "";
		this->maskedTextBox11->Text = "";
		this->maskedTextBox15->Text = "";
		this->maskedTextBox19->Text = "";

		this->maskedTextBox1->Text = "";
		this->maskedTextBox8->Text = "";
		this->maskedTextBox12->Text = "";
		this->maskedTextBox16->Text = "";
		this->maskedTextBox20->Text = "";

		this->maskedTextBox4->Text = "";
		this->maskedTextBox5->Text = "";
		this->maskedTextBox9->Text = "";
		this->maskedTextBox13->Text = "";
		this->maskedTextBox17->Text = "";

		this->textBox3->Text = "";
		label17->Text = "";
		label16->Text = "";

		lunch_in1 = DateTime();
		lunch_in2 = DateTime();
		lunch_in3 = DateTime();
		lunch_in4 = DateTime();
		lunch_in5 = DateTime();
		lunch_out1 = DateTime();
		lunch_out2 = DateTime();
		lunch_out3 = DateTime();
		lunch_out4 = DateTime();
		lunch_out5 = DateTime();

		work_in1 = DateTime();
		work_in2 = DateTime();
		work_in3 = DateTime();
		work_in4 = DateTime();
		work_in5 = DateTime();
		work_out1 = DateTime();
		work_out2 = DateTime();
		work_out3 = DateTime();
		work_out4 = DateTime();
		work_out5 = DateTime();

		wage = 0.0, totalSalary = 0.0; hoursWorked = 0.0;

		savedLocation = "";
		firstName = "";
		lastName = "";
	}
	catch (Exception^ ex) {
		this->label15->Text = ex->Message;
	}

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//Open
	Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			System::String^ inputText;
			try {
				StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
				inputText = sr->ReadLine();
				this->textBox1->Text = inputText;
				inputText = sr->ReadLine();
				this->textBox2->Text = inputText;
				inputText = sr->ReadLine();
				this->textBox3->Text = inputText;

				inputText = sr->ReadLine();
				this->maskedTextBox1->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox3->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox2->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox4->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox8->Text = inputText;

				inputText = sr->ReadLine();
				this->maskedTextBox6->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox7->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox5->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox12->Text = inputText;

				inputText = sr->ReadLine();
				this->maskedTextBox10->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox11->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox9->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox16->Text = inputText;

				inputText = sr->ReadLine();
				this->maskedTextBox14->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox15->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox13->Text = inputText;

				inputText = sr->ReadLine();
				this->maskedTextBox20->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox18->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox19->Text = inputText;
				inputText = sr->ReadLine();
				this->maskedTextBox17->Text = inputText;

				load_data();
				saved = true;
				savedLocation = openFileDialog1->FileName;
				sr->Close();
			}
			catch (Exception^ ex)
			{
				this->label15->Text = ex->Message;
			}
			__finally
			{
				myStream->Close();
			}
		}
	}

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//Save

	if (saved == true) {
			try {
				load_data();

				StreamWriter^ sw = gcnew StreamWriter(savedLocation);

				sw->WriteLine(firstName);
				sw->WriteLine(lastName);
				sw->WriteLine(wage);

				sw->WriteLine(work_in1.TimeOfDay);
				sw->WriteLine(lunch_in1.TimeOfDay);
				sw->WriteLine(lunch_out1.TimeOfDay);
				sw->WriteLine(work_out1.TimeOfDay);

				sw->WriteLine(work_in2.TimeOfDay);
				sw->WriteLine(lunch_in2.TimeOfDay);
				sw->WriteLine(lunch_out2.TimeOfDay);
				sw->WriteLine(work_out2.TimeOfDay);

				sw->WriteLine(work_in3.TimeOfDay);
				sw->WriteLine(lunch_in3.TimeOfDay);
				sw->WriteLine(lunch_out3.TimeOfDay);
				sw->WriteLine(work_out3.TimeOfDay);

				sw->WriteLine(work_in4.TimeOfDay);
				sw->WriteLine(lunch_in4.TimeOfDay);
				sw->WriteLine(lunch_out4.TimeOfDay);
				sw->WriteLine(work_out4.TimeOfDay);

				sw->WriteLine(work_in5.TimeOfDay);
				sw->WriteLine(lunch_in5.TimeOfDay);
				sw->WriteLine(lunch_out5.TimeOfDay);
				sw->WriteLine(work_out5.TimeOfDay);

				sw->Close();

			}
			catch (Exception^ ex)
			{
				this->label15->Text = ex->Message;
			}		
	}
	else {
		Stream^ myStream;
		saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;

			
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
			{
				try {

					load_data();

					StreamWriter^ sw = gcnew StreamWriter(myStream);

					sw->WriteLine(firstName);
					sw->WriteLine(lastName);
					sw->WriteLine(wage);

					sw->WriteLine(work_in1.TimeOfDay);
					sw->WriteLine(lunch_in1.TimeOfDay);
					sw->WriteLine(lunch_out1.TimeOfDay);
					sw->WriteLine(work_out1.TimeOfDay);

					sw->WriteLine(work_in2.TimeOfDay);
					sw->WriteLine(lunch_in2.TimeOfDay);
					sw->WriteLine(lunch_out2.TimeOfDay);
					sw->WriteLine(work_out2.TimeOfDay);

					sw->WriteLine(work_in3.TimeOfDay);
					sw->WriteLine(lunch_in3.TimeOfDay);
					sw->WriteLine(lunch_out3.TimeOfDay);
					sw->WriteLine(work_out3.TimeOfDay);

					sw->WriteLine(work_in4.TimeOfDay);
					sw->WriteLine(lunch_in4.TimeOfDay);
					sw->WriteLine(lunch_out4.TimeOfDay);
					sw->WriteLine(work_out4.TimeOfDay);

					sw->WriteLine(work_in5.TimeOfDay);
					sw->WriteLine(lunch_in5.TimeOfDay);
					sw->WriteLine(lunch_out5.TimeOfDay);
					sw->WriteLine(work_out5.TimeOfDay);

					sw->Close();

				}
				catch (Exception^ ex)
				{
					this->label15->Text = ex->Message;
				}
				__finally
				{
					savedLocation = saveFileDialog1->FileName;
					myStream->Close();
					saved = true;
				}
			}
		}

	}
	

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	//Save As
	Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{
			try {

				load_data();

				StreamWriter^ sw = gcnew StreamWriter(myStream);

				sw->WriteLine(firstName);
				sw->WriteLine(lastName);
				sw->WriteLine(wage);

				sw->WriteLine(work_in1);
				sw->WriteLine(lunch_in1);
				sw->WriteLine(lunch_out1);
				sw->WriteLine(work_out1);

				sw->WriteLine(work_in2);
				sw->WriteLine(lunch_in2);
				sw->WriteLine(lunch_out2);
				sw->WriteLine(work_out2);

				sw->WriteLine(work_in3);
				sw->WriteLine(lunch_in3);
				sw->WriteLine(lunch_out3);
				sw->WriteLine(work_out3);

				sw->WriteLine(work_in4);
				sw->WriteLine(lunch_in4);
				sw->WriteLine(lunch_out4);
				sw->WriteLine(work_out4);

				sw->WriteLine(work_in5);
				sw->WriteLine(lunch_in5);
				sw->WriteLine(lunch_out5);
				sw->WriteLine(work_out5);

				sw->Close();
				
			}
			catch (Exception^ ex)
			{
				this->label15->Text = ex->Message;
			}
			__finally
			{
				savedLocation = saveFileDialog1->FileName;
				myStream->Close();
				saved = true;
			}
		}
	}
	
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//Print
	load_data();

	printDialog1->AllowSomePages = true;
	printDialog1->ShowHelp = true;
	printDialog1->Document = docToPrint;
	if (docToPrint == nullptr)
		System::Windows::Forms::MessageBox::Show("null");
	if (printDialog1 == nullptr)
		System::Windows::Forms::MessageBox::Show("pnull");
	System::Windows::Forms::DialogResult result = printDialog1->ShowDialog();
	System::Windows::Forms::MessageBox::Show(result.ToString());

	if (result == System::Windows::Forms::DialogResult::OK)
	{
		docToPrint->Print();
	}
}
	 void document_PrintPage(Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
		 {
			 //Print Method

			 try {
				 load_data();

				 String^ text = "Employee: " + firstName + " " + lastName + "\n" + "\n" +
					 "                        Mon        Tues      Wed       Thurs       Fri" + "\n" +
					 "Morning in:   " + work_in1.TimeOfDay + " " + work_in2.TimeOfDay + " " + work_in3.TimeOfDay + " " + work_in4.TimeOfDay + " " + work_in5.TimeOfDay + "\n" +
					 "Lunch Out:   " + lunch_out1.TimeOfDay + " " + lunch_out2.TimeOfDay + " " + lunch_out3.TimeOfDay + " " + lunch_out4.TimeOfDay + " " + lunch_out5.TimeOfDay + "\n" +
					 "Lunch In:      " + lunch_in1.TimeOfDay + " " + lunch_in2.TimeOfDay + " " + lunch_in3.TimeOfDay + " " + lunch_in4.TimeOfDay + " " + lunch_in5.TimeOfDay + "\n" +
					 "Evening Out: " + work_out1.TimeOfDay + " " + work_out2.TimeOfDay + " " + work_out3.TimeOfDay + " " + work_out4.TimeOfDay + " " + work_out5.TimeOfDay + "\n\n\n" +
					 "-------------------------------------------------------------------------------------------------------------------------------------------" +
					 "Total Hours: " + hoursWorked + "hrs\n" +
					 "Hourly Wage:  " + wage + "/hr\n" +
					 "Total Salary:  " + "$" + totalSalary + "\n";

				 System::Drawing::Font^ printFont = gcnew System::Drawing::Font("Arial", 15, System::Drawing::FontStyle::Regular);
				 e->Graphics->DrawString(text, printFont, System::Drawing::Brushes::Black, 10, 10);
			 }
			 catch (Exception^ ex) {
				 this->label15->Text = ex->Message;
			 }
		 }
	 void load_data() {
		 this->label15->Text = "";

		 try {
			 //Get the name of the employee.
			 firstName = this->textBox1->Text;
			 lastName = this->textBox2->Text;

			 if (firstName == "" || lastName == "") {
				 throw gcnew Exception("Please Enter a Name!");
			 }

			 //Data Input
			 lunch_in1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox3->Text);
			 lunch_in2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox6->Text);
			 lunch_in3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox10->Text);
			 lunch_in4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox14->Text);
			 lunch_in5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox18->Text);

			 lunch_out1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox2->Text);
			 lunch_out2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox7->Text);
			 lunch_out3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox11->Text);
			 lunch_out4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox15->Text);
			 lunch_out5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox19->Text);

			 work_in1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox1->Text);
			 work_in2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox8->Text);
			 work_in3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox12->Text);
			 work_in4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox16->Text);
			 work_in5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox20->Text);

			 work_out1 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox4->Text);
			 work_out2 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox5->Text);
			 work_out3 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox9->Text);
			 work_out4 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox13->Text);
			 work_out5 = Convert::ToDateTime("2015-05-01T" + this->maskedTextBox17->Text);

			 wage = Convert::ToDouble(this->textBox3->Text);

			 if (wage <= 0) {
				 throw gcnew Exception("Wage must be positive!");
			 }

			 //Calculate the hours to be subtracted away for lunch breaks. 
			 lunch1 = lunch_out1.Subtract(lunch_in1);
			 lunch2 = lunch_out2.Subtract(lunch_in2);
			 lunch3 = lunch_out3.Subtract(lunch_in3);
			 lunch4 = lunch_out4.Subtract(lunch_in4);
			 lunch5 = lunch_out5.Subtract(lunch_in5);

			 //If lunch break is less than or equal to zero, cannot go back in time. Throw an exception. 
			 if (lunch1 >= zeroComp || lunch2 >= zeroComp || lunch3 >= zeroComp || lunch4 >= zeroComp || lunch5 >= zeroComp) {
				 throw gcnew Exception("Lunch break must be a positive time!");
			 }

			 //Calculate the hours worked in the day.
			 hour1 = work_out1.Subtract(work_in1);
			 hour2 = work_out2.Subtract(work_in2);
			 hour3 = work_out3.Subtract(work_in3);
			 hour4 = work_out4.Subtract(work_in4);
			 hour5 = work_out5.Subtract(work_in5);

			 if (hour1 <= zeroComp || hour2 <= zeroComp || hour3 <= zeroComp || hour4 <= zeroComp || hour5 <= zeroComp) {
				 throw gcnew Exception("Hours must be a positive time!");
			 }

			 //Adds up all of the hours and "subtract" away the negative hours from lunch. 
			 hour = hour1.Add(hour2).Add(hour3).Add(hour4).Add(hour5).Add(lunch1).Add(lunch2).Add(lunch3).Add(lunch4).Add(lunch5);

			 hoursWorked = hour.TotalHours;
			 label16->Text = hoursWorked + "hrs";

			 //Calculate the salary as the hours worked multiply by the wages per hour. 
			 totalSalary = hoursWorked * wage;
			 label17->Text = totalSalary + "";

			 if (totalSalary <= 0) {
				 throw gcnew Exception("Salary must be positive!");
			 }

		 }
		 catch (Exception^ ex) {
			 this->label15->Text = ex->Message;
		 }
	 }
};
}
