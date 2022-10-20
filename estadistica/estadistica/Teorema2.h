#pragma once

namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Teorema2
	/// </summary>
	public ref class Teorema2 : public System::Windows::Forms::Form
	{
	public:
		Teorema2(void)
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
		~Teorema2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtN;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtR;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtResultado;
	private: System::Windows::Forms::Button^ button1;
	protected:

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtR = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(224, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TEOREMA 2";
			this->label1->Click += gcnew System::EventHandler(this, &Teorema2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(159, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"El número de permutaciones de n objetos\r\ndistintos tomados de r a la vez es: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\Fteorema2-2.png"
				L"";
			this->pictureBox1->Location = System::Drawing::Point(175, 70);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(167, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(190, 171);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(77, 20);
			this->txtN->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(78, 174);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese el valor de n!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(78, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ingrese el valor de r!";
			// 
			// txtR
			// 
			this->txtR->Location = System::Drawing::Point(190, 208);
			this->txtR->Name = L"txtR";
			this->txtR->Size = System::Drawing::Size(77, 20);
			this->txtR->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(172, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"El resultado de la combinacion es:";
			// 
			// txtResultado
			// 
			this->txtResultado->Location = System::Drawing::Point(219, 301);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(77, 20);
			this->txtResultado->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(304, 174);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 50);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Teorema2::button1_Click);
			// 
			// Teorema2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(491, 374);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtR);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtN);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Teorema2";
			this->Text = L"Teorema2";
			this->Load += gcnew System::EventHandler(this, &Teorema2::Teorema2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Teorema2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	long long int x, num, i;
	long long int y, j, num2, k;
	long long int z, m;
	long long int combinacion;

	num = Convert::ToDouble(this->txtN->Text);
	num2 = Convert::ToDouble(this->txtR->Text);

	x = 1;

	for (i = 1; i <= num; i++)
	{
		x = x * i;
	}

	z = 1;
	for (m = 1; m <= num2; m++)
	{
		z = z * m;
	}

	y = num - num2;
	k = 1;
	for (j = 1; j <= y; j++)
	{
		k = k * j;
	}

	combinacion = x / k;

	this->txtResultado->Text = Convert::ToString(combinacion);
}
};
}
