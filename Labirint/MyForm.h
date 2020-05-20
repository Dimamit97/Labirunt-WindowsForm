#pragma once
#include"MyForm2.h"
#include"MyForm3.h"
namespace Labirint {

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
	public:
		MyForm(void)
		{
			InitializeComponent();
			Game_Over();
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
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::Panel^  panel13;
	private: System::Windows::Forms::Panel^  panel14;
	private: System::Windows::Forms::Panel^  panel15;
	private: System::Windows::Forms::Panel^  panel16;
	private: System::Windows::Forms::Panel^  panel17;

	private: System::Windows::Forms::Panel^  panel19;
	private: System::Windows::Forms::Panel^  panel20;
	private: System::Windows::Forms::Panel^  panel21;
	private: System::Windows::Forms::Panel^  panel22;
	private: System::Windows::Forms::Panel^  panel23;
	private: System::Windows::Forms::Panel^  panel24;
	private: System::Windows::Forms::Panel^  panel25;
	private: System::Windows::Forms::Panel^  panel26;
	private: System::Windows::Forms::Panel^  panel27;
	private: System::Windows::Forms::Panel^  panel28;
	private: System::Windows::Forms::Panel^  panel29;
	private: System::Windows::Forms::Panel^  panel30;
	private: System::Windows::Forms::Panel^  panel31;
	private: System::Windows::Forms::Panel^  panel32;
	private: System::Windows::Forms::Panel^  panel33;
	private: System::Windows::Forms::Panel^  panel34;
	private: System::Windows::Forms::Panel^  panel35;
	private: System::Windows::Forms::Panel^  panel36;
	private: System::Windows::Forms::Panel^  panel37;
	private: System::Windows::Forms::Panel^  panel18;
	private: System::Windows::Forms::Panel^  panel38;
	private: System::Windows::Forms::Panel^  panel39;
	private: System::Windows::Forms::Panel^  panel40;
	private: System::Windows::Forms::Panel^  panel41;
	private: System::Windows::Forms::Panel^  panel42;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  âèéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ïðîÃðóToolStripMenuItem;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ToolStripMenuItem^  ðåêîðäèToolStripMenuItem;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->panel37 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel38 = (gcnew System::Windows::Forms::Panel());
			this->panel39 = (gcnew System::Windows::Forms::Panel());
			this->panel40 = (gcnew System::Windows::Forms::Panel());
			this->panel41 = (gcnew System::Windows::Forms::Panel());
			this->panel42 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->âèéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ðåêîðäèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïðîÃðóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->Location = System::Drawing::Point(1, 398);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(683, 10);
			this->panel1->TabIndex = 0;
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Red;
			this->panel2->Location = System::Drawing::Point(88, 22);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(596, 10);
			this->panel2->TabIndex = 1;
			this->panel2->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Red;
			this->panel3->Cursor = System::Windows::Forms::Cursors::Cross;
			this->panel3->Location = System::Drawing::Point(0, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(8, 379);
			this->panel3->TabIndex = 2;
			this->panel3->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Red;
			this->panel4->Location = System::Drawing::Point(676, 26);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(8, 379);
			this->panel4->TabIndex = 3;
			this->panel4->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBox1->Location = System::Drawing::Point(8, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(73, 43);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LimeGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 22);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Còàðò";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::DarkBlue;
			this->pictureBox2->Location = System::Drawing::Point(604, 356);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(73, 43);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseFinish);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ravie", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Cornsilk;
			this->label2->Location = System::Drawing::Point(614, 367);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Ô³í³ø";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Red;
			this->panel5->Location = System::Drawing::Point(88, 29);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(8, 218);
			this->panel5->TabIndex = 8;
			this->panel5->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Red;
			this->panel6->Location = System::Drawing::Point(38, 187);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(8, 218);
			this->panel6->TabIndex = 9;
			this->panel6->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Red;
			this->panel7->Location = System::Drawing::Point(381, 190);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(8, 218);
			this->panel7->TabIndex = 9;
			this->panel7->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Red;
			this->panel8->Location = System::Drawing::Point(604, 61);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(8, 258);
			this->panel8->TabIndex = 9;
			this->panel8->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Red;
			this->panel9->Location = System::Drawing::Point(556, 187);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(8, 218);
			this->panel9->TabIndex = 9;
			this->panel9->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Red;
			this->panel10->Location = System::Drawing::Point(248, 28);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(8, 218);
			this->panel10->TabIndex = 9;
			this->panel10->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Black;
			this->panel11->Location = System::Drawing::Point(113, 333);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(8, 66);
			this->panel11->TabIndex = 9;
			this->panel11->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Red;
			this->panel12->Location = System::Drawing::Point(38, 104);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(55, 10);
			this->panel12->TabIndex = 1;
			this->panel12->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Red;
			this->panel13->Location = System::Drawing::Point(75, 237);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(55, 10);
			this->panel13->TabIndex = 2;
			this->panel13->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Red;
			this->panel14->Location = System::Drawing::Point(123, 120);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(133, 10);
			this->panel14->TabIndex = 2;
			this->panel14->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Red;
			this->panel15->Location = System::Drawing::Point(454, 190);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(55, 10);
			this->panel15->TabIndex = 2;
			this->panel15->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Red;
			this->panel16->Location = System::Drawing::Point(454, 82);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(173, 10);
			this->panel16->TabIndex = 2;
			this->panel16->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Black;
			this->panel17->Location = System::Drawing::Point(174, 360);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(31, 10);
			this->panel17->TabIndex = 2;
			this->panel17->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::Red;
			this->panel19->Location = System::Drawing::Point(255, 73);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(134, 10);
			this->panel19->TabIndex = 3;
			this->panel19->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Red;
			this->panel20->Location = System::Drawing::Point(387, 357);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(82, 10);
			this->panel20->TabIndex = 4;
			this->panel20->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::Red;
			this->panel21->Location = System::Drawing::Point(454, 275);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(55, 10);
			this->panel21->TabIndex = 4;
			this->panel21->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::Black;
			this->panel22->Location = System::Drawing::Point(302, 333);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(8, 65);
			this->panel22->TabIndex = 10;
			this->panel22->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::Red;
			this->panel23->Location = System::Drawing::Point(501, 198);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(8, 82);
			this->panel23->TabIndex = 11;
			this->panel23->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::Red;
			this->panel24->Location = System::Drawing::Point(418, 30);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(8, 218);
			this->panel24->TabIndex = 10;
			this->panel24->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Red;
			this->panel25->Location = System::Drawing::Point(292, 120);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(272, 10);
			this->panel25->TabIndex = 3;
			this->panel25->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::Black;
			this->panel26->Location = System::Drawing::Point(113, 333);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(39, 10);
			this->panel26->TabIndex = 3;
			this->panel26->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::Black;
			this->panel27->Location = System::Drawing::Point(113, 389);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(39, 10);
			this->panel27->TabIndex = 4;
			this->panel27->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::Black;
			this->panel28->Location = System::Drawing::Point(220, 333);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(36, 10);
			this->panel28->TabIndex = 3;
			this->panel28->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::Black;
			this->panel29->Location = System::Drawing::Point(220, 340);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(8, 29);
			this->panel29->TabIndex = 10;
			this->panel29->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::Black;
			this->panel30->Location = System::Drawing::Point(220, 359);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(36, 10);
			this->panel30->TabIndex = 4;
			this->panel30->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::Black;
			this->panel31->Location = System::Drawing::Point(248, 364);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(8, 35);
			this->panel31->TabIndex = 11;
			this->panel31->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::Black;
			this->panel32->Location = System::Drawing::Point(217, 389);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(36, 10);
			this->panel32->TabIndex = 3;
			this->panel32->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::Black;
			this->panel33->Location = System::Drawing::Point(272, 333);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(8, 29);
			this->panel33->TabIndex = 11;
			this->panel33->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::Black;
			this->panel34->Location = System::Drawing::Point(272, 360);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(31, 10);
			this->panel34->TabIndex = 3;
			this->panel34->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::Red;
			this->panel35->Location = System::Drawing::Point(75, 280);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(8, 125);
			this->panel35->TabIndex = 10;
			this->panel35->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::Red;
			this->panel36->Location = System::Drawing::Point(78, 299);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(92, 10);
			this->panel36->TabIndex = 3;
			this->panel36->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel37
			// 
			this->panel37->BackColor = System::Drawing::Color::Red;
			this->panel37->Location = System::Drawing::Point(217, 299);
			this->panel37->Name = L"panel37";
			this->panel37->Size = System::Drawing::Size(169, 10);
			this->panel37->TabIndex = 4;
			this->panel37->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Red;
			this->panel18->Location = System::Drawing::Point(168, 237);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(112, 10);
			this->panel18->TabIndex = 3;
			this->panel18->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel38
			// 
			this->panel38->BackColor = System::Drawing::Color::Red;
			this->panel38->Location = System::Drawing::Point(185, 61);
			this->panel38->Name = L"panel38";
			this->panel38->Size = System::Drawing::Size(8, 66);
			this->panel38->TabIndex = 10;
			this->panel38->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel39
			// 
			this->panel39->BackColor = System::Drawing::Color::Red;
			this->panel39->Location = System::Drawing::Point(501, 323);
			this->panel39->Name = L"panel39";
			this->panel39->Size = System::Drawing::Size(8, 82);
			this->panel39->TabIndex = 12;
			this->panel39->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel40
			// 
			this->panel40->BackColor = System::Drawing::Color::Red;
			this->panel40->Location = System::Drawing::Point(642, 187);
			this->panel40->Name = L"panel40";
			this->panel40->Size = System::Drawing::Size(39, 10);
			this->panel40->TabIndex = 5;
			this->panel40->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel41
			// 
			this->panel41->BackColor = System::Drawing::Color::Red;
			this->panel41->Location = System::Drawing::Point(610, 236);
			this->panel41->Name = L"panel41";
			this->panel41->Size = System::Drawing::Size(39, 10);
			this->panel41->TabIndex = 6;
			this->panel41->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// panel42
			// 
			this->panel42->BackColor = System::Drawing::Color::Red;
			this->panel42->Location = System::Drawing::Point(314, 160);
			this->panel42->Name = L"panel42";
			this->panel42->Size = System::Drawing::Size(40, 86);
			this->panel42->TabIndex = 12;
			this->panel42->MouseEnter += gcnew System::EventHandler(this, &MyForm::MouseEnter);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Gold;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(16, 323);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(10, 11);
			this->pictureBox3->TabIndex = 13;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Gold;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(272, 42);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(10, 11);
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Gold;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(639, 53);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(10, 11);
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Gold;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(395, 378);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(10, 11);
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Gold;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(475, 219);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(10, 11);
			this->pictureBox7->TabIndex = 17;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Gold;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(217, 93);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(10, 11);
			this->pictureBox8->TabIndex = 18;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Gold;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(127, 364);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(10, 11);
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Gold;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(360, 219);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(10, 11);
			this->pictureBox10->TabIndex = 20;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Gold;
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(529, 367);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(10, 11);
			this->pictureBox11->TabIndex = 21;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Gold;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(618, 252);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(10, 11);
			this->pictureBox12->TabIndex = 22;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MouseEmblem);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 411);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 24);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Âè ç³áðàëè 0 ç 10 åìáëåì!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(244, 411);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 19);
			this->label4->TabIndex = 24;
			this->label4->Text = L"×àñ:";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Crimson;
			this->label6->Location = System::Drawing::Point(4, 435);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(598, 19);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Äëÿ ïåðåìîãè çáåð³òü óñ³ åìáëåìè ëüîäó òà çàâåä³òü êóðñîð íà ô³í³ø!";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->âèéòèToolStripMenuItem,
					this->ðåêîðäèToolStripMenuItem, this->ïðîÃðóToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(684, 24);
			this->menuStrip1->TabIndex = 27;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// âèéòèToolStripMenuItem
			// 
			this->âèéòèToolStripMenuItem->Name = L"âèéòèToolStripMenuItem";
			this->âèéòèToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->âèéòèToolStripMenuItem->Text = L"Âèéòè";
			this->âèéòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèéòèToolStripMenuItem_Click);
			// 
			// ðåêîðäèToolStripMenuItem
			// 
			this->ðåêîðäèToolStripMenuItem->Checked = true;
			this->ðåêîðäèToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ðåêîðäèToolStripMenuItem->Name = L"ðåêîðäèToolStripMenuItem";
			this->ðåêîðäèToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->ðåêîðäèToolStripMenuItem->Text = L"Ðåêîðäè";
			this->ðåêîðäèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ðåêîðäèToolStripMenuItem_Click);
			// 
			// ïðîÃðóToolStripMenuItem
			// 
			this->ïðîÃðóToolStripMenuItem->Name = L"ïðîÃðóToolStripMenuItem";
			this->ïðîÃðóToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->ïðîÃðóToolStripMenuItem->Text = L"Ïðî ãðó!";
			this->ïðîÃðóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïðîÃðóToolStripMenuItem_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(288, 411);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 19);
			this->label5->TabIndex = 28;
			this->label5->Text = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 462);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->panel20);
			this->Controls->Add(this->panel42);
			this->Controls->Add(this->panel41);
			this->Controls->Add(this->panel40);
			this->Controls->Add(this->panel39);
			this->Controls->Add(this->panel38);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->panel37);
			this->Controls->Add(this->panel36);
			this->Controls->Add(this->panel35);
			this->Controls->Add(this->panel34);
			this->Controls->Add(this->panel33);
			this->Controls->Add(this->panel32);
			this->Controls->Add(this->panel31);
			this->Controls->Add(this->panel30);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->panel28);
			this->Controls->Add(this->panel27);
			this->Controls->Add(this->panel26);
			this->Controls->Add(this->panel25);
			this->Controls->Add(this->panel24);
			this->Controls->Add(this->panel23);
			this->Controls->Add(this->panel22);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->panel19);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Ëàá³ðèíò ÄÌ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int count = 10;
		int count_emblem = 0;
		double Time;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		if (System::IO::File::Exists("Record.dibil"))
		{
			return;
		}
		else
		{
			System::IO::StreamWriter^ sw4 = gcnew System::IO::StreamWriter("Record.dibil");
			sw4->WriteLine("9999");
			sw4->Close();
			
		}


		if (System::IO::File::Exists("Name.dibil"))
		{
			return;
		}
		else
		{
			System::IO::StreamWriter^ sw4 = gcnew System::IO::StreamWriter("Name.dibil");
			sw4->WriteLine("Ãðó ùå íå ïðîéäåíî");
			sw4->Close();
		}


	}

			 private: void Game_Over()
			 {
				 Point point = pictureBox1->Location;
				 point.Offset(pictureBox1->Width / 2, pictureBox1->Height / 2);
				 Cursor->Position = PointToScreen(point);
				 pictureBox3->Visible = true;
				 pictureBox4->Visible = true;
				 pictureBox5->Visible = true;
				 pictureBox6->Visible = true;
				 pictureBox7->Visible = true;
				 pictureBox8->Visible = true;
				 pictureBox9->Visible = true;
				 pictureBox10->Visible = true;
				 pictureBox11->Visible = true;
				 pictureBox12->Visible = true;
				 count_emblem = 0;
				 show_emblem();
				 label5->Text = "0.0";
				 timer1->Interval = 10;
				 timer1->Enabled = true;
				 Time = 0.0;
			 }

			private: void Game_Win()
			{
				timer1->Enabled = false;
				System::IO::StreamReader^ sw2 = gcnew System::IO::StreamReader("Record.dibil");
				String^ s = sw2->ReadLine();
				double rec = Convert::ToDouble(s);
				sw2->Close();
				
				MessageBox::Show("Ðåêîðä: " + rec + " ñåê.\n\nÂè ïðîéøëè ãðó çà: "+ label5->Text +" ñåêóíä!");
				if(rec > Time)
				{ 
					MyForm3^ f3 = gcnew MyForm3();
					f3->ShowDialog();
					
				System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("Record.dibil");
				sw->WriteLine(label5->Text);
				sw->Close();
				}
				Game_Over();
			}
private: System::Void MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	Game_Over();
}
		  


private: System::Void MouseFinish(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	if (count_emblem >= count)
	{
		Game_Win();
	}
}
private: System::Void MouseEmblem(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	System::Windows::Forms::PictureBox^ b = (PictureBox^)sender;
	b->Visible = false;
	count_emblem++;
	show_emblem();
}
		 private:void show_emblem()
		 {
			 label3->Text = "Âè ç³áðàëè " + count_emblem.ToString() + " ç " + count.ToString()+ " åìáëåì!";
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	Time += 0.001 * timer1->Interval;
	label5->Text = String::Format("{0:F2}", Time);
}
private: System::Void âèéòèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void ïðîÃðóToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;
	MessageBox::Show("\t\t\t ÏÐÀÂÈËÀ:\n Ùîá ïåðåìîãòè, çáåð³òü óñ³ åìáëåìè ëüîäó(êóðñîðîì) íå çàõîäÿ÷è íà ÷åðâîí³ ³ ÷îðí³ ïîëÿ, òà çàâåä³òü êóðñîð ìèøêè íà ô³í³ø!\n\n \t\t\t\t\tÀâòîð: Ä³ìà (ZK)!)");
	Game_Over();
}
private: System::Void panel24_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ðåêîðäèToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = false;

	MyForm2^ f = gcnew MyForm2();
	f->ShowDialog();
	Game_Over();
}
};
}