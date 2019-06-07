
#include "MyClass.h"


namespace Project4 {

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
			pq = gcnew Leftt();
			qp = gcnew Rightt();
			ball = gcnew Ball();
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;







	private:

	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(800, 600);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-1, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(800, 600);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(227, 174);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(336, 78);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click_1);
			this->pictureBox3->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox3_MouseLeave);
			this->pictureBox3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox3_MouseMove);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(273, 336);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(243, 98);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			this->pictureBox4->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox4_MouseLeave);
			this->pictureBox4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox4_MouseMove);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(-1, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(800, 600);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(426, 240);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(84, 94);
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			this->pictureBox6->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox6_MouseLeave);
			this->pictureBox6->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox6_MouseMove);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(553, 239);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(86, 96);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			this->pictureBox7->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox7_MouseLeave);
			this->pictureBox7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox7_MouseMove);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 603);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(816, 642);
			this->MinimumSize = System::Drawing::Size(816, 642);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		bool start = false;
		int non = 0;
		int x = 50;
		int y = 50;
		Leftt^ pq;
		Rightt^ qp;
		Ball^ ball;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		non = e->KeyChar;
		if (non == (char)116)
		{
			if (timer1->Enabled == false)
				timer1->Enabled = true;
			else
				timer1->Enabled = false;
		}
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		start = true;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		pictureBox1->Invalidate();
	}
	private: System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ w = e->Graphics;
		pq->Push(w);
		qp->Push(w);
		ball->Push(w);
	
		if (non == (char)119)
		{
			pq->Up();
		}
		if (non == (char)115)
		{
			pq->Down();
		}
		if (ball->getY() < qp->GetY() + 33)
		{
			qp->Up();
		}
		if (ball->getY() > qp->GetY() + 33)
		{
			qp->Down();
			qp->Draw();
		}
		non = 0;
		qp->Draw();
		pq->Draw();
		if (ball->getX() < 400)
			ball->AddGraphics(pq);
		else
			ball->AddGraphics(qp);
		ball->Draw();

		if (start && ball->GetSost()){
			ball->Startl();
			start = false;
		}
		else
			if (start)
				start = false;
		non = 0;
	}

	private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

	}


	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void pictureBox3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	
	pictureBox3->Image = Image::FromFile("newgame.jpg");
}
private: System::Void pictureBox3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	pictureBox3->Image = Image::FromFile("newgame1.jpg");
}
private: System::Void pictureBox4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox4->Image = Image::FromFile("options1.jpg");
}
private: System::Void pictureBox4_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	pictureBox4->Image = Image::FromFile("options.jpg");
}
private: System::Void pictureBox3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Visible = false;
	pictureBox3->Visible = false;
	pictureBox4->Visible = false;
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	
	pictureBox6->Visible = true;
	pictureBox7->Visible = true;
	pictureBox5->Visible = true;
}
private: System::Void pictureBox6_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox6->Image = Image::FromFile("11.jpg");
}
private: System::Void pictureBox6_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	pictureBox6->Image = Image::FromFile("1.jpg");
}
private: System::Void pictureBox7_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
	pictureBox7->Image = Image::FromFile("2.jpg");
}
private: System::Void pictureBox7_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox7->Image = Image::FromFile("22.jpg");
}
private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Interval = 20;
	pictureBox7->Visible = false;
	pictureBox6->Visible = false;
	pictureBox5->Visible = false;
}
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Interval = 1;
	pictureBox7->Visible = false;
	pictureBox6->Visible = false;
	pictureBox5->Visible = false;
}
};
}


