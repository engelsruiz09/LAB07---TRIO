#pragma once
#include "EJERCICIO1.h"
#include "MyForm.h"
#include "EJERCICIO2.h"
namespace LAB07 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnejer1;
	protected:
	private: System::Windows::Forms::Button^ btnejer2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btnejer1 = (gcnew System::Windows::Forms::Button());
			this->btnejer2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnejer1
			// 
			this->btnejer1->BackColor = System::Drawing::Color::Tomato;
			this->btnejer1->ForeColor = System::Drawing::Color::White;
			this->btnejer1->Location = System::Drawing::Point(23, 127);
			this->btnejer1->Name = L"btnejer1";
			this->btnejer1->Size = System::Drawing::Size(164, 46);
			this->btnejer1->TabIndex = 0;
			this->btnejer1->Text = L"EJERCICIO 1";
			this->btnejer1->UseVisualStyleBackColor = false;
			this->btnejer1->Click += gcnew System::EventHandler(this, &MyForm::btnejer1_Click);
			// 
			// btnejer2
			// 
			this->btnejer2->BackColor = System::Drawing::Color::SteelBlue;
			this->btnejer2->ForeColor = System::Drawing::Color::White;
			this->btnejer2->Location = System::Drawing::Point(222, 127);
			this->btnejer2->Name = L"btnejer2";
			this->btnejer2->Size = System::Drawing::Size(164, 46);
			this->btnejer2->TabIndex = 1;
			this->btnejer2->Text = L"EJERCICIO 2";
			this->btnejer2->UseVisualStyleBackColor = false;
			this->btnejer2->Click += gcnew System::EventHandler(this, &MyForm::btnejer2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(118, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"LABORATORIO 7 ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(2, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(422, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"“Búsquedas y Programación Orientada a Objetos”";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(425, 248);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnejer2);
			this->Controls->Add(this->btnejer1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnejer1_Click(System::Object^ sender, System::EventArgs^ e) {
		EJERCICIO1^ imprimir = gcnew EJERCICIO1();
		imprimir->ShowDialog();
		this->Show();
	}
private: System::Void btnejer2_Click(System::Object^ sender, System::EventArgs^ e) {
	EJERCICIO2^ imprimir2 = gcnew EJERCICIO2();
	imprimir2->ShowDialog();
	this->Show();
}
};
}
