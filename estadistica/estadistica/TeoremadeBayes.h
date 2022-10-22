#pragma once

namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TeoremadeBayes
	/// </summary>
	public ref class TeoremadeBayes : public System::Windows::Forms::Form
	{
	public:
		TeoremadeBayes(void)
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
		~TeoremadeBayes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txt3;
	private: System::Windows::Forms::TextBox^ txtResultado;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ CALCULAR;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TeoremadeBayes::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txt3 = (gcnew System::Windows::Forms::TextBox());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CALCULAR = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(145, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Teorema de Bayes";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(133, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ingrese el valor de ph";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(133, 173);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ingrese el valor de pt ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(133, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(225, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"ingrese el valor de pth ";
			// 
			// txt1
			// 
			this->txt1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txt1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt1->Location = System::Drawing::Point(360, 141);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(100, 26);
			this->txt1->TabIndex = 4;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt2
			// 
			this->txt2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txt2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt2->Location = System::Drawing::Point(360, 173);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(100, 26);
			this->txt2->TabIndex = 5;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt3
			// 
			this->txt3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txt3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt3->Location = System::Drawing::Point(360, 212);
			this->txt3->Name = L"txt3";
			this->txt3->Size = System::Drawing::Size(100, 26);
			this->txt3->TabIndex = 6;
			this->txt3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtResultado
			// 
			this->txtResultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtResultado->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultado->Location = System::Drawing::Point(258, 387);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 30);
			this->txtResultado->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(163, 353);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(297, 19);
			this->label5->TabIndex = 8;
			this->label5->Text = L"el resultado de la incognita es ";
			// 
			// CALCULAR
			// 
			this->CALCULAR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->CALCULAR->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CALCULAR->Location = System::Drawing::Point(245, 270);
			this->CALCULAR->Name = L"CALCULAR";
			this->CALCULAR->Size = System::Drawing::Size(105, 52);
			this->CALCULAR->TabIndex = 9;
			this->CALCULAR->Text = L"CALCULAR";
			this->CALCULAR->UseVisualStyleBackColor = false;
			this->CALCULAR->Click += gcnew System::EventHandler(this, &TeoremadeBayes::CALCULAR_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\mennu.png";
			this->pictureBox2->Location = System::Drawing::Point(434, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(51, 47);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\5307941.png";
			this->pictureBox1->Location = System::Drawing::Point(276, 418);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &TeoremadeBayes::pictureBox1_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\x2.png";
			this->pictureBox9->Location = System::Drawing::Point(491, 22);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(51, 47);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &TeoremadeBayes::pictureBox9_Click);
			// 
			// TeoremadeBayes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(572, 494);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->CALCULAR);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->txt3);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"TeoremadeBayes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeoremadeBayes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void CALCULAR_Click(System::Object^ sender, System::EventArgs^ e) {

	float ph, pt, pth, ph2, pt2, pth2, numerador, denominador, resultado, de100;

	if (this->txt1->Text == ""|| this->txt2->Text == ""|| this->txt3->Text == "") {
		MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else
	{
		ph = Convert::ToDouble(this->txt1->Text);
		pt = Convert::ToDouble(this->txt2->Text);
		pth = Convert::ToDouble(this->txt3->Text);

		ph2 = ph / 100;
		pt2 = pt / 100;
		pth2 = pth / 100;


		numerador = ph2 * pth2;
		denominador = pt2;


		resultado = numerador / denominador;

		de100 = resultado * 100;

		this->txtResultado->Text = Convert::ToString(de100);
	}

	

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->txt1->Text = "";
	this->txt2->Text = "";
	this->txt3->Text = "";
	this->txtResultado->Text = "";
}
};
}
