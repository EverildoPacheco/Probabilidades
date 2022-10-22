#pragma once

namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Teorema10
	/// </summary>
	public ref class Teorema10 : public System::Windows::Forms::Form
	{
	public:
		Teorema10(void)
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
		~Teorema10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtPos1;
	private: System::Windows::Forms::TextBox^ txtPos2;
	private: System::Windows::Forms::TextBox^ txtProb2;




	private: System::Windows::Forms::TextBox^ txtProb1;
	private: System::Windows::Forms::TextBox^ txtResultado;
	private: System::Windows::Forms::Button^ RESULTADO;
	private: System::Windows::Forms::Label^ label7;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teorema10::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPos1 = (gcnew System::Windows::Forms::TextBox());
			this->txtPos2 = (gcnew System::Windows::Forms::TextBox());
			this->txtProb2 = (gcnew System::Windows::Forms::TextBox());
			this->txtProb1 = (gcnew System::Windows::Forms::TextBox());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->RESULTADO = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\mennu.png";
			this->pictureBox2->Location = System::Drawing::Point(426, 23);
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
			this->pictureBox1->Location = System::Drawing::Point(261, 401);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(86, 57);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Teorema10::pictureBox1_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\x2.png";
			this->pictureBox9->Location = System::Drawing::Point(482, 22);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(51, 47);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Teorema10::pictureBox9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(187, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 24);
			this->label1->TabIndex = 22;
			this->label1->Text = L"TEOREMA # 10";
			this->label1->Click += gcnew System::EventHandler(this, &Teorema10::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(440, 36);
			this->label2->TabIndex = 23;
			this->label2->Text = L"Si en un experimento pueden ocurrir los eventos A y B,\r\nentonces P(A ∩ B) = P(A)P"
				L"(B|A), siempre que P(A) > 0.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(69, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(301, 15);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Ingrese el numero de resultados posibles 1";
			this->label3->Click += gcnew System::EventHandler(this, &Teorema10::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(85, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(287, 15);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Ingrese el numero de resultado posible 2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(106, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(266, 15);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Ingrese el numero de probabilidades 1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(113, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(259, 15);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Ingrese el numero deprobabilidades 2";
			this->label6->Click += gcnew System::EventHandler(this, &Teorema10::label6_Click);
			// 
			// txtPos1
			// 
			this->txtPos1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtPos1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPos1->Location = System::Drawing::Point(399, 170);
			this->txtPos1->Name = L"txtPos1";
			this->txtPos1->Size = System::Drawing::Size(100, 26);
			this->txtPos1->TabIndex = 28;
			// 
			// txtPos2
			// 
			this->txtPos2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtPos2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPos2->Location = System::Drawing::Point(400, 241);
			this->txtPos2->Name = L"txtPos2";
			this->txtPos2->Size = System::Drawing::Size(100, 26);
			this->txtPos2->TabIndex = 29;
			this->txtPos2->TextChanged += gcnew System::EventHandler(this, &Teorema10::textBox2_TextChanged);
			// 
			// txtProb2
			// 
			this->txtProb2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtProb2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtProb2->Location = System::Drawing::Point(399, 207);
			this->txtProb2->Name = L"txtProb2";
			this->txtProb2->Size = System::Drawing::Size(100, 26);
			this->txtProb2->TabIndex = 30;
			// 
			// txtProb1
			// 
			this->txtProb1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtProb1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtProb1->Location = System::Drawing::Point(399, 133);
			this->txtProb1->Name = L"txtProb1";
			this->txtProb1->Size = System::Drawing::Size(100, 26);
			this->txtProb1->TabIndex = 31;
			this->txtProb1->TextChanged += gcnew System::EventHandler(this, &Teorema10::textBox4_TextChanged);
			// 
			// txtResultado
			// 
			this->txtResultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtResultado->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultado->Location = System::Drawing::Point(353, 366);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 26);
			this->txtResultado->TabIndex = 32;
			// 
			// RESULTADO
			// 
			this->RESULTADO->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->RESULTADO->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RESULTADO->Location = System::Drawing::Point(250, 283);
			this->RESULTADO->Name = L"RESULTADO";
			this->RESULTADO->Size = System::Drawing::Size(122, 49);
			this->RESULTADO->TabIndex = 33;
			this->RESULTADO->Text = L"RESULTADO";
			this->RESULTADO->UseVisualStyleBackColor = false;
			this->RESULTADO->Click += gcnew System::EventHandler(this, &Teorema10::RESULTADO_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(123, 369);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(224, 18);
			this->label7->TabIndex = 34;
			this->label7->Text = L"la probalidad resultante es";
			// 
			// Teorema10
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(570, 490);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->RESULTADO);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->txtProb1);
			this->Controls->Add(this->txtProb2);
			this->Controls->Add(this->txtPos2);
			this->Controls->Add(this->txtPos1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox9);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Teorema10";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Teorema10";
			this->Load += gcnew System::EventHandler(this, &Teorema10::Teorema10_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Teorema10_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RESULTADO_Click(System::Object^ sender, System::EventArgs^ e) {
	float primer, segundo, posiblidad, posibilidad2, result, dividiendo, valor1, final;

	if (this->txtPos1->Text == "" || this->txtPos2->Text == "" || this->txtProb1->Text == "" || this->txtProb2->Text == "") {

		MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		posiblidad = Convert::ToDouble(this->txtPos1->Text);
		posibilidad2 = Convert::ToDouble(this->txtPos2->Text);
		primer = Convert::ToDouble(this->txtProb1->Text);
		segundo = Convert::ToDouble(this->txtProb2->Text);


		valor1 = primer * segundo;
		result = posiblidad * posibilidad2;

		final = valor1 / result;

		this->txtResultado->Text = Convert::ToString(final);
	}
	
	
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtPos1->Text = "";
	this->txtPos2->Text = "";
	this->txtProb1->Text = "";
	this->txtProb2->Text = "";
	this->txtResultado->Text = "";
}
};
}
