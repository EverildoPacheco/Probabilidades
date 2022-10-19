#pragma once
#include "menu.h";
namespace estadistica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de inicio
	/// </summary>
	public ref class inicio : public System::Windows::Forms::Form
	{
	public:
		inicio(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~inicio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btbInicio;
	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btbInicio = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btbInicio
			// 
			this->btbInicio->Location = System::Drawing::Point(188, 176);
			this->btbInicio->Name = L"btbInicio";
			this->btbInicio->Size = System::Drawing::Size(130, 69);
			this->btbInicio->TabIndex = 0;
			this->btbInicio->Text = L"INICIAR";
			this->btbInicio->UseVisualStyleBackColor = true;
			this->btbInicio->Click += gcnew System::EventHandler(this, &inicio::btbInicio_Click);
			// 
			// inicio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(536, 409);
			this->Controls->Add(this->btbInicio);
			this->Name = L"inicio";
			this->Text = L"inicio";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btbInicio_Click(System::Object^ sender, System::EventArgs^ e) {
		estadistica::menu^ inicio = gcnew estadistica::menu();
		inicio->Show();
	}
	};
}
