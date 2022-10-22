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
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lblN;
	private: System::Windows::Forms::Label^ lblR;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox9;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teorema6::typeid));
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lblN = (gcnew System::Windows::Forms::Label());
			this->lblR = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// txtN
			// 
			this->txtN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtN->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtN->Location = System::Drawing::Point(229, 200);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 28);
			this->txtN->TabIndex = 0;
			this->txtN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"TEOREMA # 6";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(130, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(324, 46);
			this->label2->TabIndex = 2;
			this->label2->Text = L"El número de combinaciones de n objetos\r\ndistintos tomados de r a la vez es: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\Fteorema2-6.png"
				L"";
			this->pictureBox1->Location = System::Drawing::Point(236, 120);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(118, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// txtR
			// 
			this->txtR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtR->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtR->Location = System::Drawing::Point(229, 240);
			this->txtR->Name = L"txtR";
			this->txtR->Size = System::Drawing::Size(100, 28);
			this->txtR->TabIndex = 4;
			this->txtR->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtResultado
			// 
			this->txtResultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtResultado->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultado->Location = System::Drawing::Point(254, 379);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 30);
			this->txtResultado->TabIndex = 5;
			this->txtResultado->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(356, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 52);
			this->button1->TabIndex = 6;
			this->button1->Text = L"CALCULAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Teorema6::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(119, 199);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 19);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Ingrese n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(121, 239);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 19);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ingrese r";
			// 
			// lblMostrar
			// 
			this->lblMostrar->AutoSize = true;
			this->lblMostrar->BackColor = System::Drawing::Color::Transparent;
			this->lblMostrar->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrar->Location = System::Drawing::Point(316, 285);
			this->lblMostrar->Name = L"lblMostrar";
			this->lblMostrar->Size = System::Drawing::Size(0, 18);
			this->lblMostrar->TabIndex = 9;
			// 
			// lblMostrar2
			// 
			this->lblMostrar2->AutoSize = true;
			this->lblMostrar2->BackColor = System::Drawing::Color::Transparent;
			this->lblMostrar2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrar2->Location = System::Drawing::Point(290, 312);
			this->lblMostrar2->Name = L"lblMostrar2";
			this->lblMostrar2->Size = System::Drawing::Size(0, 20);
			this->lblMostrar2->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(281, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"_______________";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\F.png";
			this->pictureBox2->Location = System::Drawing::Point(229, 278);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(49, 56);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(161, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 23);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Formula";
			// 
			// lblN
			// 
			this->lblN->AutoSize = true;
			this->lblN->BackColor = System::Drawing::Color::Transparent;
			this->lblN->Location = System::Drawing::Point(239, 289);
			this->lblN->Name = L"lblN";
			this->lblN->Size = System::Drawing::Size(13, 13);
			this->lblN->TabIndex = 14;
			this->lblN->Text = L"1";
			// 
			// lblR
			// 
			this->lblR->AutoSize = true;
			this->lblR->BackColor = System::Drawing::Color::Transparent;
			this->lblR->Location = System::Drawing::Point(240, 308);
			this->lblR->Name = L"lblR";
			this->lblR->Size = System::Drawing::Size(13, 13);
			this->lblR->TabIndex = 15;
			this->lblR->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(161, 357);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(252, 19);
			this->label7->TabIndex = 16;
			this->label7->Text = L"El total de conbinación es:";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\mennu.png";
			this->pictureBox3->Location = System::Drawing::Point(428, 20);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(51, 47);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\5307941.png";
			this->pictureBox4->Location = System::Drawing::Point(259, 424);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(86, 57);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Teorema6::pictureBox4_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\x2.png";
			this->pictureBox9->Location = System::Drawing::Point(485, 20);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(51, 47);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Teorema6::pictureBox9_Click);
			// 
			// Teorema6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(573, 511);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblR);
			this->Controls->Add(this->lblN);
			this->Controls->Add(this->label6);
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
			this->Controls->Add(this->pictureBox2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Teorema6";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teorema6";
			this->Load += gcnew System::EventHandler(this, &Teorema6::Teorema6_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
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

		if (this->txtN->Text == ""|| this->txtR->Text =="") {

			MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			

			n = Convert::ToDouble(this->txtN->Text);
			r = Convert::ToDouble(this->txtR->Text);

			//this->factoria(n) / (factoria(k) * factoria(n - k));
			this->lblN->Text = ("" + n);
			this->lblR->Text = ("" + r);

			this->lblMostrar->Text = (n + "  !");
			this->lblMostrar2->Text = (r + " ! " + " ( " + n + " - " + r + " ) !");
		
			

			this->txtResultado->Text = Convert::ToString(this->factoria(n) / (factoria(r) * factoria(n - r)));
		}
		
	}
private: System::Void Teorema6_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtN->Text = "";
	this->txtR->Text = "";
	this->txtResultado->Text = "";
	this->lblMostrar->Text = "";
	this->lblMostrar2->Text = "";
	this->lblN->Text = "";
	this->lblR->Text = "";
}
};
}
