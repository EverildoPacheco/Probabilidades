#pragma once

namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Teorena3
	/// </summary>
	public ref class Teorena3 : public System::Windows::Forms::Form
	{
	public:
		Teorena3(void)
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
		~Teorena3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtN;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtResultado;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblMostrar;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblMostrar = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(164, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TEOREMA 3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(106, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(205, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"El numero de permutaciones de n objetos \r\nodenados en un circulo es (n-1)!";
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(239, 147);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 20);
			this->txtN->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(79, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ingrese el numero del elemento";
			// 
			// txtResultado
			// 
			this->txtResultado->Location = System::Drawing::Point(156, 286);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 20);
			this->txtResultado->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(141, 270);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"La permutacion circular es:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(156, 188);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"CALCULAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Teorena3::button1_Click);
			// 
			// lblMostrar
			// 
			this->lblMostrar->AutoSize = true;
			this->lblMostrar->Location = System::Drawing::Point(153, 243);
			this->lblMostrar->Name = L"lblMostrar";
			this->lblMostrar->Size = System::Drawing::Size(0, 13);
			this->lblMostrar->TabIndex = 7;
			// 
			// Teorena3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 382);
			this->Controls->Add(this->lblMostrar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtN);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Teorena3";
			this->Text = L"Teorena3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int numero, factorial = 1;
		int Mostrar;
		numero = Convert::ToDouble(this->txtN->Text);

		for (int i = 1; i <= numero - 1; i++) {
			factorial = factorial * i;
		}
		Mostrar = numero - 1;

		this->lblMostrar->Text=("(n-1)!  =  " +numero + " - 1 = " + Mostrar + "!");

		this->txtResultado->Text = Convert::ToString(factorial);
	}
};
}
