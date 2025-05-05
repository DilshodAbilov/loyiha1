#pragma once
#include "MyForm3.h"

namespace sessiya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		Form^ myOb1;

		MyForm2(void)
		{
			InitializeComponent();
			//this->WindowState = FormWindowState::Maximized;
			
		}

		MyForm2(Form^ ob1)
		{
			myOb1 = ob1;
			InitializeComponent();
			//this->WindowState = FormWindowState::Maximized;
			

		}

	protected:
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;







	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			   this->label1->Location = System::Drawing::Point(542, 258);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(247, 31);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Foydalanuvchi nomi";
			   this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->ForeColor = System::Drawing::Color::Cornsilk;
			   this->label2->Location = System::Drawing::Point(545, 388);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(74, 31);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"Parol";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox1->ForeColor = System::Drawing::SystemColors::GrayText;
			   this->textBox1->Location = System::Drawing::Point(547, 298);
			   this->textBox1->Multiline = true;
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(378, 48);
			   this->textBox1->TabIndex = 2;
			   this->textBox1->Text = L"Username";
			   this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm2::textBox1_MouseClick);
			   this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm2::textBox1_KeyDown);
			   this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm2::textBox1_KeyPress);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->textBox2->ForeColor = System::Drawing::SystemColors::GrayText;
			   this->textBox2->Location = System::Drawing::Point(547, 427);
			   this->textBox2->Multiline = true;
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->PasswordChar = '*';
			   this->textBox2->Size = System::Drawing::Size(378, 53);
			   this->textBox2->TabIndex = 3;
			   this->textBox2->Text = L"Password";
			   this->textBox2->UseSystemPasswordChar = true;
			   this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm2::textBox2_MouseClick);
			   this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox2_TextChanged);
			   this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm2::textBox2_KeyDown);
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button1->Location = System::Drawing::Point(547, 549);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(378, 77);
			   this->button1->TabIndex = 4;
			   this->button1->Text = L"Kirish";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold));
			   this->button2->Location = System::Drawing::Point(12, 847);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(177, 39);
			   this->button2->TabIndex = 5;
			   this->button2->Text = L"Orqaga";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::Transparent;
			   this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			   this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button3->Location = System::Drawing::Point(872, 429);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(48, 48);
			   this->button3->TabIndex = 6;
			   this->button3->Text = L"  ";
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			   // 
			   // MyForm2
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1572, 898);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"MyForm2";
			   this->Text = L"MyForm2";
			   this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		myOb1->Show();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = textBox1->Text->Trim();
		String^ parol = textBox2->Text->Trim();

		if (login->Length == 0 || parol->Length == 0) {
			MessageBox::Show("Iltimos, login va parolni to‘ldiring.", "Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		String^ connectionString = "Data Source=DILSHOD;Initial Catalog=MyStudyLife;Integrated Security=True;";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);

		try {
			connection->Open();
			String^ query = "SELECT COUNT(*) FROM Users WHERE Username=@login AND PasswordHash=@parol";
			SqlCommand^ cmd = gcnew SqlCommand(query, connection);
			cmd->Parameters->AddWithValue("@login", login);
			cmd->Parameters->AddWithValue("@parol", parol);

			int count = Convert::ToInt32(cmd->ExecuteScalar());

			if (count > 0) {
				MyForm3^ form3 = gcnew MyForm3();
				form3->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Login yoki parol noto‘g‘ri!", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			connection->Close();
		}
		catch (SqlException^ sqlEx) {
			MessageBox::Show("SQL xatolik: " + sqlEx->Message, "SQL Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Xatolik yuz berdi: " + ex->Message, "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

}
	   private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
    textBox2->UseSystemPasswordChar = true;
    button3->Text = "\\"; 
}
private: System::Void pictureBox2_LoadCompleted(System::Object^ sender, System::ComponentModel::AsyncCompletedEventArgs^ e) {
	
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->UseSystemPasswordChar) {
		textBox2->UseSystemPasswordChar = false; 
		button3->Text = "\\"; 
	}
	else {
		textBox2->UseSystemPasswordChar = true;  
		button3->Text = " ";
	
}

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "Username") {
		textBox1->Text = "";
		textBox1->ForeColor = System::Drawing::Color::Black;
	}
	if (textBox2->Text == "") {
		textBox2->Text = "Password";
		textBox2->ForeColor = System::Drawing::Color::DarkGray;
	}
}
private: System::Void textBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox2->Text == "Password") {
		textBox2->Text = "";
		textBox2->ForeColor = System::Drawing::Color::Black;
	}
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
		textBox1->ForeColor = System::Drawing::Color::DarkGray;
	}
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		textBox2->Focus();
		
	}

}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar == (char)Keys::Enter)
	{
		e->Handled = true; 
	}
}
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		button1->PerformClick(); 
		e->Handled = true;
		
	}
}
};
}
