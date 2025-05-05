#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace sessiya {

	/// <summary>
	/// Summary for Page3
	/// </summary>
	public ref class Page3 : public System::Windows::Forms::UserControl
	{
	public:
		Page3(void)
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
		~Page3()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Page3::typeid));
			this->SuspendLayout();
			// 
			// Page3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Name = L"Page3";
			this->Size = System::Drawing::Size(1589, 946);
			this->Load += gcnew System::EventHandler(this, &Page3::Page3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Page3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
