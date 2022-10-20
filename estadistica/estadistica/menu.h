#pragma once
#include"Teorema1.h";
#include"Teorema2.h";
#include"Teorena3.h";
#include"Teorema6.h";
namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btbT1;
	protected:
	private: System::Windows::Forms::Button^ btbT5;
	private: System::Windows::Forms::Button^ btbT4;
	private: System::Windows::Forms::Button^ btbT3;
	private: System::Windows::Forms::Button^ btbT2;
	private: System::Windows::Forms::Button^ btbT6;
	private: System::Windows::Forms::Button^ btbT7;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btbT1 = (gcnew System::Windows::Forms::Button());
			this->btbT5 = (gcnew System::Windows::Forms::Button());
			this->btbT4 = (gcnew System::Windows::Forms::Button());
			this->btbT3 = (gcnew System::Windows::Forms::Button());
			this->btbT2 = (gcnew System::Windows::Forms::Button());
			this->btbT6 = (gcnew System::Windows::Forms::Button());
			this->btbT7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btbT1
			// 
			this->btbT1->Location = System::Drawing::Point(43, 38);
			this->btbT1->Name = L"btbT1";
			this->btbT1->Size = System::Drawing::Size(108, 53);
			this->btbT1->TabIndex = 0;
			this->btbT1->Text = L"Teorema 1";
			this->btbT1->UseVisualStyleBackColor = true;
			this->btbT1->Click += gcnew System::EventHandler(this, &menu::btbT1_Click);
			// 
			// btbT5
			// 
			this->btbT5->Location = System::Drawing::Point(373, 97);
			this->btbT5->Name = L"btbT5";
			this->btbT5->Size = System::Drawing::Size(108, 53);
			this->btbT5->TabIndex = 1;
			this->btbT5->Text = L"Teorema 5";
			this->btbT5->UseVisualStyleBackColor = true;
			// 
			// btbT4
			// 
			this->btbT4->Location = System::Drawing::Point(373, 28);
			this->btbT4->Name = L"btbT4";
			this->btbT4->Size = System::Drawing::Size(108, 53);
			this->btbT4->TabIndex = 2;
			this->btbT4->Text = L"Teorema 4";
			this->btbT4->UseVisualStyleBackColor = true;
			// 
			// btbT3
			// 
			this->btbT3->Location = System::Drawing::Point(43, 180);
			this->btbT3->Name = L"btbT3";
			this->btbT3->Size = System::Drawing::Size(108, 53);
			this->btbT3->TabIndex = 3;
			this->btbT3->Text = L"Teorema 3";
			this->btbT3->UseVisualStyleBackColor = true;
			this->btbT3->Click += gcnew System::EventHandler(this, &menu::btbT3_Click);
			// 
			// btbT2
			// 
			this->btbT2->Location = System::Drawing::Point(43, 107);
			this->btbT2->Name = L"btbT2";
			this->btbT2->Size = System::Drawing::Size(108, 53);
			this->btbT2->TabIndex = 4;
			this->btbT2->Text = L"Teorema 2";
			this->btbT2->UseVisualStyleBackColor = true;
			this->btbT2->Click += gcnew System::EventHandler(this, &menu::btbT2_Click);
			// 
			// btbT6
			// 
			this->btbT6->Location = System::Drawing::Point(373, 170);
			this->btbT6->Name = L"btbT6";
			this->btbT6->Size = System::Drawing::Size(108, 53);
			this->btbT6->TabIndex = 5;
			this->btbT6->Text = L"Teorema 6";
			this->btbT6->UseVisualStyleBackColor = true;
			this->btbT6->Click += gcnew System::EventHandler(this, &menu::btbT6_Click);
			// 
			// btbT7
			// 
			this->btbT7->Location = System::Drawing::Point(373, 253);
			this->btbT7->Name = L"btbT7";
			this->btbT7->Size = System::Drawing::Size(108, 53);
			this->btbT7->TabIndex = 6;
			this->btbT7->Text = L"Teorema 7";
			this->btbT7->UseVisualStyleBackColor = true;
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 401);
			this->Controls->Add(this->btbT7);
			this->Controls->Add(this->btbT6);
			this->Controls->Add(this->btbT2);
			this->Controls->Add(this->btbT3);
			this->Controls->Add(this->btbT4);
			this->Controls->Add(this->btbT5);
			this->Controls->Add(this->btbT1);
			this->Name = L"menu";
			this->Text = L"menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btbT1_Click(System::Object^ sender, System::EventArgs^ e) {
		estadistica::Teorema1^ teorema = gcnew estadistica::Teorema1();
		teorema->Show();

	}
private: System::Void btbT2_Click(System::Object^ sender, System::EventArgs^ e) {
	estadistica::Teorema2^ teorema = gcnew estadistica::Teorema2();
	teorema->Show();
}
private: System::Void btbT3_Click(System::Object^ sender, System::EventArgs^ e) {
	estadistica::Teorena3^ teorema = gcnew estadistica::Teorena3();
	teorema->Show();
}
private: System::Void btbT6_Click(System::Object^ sender, System::EventArgs^ e) {
	estadistica::Teorema6^ teorema = gcnew estadistica::Teorema6();
	teorema->Show();
}
};
}
