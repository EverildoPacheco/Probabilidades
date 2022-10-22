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
	private: System::Windows::Forms::Label^ lblMostrar;
	private: System::Windows::Forms::Label^ lblMostrar2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblFormula;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblF2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teorema2::typeid));
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
			this->lblMostrar = (gcnew System::Windows::Forms::Label());
			this->lblMostrar2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblFormula = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblF2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(188, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TEOREMA 2";
			this->label1->Click += gcnew System::EventHandler(this, &Teorema2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(35, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(328, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"El número de permutaciones de n objetos\r\ndistintos tomados de r a la vez es: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\Fteorema2-2.png"
				L"";
			this->pictureBox1->Location = System::Drawing::Point(369, 96);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(127, 58);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// txtN
			// 
			this->txtN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtN->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtN->Location = System::Drawing::Point(254, 176);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(77, 26);
			this->txtN->TabIndex = 3;
			this->txtN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(64, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ingrese el valor de n!";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(64, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Ingrese el valor de r!";
			// 
			// txtR
			// 
			this->txtR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtR->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtR->Location = System::Drawing::Point(254, 213);
			this->txtR->Name = L"txtR";
			this->txtR->Size = System::Drawing::Size(77, 26);
			this->txtR->TabIndex = 5;
			this->txtR->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(142, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(280, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"El resultado de la combinacion es:";
			// 
			// txtResultado
			// 
			this->txtResultado->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->txtResultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtResultado->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultado->Location = System::Drawing::Point(249, 349);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(77, 28);
			this->txtResultado->TabIndex = 7;
			this->txtResultado->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(351, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 50);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Teorema2::button1_Click);
			// 
			// lblMostrar
			// 
			this->lblMostrar->AutoSize = true;
			this->lblMostrar->BackColor = System::Drawing::Color::Transparent;
			this->lblMostrar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrar->Location = System::Drawing::Point(290, 269);
			this->lblMostrar->Name = L"lblMostrar";
			this->lblMostrar->Size = System::Drawing::Size(12, 20);
			this->lblMostrar->TabIndex = 10;
			this->lblMostrar->Text = L".";
			// 
			// lblMostrar2
			// 
			this->lblMostrar2->AutoSize = true;
			this->lblMostrar2->BackColor = System::Drawing::Color::Transparent;
			this->lblMostrar2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrar2->Location = System::Drawing::Point(276, 295);
			this->lblMostrar2->Name = L"lblMostrar2";
			this->lblMostrar2->Size = System::Drawing::Size(12, 20);
			this->lblMostrar2->TabIndex = 11;
			this->lblMostrar2->Text = L".";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(245, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"____________ ";
			// 
			// lblFormula
			// 
			this->lblFormula->AutoSize = true;
			this->lblFormula->BackColor = System::Drawing::Color::Transparent;
			this->lblFormula->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFormula->Location = System::Drawing::Point(191, 285);
			this->lblFormula->Name = L"lblFormula";
			this->lblFormula->Size = System::Drawing::Size(11, 17);
			this->lblFormula->TabIndex = 13;
			this->lblFormula->Text = L".";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\mennu.png";
			this->pictureBox2->Location = System::Drawing::Point(428, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(51, 47);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\5307941.png";
			this->pictureBox3->Location = System::Drawing::Point(240, 393);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(86, 57);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Teorema2::pictureBox3_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\x2.png";
			this->pictureBox9->Location = System::Drawing::Point(485, 21);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(51, 47);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Teorema2::pictureBox9_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(203, 264);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 33);
			this->label7->TabIndex = 22;
			this->label7->Text = L"P";
			// 
			// lblF2
			// 
			this->lblF2->AutoSize = true;
			this->lblF2->BackColor = System::Drawing::Color::Transparent;
			this->lblF2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblF2->Location = System::Drawing::Point(220, 285);
			this->lblF2->Name = L"lblF2";
			this->lblF2->Size = System::Drawing::Size(11, 17);
			this->lblF2->TabIndex = 23;
			this->lblF2->Text = L".";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(361, 284);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"=";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(374, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 25;
			this->label9->Text = L"______";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(339, 354);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 18);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Formas";
			// 
			// Teorema2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(564, 451);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblF2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->lblFormula);
			this->Controls->Add(this->lblMostrar2);
			this->Controls->Add(this->lblMostrar);
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
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Teorema2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teorema2";
			this->Load += gcnew System::EventHandler(this, &Teorema2::Teorema2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
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


	if (this->txtN->Text == "" || this->txtR->Text =="") {

		MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
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

		int fin = num - num2;

		this->lblMostrar->Text = ("" + num + " ! " + "                  " + num + "!");
		this->lblMostrar2->Text = ("( " + num + " - " + num2 + " ) " + "! " + "          " + fin + "!");

		this->lblFormula->Text = ("" + num);
		this->lblF2->Text = ("" + num2 + " =");

		this->txtResultado->Text = Convert::ToString(combinacion);
	}
	}

	
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtN->Text = "";
	this->txtR->Text = "";
	this->txtResultado->Text = "";
	this->lblMostrar->Text = "";
	this->lblMostrar2->Text = "";
	this->lblFormula->Text = "";

}
};
}
