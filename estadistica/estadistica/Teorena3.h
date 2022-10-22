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
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teorena3::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtN = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblMostrar = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cooper Black", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(179, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TEOREMA 3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(107, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(335, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"El numero de permutaciones de n objetos \r\nodenados en un circulo es (n-1)!";
			// 
			// txtN
			// 
			this->txtN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtN->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtN->Location = System::Drawing::Point(336, 188);
			this->txtN->Name = L"txtN";
			this->txtN->Size = System::Drawing::Size(100, 28);
			this->txtN->TabIndex = 2;
			this->txtN->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(51, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Ingrese el numero del elemento";
			// 
			// txtResultado
			// 
			this->txtResultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->txtResultado->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultado->Location = System::Drawing::Point(242, 364);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 34);
			this->txtResultado->TabIndex = 4;
			this->txtResultado->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(182, 338);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"La permutacion circular es:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(248, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"CALCULAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Teorena3::button1_Click);
			// 
			// lblMostrar
			// 
			this->lblMostrar->AutoSize = true;
			this->lblMostrar->BackColor = System::Drawing::Color::Transparent;
			this->lblMostrar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrar->Location = System::Drawing::Point(171, 295);
			this->lblMostrar->Name = L"lblMostrar";
			this->lblMostrar->Size = System::Drawing::Size(0, 23);
			this->lblMostrar->TabIndex = 7;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\mennu.png";
			this->pictureBox2->Location = System::Drawing::Point(427, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(51, 47);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\5307941.png";
			this->pictureBox3->Location = System::Drawing::Point(244, 414);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(86, 57);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 23;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Teorena3::pictureBox3_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\x2.png";
			this->pictureBox9->Location = System::Drawing::Point(484, 26);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(51, 47);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 22;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &Teorena3::pictureBox9_Click);
			// 
			// Teorena3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(572, 493);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->lblMostrar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtN);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Teorena3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int numero, factorial = 1;
		int Mostrar;

		if (txtN->Text=="") {
			MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
		else
		{
			numero = Convert::ToDouble(this->txtN->Text);

			for (int i = 1; i <= numero - 1; i++) {
				factorial = factorial * i;
			}
			Mostrar = numero - 1;

			this->lblMostrar->Text = ("Operación:     " + "(n-1)!  =  " + numero + " - 1 = " + Mostrar + "!");


			this->txtResultado->Text = Convert::ToString(factorial);

		}
		
	}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtN->Text = "";
	this->txtResultado->Text = "";
	this->lblMostrar->Text = "";
}
};
}
