#pragma once

namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Teorema6
	/// </summary>
	public ref class Teorema6 : public System::Windows::Forms::Form
	{
	public:
		Teorema6(void)
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
		~Teorema6()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtN;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtR;
	private: System::Windows::Forms::TextBox^ txtResultado;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblMostrar;
	private: System::Windows::Forms::Label^ lblMostrar2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtR = (gcnew System::Windows::Forms::TextBox());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblMostrar = (gcnew System::Windows::Forms::Label());
			this->lblMostrar2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// txtN
			// 
			this->txtN->Location = System::Drawing::Point(162, 157);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 20);
			this->txtN->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(159, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TEOREMA # 6";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(107, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(204, 26);
			this->label2->TabIndex = 2;
			this->label2->Text = L"El número de combinaciones de n objetos\r\ndistintos tomados de r a la vez es: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\Fteorema2-6.png"
				L"";
			this->pictureBox1->Location = System::Drawing::Point(162, 82);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// txtR
			// 
			this->txtR->Location = System::Drawing::Point(162, 197);
			this->txtR->Name = L"txtR";
			this->txtR->Size = System::Drawing::Size(100, 20);
			this->txtR->TabIndex = 4;
			// 
			// txtResultado
			// 
			this->txtResultado->Location = System::Drawing::Point(162, 320);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 20);
			this->txtResultado->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(282, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 52);
			this->button1->TabIndex = 6;
			this->button1->Text = L"CALCULAR";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Teorema6::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(105, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ingrese n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(107, 200);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ingrese r";
			// 
			// lblMostrar
			// 
			this->lblMostrar->AutoSize = true;
			this->lblMostrar->Location = System::Drawing::Point(203, 237);
			this->lblMostrar->Name = L"lblMostrar";
			this->lblMostrar->Size = System::Drawing::Size(0, 13);
			this->lblMostrar->TabIndex = 9;
			// 
			// lblMostrar2
			// 
			this->lblMostrar2->AutoSize = true;
			this->lblMostrar2->Location = System::Drawing::Point(189, 264);
			this->lblMostrar2->Name = L"lblMostrar2";
			this->lblMostrar2->Size = System::Drawing::Size(0, 13);
			this->lblMostrar2->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(168, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"_______________";
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\form6.png";
			this->pictureBox2->Location = System::Drawing::Point(117, 231);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 56);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// Teorema6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(448, 370);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->lblMostrar2);
			this->Controls->Add(this->lblMostrar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->txtR);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtN);
			this->Controls->Add(this->label5);
			this->Name = L"Teorema6";
			this->Text = L"Teorema6";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int factoria(int n) {
			int n_fact = 1;
			while (n > 1)
			{
				n_fact = n_fact * n;
				n = n - 1;
			}
			return n_fact;

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		int n, r;
		n = Convert::ToDouble(this->txtN->Text);
		r = Convert::ToDouble(this->txtR->Text);

		//this->factoria(n) / (factoria(k) * factoria(n - k));

		this->lblMostrar->Text = ( n+ "  !" );
		this->lblMostrar2->Text = (r + " ! " + " ( " + n + " - "+ r+ " ) !");

		this->txtResultado->Text = Convert::ToString(this->factoria(n) / (factoria(r) * factoria(n - r)));
	}
};
}
