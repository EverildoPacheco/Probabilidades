#pragma once

namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Teorema1
	/// </summary>
	public ref class Teorema1 : public System::Windows::Forms::Form
	{
	public:
		Teorema1(void)
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
		~Teorema1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ ingreso;
	private: System::Windows::Forms::TextBox^ resultado;
	protected:

	protected:

	private: System::Windows::Forms::Button^ total;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			this->ingreso = (gcnew System::Windows::Forms::TextBox());
			this->resultado = (gcnew System::Windows::Forms::TextBox());
			this->total = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ingreso
			// 
			this->ingreso->Location = System::Drawing::Point(160, 103);
			this->ingreso->Name = L"ingreso";
			this->ingreso->Size = System::Drawing::Size(159, 20);
			this->ingreso->TabIndex = 0;
			// 
			// resultado
			// 
			this->resultado->Location = System::Drawing::Point(190, 255);
			this->resultado->Multiline = true;
			this->resultado->Name = L"resultado";
			this->resultado->Size = System::Drawing::Size(86, 40);
			this->resultado->TabIndex = 1;
			// 
			// total
			// 
			this->total->Location = System::Drawing::Point(201, 161);
			this->total->Name = L"total";
			this->total->Size = System::Drawing::Size(75, 23);
			this->total->TabIndex = 2;
			this->total->Text = L"CALCULAR";
			this->total->UseVisualStyleBackColor = true;
			this->total->Click += gcnew System::EventHandler(this, &Teorema1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(198, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"TEREMA 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ingrese un numero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(157, 224);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"El resultado de la permutacion es";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(113, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"El numero de permutaciones de n objetos es n!";
			// 
			// Teorema1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 332);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->total);
			this->Controls->Add(this->resultado);
			this->Controls->Add(this->ingreso);
			this->Name = L"Teorema1";
			this->Text = L"Teorema1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int numero, factoria = 1;
	numero = Convert::ToDouble(this->ingreso->Text);

	for (int i = 1; i <= numero; i++) {
		factoria = factoria * i; 
	}
	
	this->resultado->Text = Convert::ToString(factoria);
}
};
}
