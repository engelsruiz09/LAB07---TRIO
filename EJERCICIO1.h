#pragma once

namespace LAB07 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de EJERCICIO1
	/// </summary>
	public ref class EJERCICIO1 : public System::Windows::Forms::Form
	{
	public:
		EJERCICIO1(void)
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
		~EJERCICIO1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbsearch;
	protected:
	private: System::Windows::Forms::TextBox^ txtnumbuscar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnsearchnum;
	private: System::Windows::Forms::Button^ btnarreglo;
	private: System::Windows::Forms::TextBox^ txtArregloLength;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EJERCICIO1::typeid));
			this->cbsearch = (gcnew System::Windows::Forms::ComboBox());
			this->txtnumbuscar = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnsearchnum = (gcnew System::Windows::Forms::Button());
			this->btnarreglo = (gcnew System::Windows::Forms::Button());
			this->txtArregloLength = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cbsearch
			// 
			this->cbsearch->BackColor = System::Drawing::Color::Black;
			this->cbsearch->Enabled = false;
			this->cbsearch->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbsearch->ForeColor = System::Drawing::Color::White;
			this->cbsearch->FormattingEnabled = true;
			this->cbsearch->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Método Secuencial", L"Método Binario", L"Método Función Hash" });
			this->cbsearch->Location = System::Drawing::Point(63, 203);
			this->cbsearch->Name = L"cbsearch";
			this->cbsearch->Size = System::Drawing::Size(165, 29);
			this->cbsearch->TabIndex = 21;
			// 
			// txtnumbuscar
			// 
			this->txtnumbuscar->BackColor = System::Drawing::Color::Black;
			this->txtnumbuscar->Enabled = false;
			this->txtnumbuscar->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtnumbuscar->ForeColor = System::Drawing::Color::White;
			this->txtnumbuscar->Location = System::Drawing::Point(63, 154);
			this->txtnumbuscar->Name = L"txtnumbuscar";
			this->txtnumbuscar->Size = System::Drawing::Size(165, 28);
			this->txtnumbuscar->TabIndex = 20;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(12, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(280, 25);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Ingrese el número a buscar:";
			// 
			// btnsearchnum
			// 
			this->btnsearchnum->BackColor = System::Drawing::Color::Black;
			this->btnsearchnum->Enabled = false;
			this->btnsearchnum->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnsearchnum->ForeColor = System::Drawing::Color::White;
			this->btnsearchnum->Location = System::Drawing::Point(301, 154);
			this->btnsearchnum->Name = L"btnsearchnum";
			this->btnsearchnum->Size = System::Drawing::Size(134, 61);
			this->btnsearchnum->TabIndex = 18;
			this->btnsearchnum->Text = L"Buscar Número";
			this->btnsearchnum->UseVisualStyleBackColor = false;
			this->btnsearchnum->Click += gcnew System::EventHandler(this, &EJERCICIO1::btnsearchnum_Click_1);
			// 
			// btnarreglo
			// 
			this->btnarreglo->BackColor = System::Drawing::Color::Black;
			this->btnarreglo->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnarreglo->ForeColor = System::Drawing::Color::White;
			this->btnarreglo->Location = System::Drawing::Point(301, 47);
			this->btnarreglo->Name = L"btnarreglo";
			this->btnarreglo->Size = System::Drawing::Size(134, 53);
			this->btnarreglo->TabIndex = 17;
			this->btnarreglo->Text = L"Crear Arreglo";
			this->btnarreglo->UseVisualStyleBackColor = false;
			this->btnarreglo->Click += gcnew System::EventHandler(this, &EJERCICIO1::btnarreglo_Click_1);
			// 
			// txtArregloLength
			// 
			this->txtArregloLength->BackColor = System::Drawing::Color::Black;
			this->txtArregloLength->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtArregloLength->ForeColor = System::Drawing::Color::White;
			this->txtArregloLength->Location = System::Drawing::Point(63, 58);
			this->txtArregloLength->Name = L"txtArregloLength";
			this->txtArregloLength->Size = System::Drawing::Size(165, 28);
			this->txtArregloLength->TabIndex = 16;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(309, 25);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Ingrese el tamaño del arreglo: ";
			// 
			// EJERCICIO1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(506, 262);
			this->Controls->Add(this->cbsearch);
			this->Controls->Add(this->txtnumbuscar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnsearchnum);
			this->Controls->Add(this->btnarreglo);
			this->Controls->Add(this->txtArregloLength);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"EJERCICIO1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EJERCICIO1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//inge no se por que no cuenta bien la posicion xd pero para el primero que es el secuencial si cuenta y para el hash tambien pero cuando le da al binario tiene que dar en los demas para poder encontrar la posicion no se por que nos paso eso ;/// (piedad ;( ) 
		//con arreglos pequeños cuentan bien 
		private:
			ArrayList^ arreglodenumeros;//el arreglo en si
			Hashtable^ mitablahash;//tuvimos que crear la tabla ya que no sabia como usar esa clase que pedia el laboratorio XD
			int arreglolenght;//el tamano que ingresa el usuario


			int Hash(int value) {
				arreglodenumeros->Sort();
				int posicion = value % arreglolenght * 2;
				if (System::Convert::ToInt16(mitablahash[posicion]) == value)
				{
					return posicion;
				}
				else
				{
					while (System::Convert::ToInt16(mitablahash[posicion]) != value)
					{
						posicion++;
					}
					return posicion;
				}
				return -1;//es que no encontro nada 
			}

			void parallenartablahash() {
				mitablahash = gcnew Hashtable(arreglolenght * 2);
				int keys = 0;
				for each (int n in arreglodenumeros) {// n = un numero  use for each ya que es una manera mas eficiente que un for normal
					keys = n % arreglolenght * 2;//las llaves 
					while (mitablahash[keys] != nullptr)
					{
						keys++;

					}
					mitablahash->Add(keys, n);
				}
			}

			void generarnumerosaleatorio() {// para los numeros aleatorios
				arreglodenumeros = gcnew ArrayList();
				Random^ rand = gcnew Random();
				for (int i = 0; i < arreglolenght; i++)
				{
					arreglodenumeros->Add(rand->Next(0, 100));
				}
			}

			void mostrararreglo() {
				String^ array = "";
				for each (int numero in arreglodenumeros)// objet var in collection_to_loop
				{
					array += numero + "   ";//para cuando se muestre el show xd se mire el arreglo separado
				}
				MessageBox::Show(array);
			}



			int lineal_search(int value) {//buscarlos secuencialemente con el arreglo
				for (int i = 0; i < arreglolenght; i++)
				{
					if (value == System::Convert::ToInt16(arreglodenumeros[i]))
					{
						return i + 1;
					}
				}
				return -1;// es que no encontro nada
			}
			// value guarda el valor que ingresa el usuario para buscar
			int binary_search(int value) {// buscarlos binario con el arreglo
				int first = 0;
				int middle;
				int last = arreglolenght - 1;
				while (first <= last)
				{
					middle = (first + last) / 2;
					if (value == System::Convert::ToInt16(arreglodenumeros[middle]))
					{
						return middle + 1;
					}
					else
					{
						if (System::Convert::ToInt16(arreglodenumeros[middle]) > value)
						{
							last = middle - 1;
						}
						else
						{
							first = middle + 1;
						}
					}
				}
				return -1;// es que no encontro nada
			}

private: System::Void btnarreglo_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		arreglolenght = Convert::ToInt32(txtArregloLength->Text);
		generarnumerosaleatorio();
		mostrararreglo();
		parallenartablahash();

		label2->Enabled = true;
		txtnumbuscar->Enabled = true;
		btnsearchnum->Enabled = true;
		cbsearch->Enabled = true;

	}
	catch (Exception^ e)
	{
		MessageBox::Show("ERROR DETECTADO" + e->Message, "INGRESE UN DATO VALIDO", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnsearchnum_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int value = System::Convert::ToInt32(txtnumbuscar->Text);
		Stopwatch^ watch = gcnew System::Diagnostics::Stopwatch();
		watch->Start();
		int n;//posicion
		switch (cbsearch->SelectedIndex)
		{
		case 0:
			n = lineal_search(value);
			break;
		case 1:
			
			n = binary_search(value);
			break;
		case 2:
			n = Hash(value);
			break;
		}

		if (n == -1)//si es que no encontro nada hacer lo siguiente
		{
			MessageBox::Show("EL VALOR BUSCADO NO SE ENCUENTRA EN EL ARREGLO", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else
		{
			MessageBox::Show(" LA POSICION EN LA QUE SE ENCUENTRA EL VALOR ES : " + n.ToString(), "OPERACION EXISTOSA ");
		}
		for (int i = 0; i < 1000; i++)
		{
			Console::Write(i);
		}
		watch->Stop();
		MessageBox::Show("El tiempo en el que se ejecutó la búsqueda fue de: " + System::Convert::ToString(watch->ElapsedMilliseconds + " ms"));
	}
	catch (...)
	{
		MessageBox::Show("INGRESE UN DATO VALIDO");
	}
}
};
}
