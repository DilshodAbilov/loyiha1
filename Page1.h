#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace sessiya {

	/// <summary>
	/// Summary for Page1
	/// </summary>
	public ref class Page1 : public System::Windows::Forms::UserControl
	{
	public:
		Page1(void)
		{
			InitializeComponent();
			this->button1->Click += gcnew System::EventHandler(this, &Page1::button1_Click);

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Page1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Page1::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(315, 362);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(551, 64);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Location = System::Drawing::Point(887, 362);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 64);
			this->button1->TabIndex = 2;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Page1::button1_Click);
			// 
			// Page1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Page1";
			this->Size = System::Drawing::Size(1628, 945);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Tugma bosildi!");

		String^ connStr = "Data Source=DILSHOD;Initial Catalog=MyStudyLife;Integrated Security=True";
		SqlConnection^ conn = gcnew SqlConnection(connStr);

		try {
			conn->Open();

			String^ query = "INSERT INTO Tasks (SubjectId, Title, Description, DueDate, IsCompleted, CompletionPercentage) " +
				"VALUES (@subject_id, @title, @description, @due_date, @is_completed, @completion_percentage)";

			SqlCommand^ cmd = gcnew SqlCommand(query, conn);

			// Dummy ma'lumotlar
			cmd->Parameters->AddWithValue("@subject_id", DBNull::Value);
			cmd->Parameters->AddWithValue("@title", textBox1->Text);
			cmd->Parameters->AddWithValue("@description", DBNull::Value);
			cmd->Parameters->AddWithValue("@due_date", DBNull::Value);
			cmd->Parameters->AddWithValue("@is_completed", false);
			cmd->Parameters->AddWithValue("@completion_percentage", 0);

			int result = cmd->ExecuteNonQuery();

			if (result > 0) {
				MessageBox::Show("Vazifa muvaffaqiyatli saqlandi!");
			}
			else {
				MessageBox::Show("Hech qanday satr qo‘shilmadi.");
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Xatolik: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}
	};
}
