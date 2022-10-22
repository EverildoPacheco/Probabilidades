#pragma once

namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Teorema7
	/// </summary>
	public ref class Teorema7 : public System::Windows::Forms::Form
	{
	public:
		Teorema7(void)
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
		~Teorema7()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtA;
	private: System::Windows::Forms::TextBox^ txtAB;
	private: System::Windows::Forms::TextBox^ txtB;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ txtResultado;

	private: System::Windows::Forms::Label^ label10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teorema7::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtA = (gcnew System::Windows::Forms::TextBox());
			this->txtAB = (gcnew System::Windows::Forms::TextBox());
			this->txtB = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtResultado = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->lblMostrar = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(186, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 31);
			this->label5->TabIndex = 0;
			this->label5->Text = L"TEOREMA # 7";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\5307941.png";
			this->pictureBox3->Location = System::Drawing::Point(245, 410);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(86, 57);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Teorema7::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\x2.png";
			this->pictureBox4->Location = System::Drawing::Point(491, 30);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(37, 31);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &Teorema7::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->ImageLocation = L"C:\\Users\\Usuario\\source\\repos\\probabilidades\\estadistica\\imagenes\\mennu.png";
			this->pictureBox5->Location = System::Drawing::Point(446, 30);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(39, 31);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(58, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(459, 19);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Si A y B son dos eventos, entonces P(A U B)= P(A) + P(B) - P(A n B)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(54, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(287, 15);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Ingrese la probabilidad de que suceda a:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(48, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(294, 15);
			this->label8->TabIndex = 29;
			this->label8->Text = L" Ingrese la probabilidad de que suceda b:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(27, 181);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(315, 15);
			this->label9->TabIndex = 30;
			this->label9->Text = L"Ingrese la probabilidad de que suceda a y b:";
			this->label9->Click += gcnew System::EventHandler(this, &Teorema7::label9_Click);
			// 
			// txtA
			// 
			this->txtA->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtA->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtA->Location = System::Drawing::Point(347, 118);
			this->txtA->Name = L"txtA";
			this->txtA->Size = System::Drawing::Size(100, 26);
			this->txtA->TabIndex = 31;
			// 
			// txtAB
			// 
			this->txtAB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtAB->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAB->Location = System::Drawing::Point(347, 177);
			this->txtAB->Name = L"txtAB";
			this->txtAB->Size = System::Drawing::Size(100, 26);
			this->txtAB->TabIndex = 32;
			// 
			// txtB
			// 
			this->txtB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtB->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtB->Location = System::Drawing::Point(347, 148);
			this->txtB->Name = L"txtB";
			this->txtB->Size = System::Drawing::Size(100, 26);
			this->txtB->TabIndex = 33;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(245, 235);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 42);
			this->button1->TabIndex = 34;
			this->button1->Text = L"CALCULAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Teorema7::button1_Click);
			// 
			// txtResultado
			// 
			this->txtResultado->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->txtResultado->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtResultado->Location = System::Drawing::Point(233, 356);
			this->txtResultado->Name = L"txtResultado";
			this->txtResultado->Size = System::Drawing::Size(100, 26);
			this->txtResultado->TabIndex = 35;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(215, 335);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(136, 18);
			this->label10->TabIndex = 36;
			this->label10->Text = L"El resultado es:";
			// 
			// lblMostrar
			// 
			this->lblMostrar->AutoSize = true;
			this->lblMostrar->BackColor = System::Drawing::Color::Transparent;
			this->lblMostrar->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMostrar->Location = System::Drawing::Point(106, 295);
			this->lblMostrar->Name = L"lblMostrar";
			this->lblMostrar->Size = System::Drawing::Size(16, 18);
			this->lblMostrar->TabIndex = 37;
			this->lblMostrar->Text = L".";
			// 
			// Teorema7
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(575, 491);
			this->Controls->Add(this->lblMostrar);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtResultado);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtB);
			this->Controls->Add(this->txtAB);
			this->Controls->Add(this->txtA);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label5);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Teorema7";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	float a, b, a_b;
	float fin;
	if (this->txtA->Text == "" || this->txtB->Text == "" || this->txtAB->Text == "") {
		MessageBox::Show("El campo no puede estar vacio", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	else
	{
		a = Convert::ToDouble(this->txtA->Text);
		b = Convert::ToDouble(this->txtB->Text);
		a_b = Convert::ToDouble(this->txtAB->Text);

		fin = a + b - a_b;

		this->lblMostrar->Text = ( "P(A U B) =" + "P(A)" + "P(B)" "- P(A n B) = " + a+"+" + b+"-" + a_b);
		this->txtResultado->Text = Convert::ToString(fin);
	}
	
	
	
	//for (int i = 1; i <= a + 1, b - 1; i++) {
	//fin = a + b - a_b;
	
	//}
	//MessageBox::Show("El campo no puede estar vacio", "a_b", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->txtA->Text = "";
	this->txtB->Text = "";
	this->txtAB->Text = "";
	this->txtResultado->Text = "";
	this->lblMostrar->Text = "";
}
};
}
