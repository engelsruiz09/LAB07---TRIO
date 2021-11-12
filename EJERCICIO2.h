#pragma once
#include "Poligonos.h"
#include "DobleList.h"
#include "Node.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include <math.h>

namespace LAB07 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Resumen de EJERCICIO2
	/// </summary>
	public ref class EJERCICIO2 : public System::Windows::Forms::Form
	{
	public:
		DobleList<Poligonos*>* myFigureList;
		EJERCICIO2(void)
		{
			InitializeComponent();
			myFigureList = new DobleList<Poligonos*>();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~EJERCICIO2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ Perimetrolist;
	private: System::Windows::Forms::ListBox^ Arealist;
	private: System::Windows::Forms::ListBox^ Figuralist;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ btninsertrian;

	private: System::Windows::Forms::TextBox^ txtanchotriangulo;
	private: System::Windows::Forms::TextBox^ txtaltotriangulo;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ pnlList;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ btnCuadrado;

	private: System::Windows::Forms::TextBox^ txtanchocuadrado;
	private: System::Windows::Forms::TextBox^ txtboxcuadradoalto;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btninserrectan;
	private: System::Windows::Forms::TextBox^ txtRectAncho;


	private: System::Windows::Forms::TextBox^ txtRectAlto;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ Idlist;
	private: System::Windows::Forms::ListBox^ colorlist;
	private: System::Windows::Forms::Label^ label11;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EJERCICIO2::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Perimetrolist = (gcnew System::Windows::Forms::ListBox());
			this->Arealist = (gcnew System::Windows::Forms::ListBox());
			this->Figuralist = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btninsertrian = (gcnew System::Windows::Forms::Button());
			this->txtanchotriangulo = (gcnew System::Windows::Forms::TextBox());
			this->txtaltotriangulo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pnlList = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->txtanchocuadrado = (gcnew System::Windows::Forms::TextBox());
			this->txtboxcuadradoalto = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btninserrectan = (gcnew System::Windows::Forms::Button());
			this->txtRectAncho = (gcnew System::Windows::Forms::TextBox());
			this->txtRectAlto = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Idlist = (gcnew System::Windows::Forms::ListBox());
			this->colorlist = (gcnew System::Windows::Forms::ListBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Black;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(888, 7);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 20);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Area";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Black;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(985, 7);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 20);
			this->label5->TabIndex = 26;
			this->label5->Text = L"Perimetro";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Black;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(768, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 20);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Figura";
			// 
			// Perimetrolist
			// 
			this->Perimetrolist->BackColor = System::Drawing::Color::Pink;
			this->Perimetrolist->FormattingEnabled = true;
			this->Perimetrolist->Location = System::Drawing::Point(976, 32);
			this->Perimetrolist->Name = L"Perimetrolist";
			this->Perimetrolist->Size = System::Drawing::Size(96, 407);
			this->Perimetrolist->TabIndex = 24;
			// 
			// Arealist
			// 
			this->Arealist->BackColor = System::Drawing::Color::Thistle;
			this->Arealist->FormattingEnabled = true;
			this->Arealist->Location = System::Drawing::Point(861, 32);
			this->Arealist->Name = L"Arealist";
			this->Arealist->Size = System::Drawing::Size(95, 407);
			this->Arealist->TabIndex = 23;
			// 
			// Figuralist
			// 
			this->Figuralist->BackColor = System::Drawing::Color::LightBlue;
			this->Figuralist->FormattingEnabled = true;
			this->Figuralist->Location = System::Drawing::Point(747, 32);
			this->Figuralist->Name = L"Figuralist";
			this->Figuralist->Size = System::Drawing::Size(97, 407);
			this->Figuralist->TabIndex = 22;
			this->Figuralist->SelectedIndexChanged += gcnew System::EventHandler(this, &EJERCICIO2::Figuralist_SelectedIndexChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::CadetBlue;
			this->groupBox3->Controls->Add(this->btninsertrian);
			this->groupBox3->Controls->Add(this->txtanchotriangulo);
			this->groupBox3->Controls->Add(this->txtaltotriangulo);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Location = System::Drawing::Point(24, 157);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 130);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Triangulo";
			// 
			// btninsertrian
			// 
			this->btninsertrian->Location = System::Drawing::Point(25, 101);
			this->btninsertrian->Name = L"btninsertrian";
			this->btninsertrian->Size = System::Drawing::Size(157, 23);
			this->btninsertrian->TabIndex = 4;
			this->btninsertrian->Text = L"Insertar Triangulo";
			this->btninsertrian->UseVisualStyleBackColor = true;
			this->btninsertrian->Click += gcnew System::EventHandler(this, &EJERCICIO2::btninsertrian_Click);
			// 
			// txtanchotriangulo
			// 
			this->txtanchotriangulo->Location = System::Drawing::Point(82, 67);
			this->txtanchotriangulo->Name = L"txtanchotriangulo";
			this->txtanchotriangulo->Size = System::Drawing::Size(100, 20);
			this->txtanchotriangulo->TabIndex = 3;
			// 
			// txtaltotriangulo
			// 
			this->txtaltotriangulo->Location = System::Drawing::Point(82, 34);
			this->txtaltotriangulo->Name = L"txtaltotriangulo";
			this->txtaltotriangulo->Size = System::Drawing::Size(100, 20);
			this->txtaltotriangulo->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(22, 67);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ancho:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(22, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Alto:";
			// 
			// pnlList
			// 
			this->pnlList->AutoScroll = true;
			this->pnlList->BackColor = System::Drawing::Color::DarkGray;
			this->pnlList->Location = System::Drawing::Point(230, 12);
			this->pnlList->Name = L"pnlList";
			this->pnlList->Size = System::Drawing::Size(501, 421);
			this->pnlList->TabIndex = 20;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::CadetBlue;
			this->groupBox2->Controls->Add(this->btnCuadrado);
			this->groupBox2->Controls->Add(this->txtanchocuadrado);
			this->groupBox2->Controls->Add(this->txtboxcuadradoalto);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(24, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 130);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Cuadrado";
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(25, 101);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(157, 23);
			this->btnCuadrado->TabIndex = 4;
			this->btnCuadrado->Text = L"Insertar Cuadrado";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &EJERCICIO2::btnCuadrado_Click);
			// 
			// txtanchocuadrado
			// 
			this->txtanchocuadrado->Location = System::Drawing::Point(82, 67);
			this->txtanchocuadrado->Name = L"txtanchocuadrado";
			this->txtanchocuadrado->Size = System::Drawing::Size(100, 20);
			this->txtanchocuadrado->TabIndex = 3;
			// 
			// txtboxcuadradoalto
			// 
			this->txtboxcuadradoalto->Location = System::Drawing::Point(82, 34);
			this->txtboxcuadradoalto->Name = L"txtboxcuadradoalto";
			this->txtboxcuadradoalto->Size = System::Drawing::Size(100, 20);
			this->txtboxcuadradoalto->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(22, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Ancho:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Alto:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::CadetBlue;
			this->groupBox1->Controls->Add(this->btninserrectan);
			this->groupBox1->Controls->Add(this->txtRectAncho);
			this->groupBox1->Controls->Add(this->txtRectAlto);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Location = System::Drawing::Point(24, 303);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 130);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Rectangulo";
			// 
			// btninserrectan
			// 
			this->btninserrectan->Location = System::Drawing::Point(25, 101);
			this->btninserrectan->Name = L"btninserrectan";
			this->btninserrectan->Size = System::Drawing::Size(157, 23);
			this->btninserrectan->TabIndex = 4;
			this->btninserrectan->Text = L"Insertar Rectángulo";
			this->btninserrectan->UseVisualStyleBackColor = true;
			this->btninserrectan->Click += gcnew System::EventHandler(this, &EJERCICIO2::btninserrectan_Click);
			// 
			// txtRectAncho
			// 
			this->txtRectAncho->Location = System::Drawing::Point(82, 67);
			this->txtRectAncho->Name = L"txtRectAncho";
			this->txtRectAncho->Size = System::Drawing::Size(100, 20);
			this->txtRectAncho->TabIndex = 3;
			// 
			// txtRectAlto
			// 
			this->txtRectAlto->Location = System::Drawing::Point(82, 34);
			this->txtRectAlto->Name = L"txtRectAlto";
			this->txtRectAlto->Size = System::Drawing::Size(100, 20);
			this->txtRectAlto->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 67);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ancho:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(22, 38);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Alto:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Black;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(1129, 7);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 20);
			this->label9->TabIndex = 29;
			this->label9->Text = L"ID";
			// 
			// Idlist
			// 
			this->Idlist->BackColor = System::Drawing::Color::MediumTurquoise;
			this->Idlist->FormattingEnabled = true;
			this->Idlist->Location = System::Drawing::Point(1092, 32);
			this->Idlist->Name = L"Idlist";
			this->Idlist->Size = System::Drawing::Size(96, 407);
			this->Idlist->TabIndex = 30;
			// 
			// colorlist
			// 
			this->colorlist->BackColor = System::Drawing::Color::NavajoWhite;
			this->colorlist->FormattingEnabled = true;
			this->colorlist->Location = System::Drawing::Point(1213, 32);
			this->colorlist->Name = L"colorlist";
			this->colorlist->Size = System::Drawing::Size(96, 407);
			this->colorlist->TabIndex = 31;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Black;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(1244, 7);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(46, 20);
			this->label11->TabIndex = 32;
			this->label11->Text = L"Color";
			// 
			// EJERCICIO2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1344, 457);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->colorlist);
			this->Controls->Add(this->Idlist);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Perimetrolist);
			this->Controls->Add(this->Arealist);
			this->Controls->Add(this->Figuralist);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->pnlList);
			this->Controls->Add(this->groupBox2);
			this->Name = L"EJERCICIO2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EJERCICIO2";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int ID = 1;
		public: int count;
	   void clearnode(Graphics^ canvas) {
		   Brush^ brush = gcnew SolidBrush(Color::Gray);
		   Brush^ brushstring = gcnew SolidBrush(Color::Gray);
		   canvas->FillRectangle(brush, RectangleF(0, 0, 20000, 20000));
	   }
	   void DrawNoderectangulo(Graphics^ canvas, double height, double width)
	   {
		   Brush^ brush = height == width ? gcnew SolidBrush(Color::Red) : gcnew SolidBrush(Color::Blue);
		   Brush^ brushstring = gcnew SolidBrush(Color::Blue);
		   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
		   //rectangulo
		   Point point1 = Point(0 + count, 0);
		   Point point2 = Point(width + count, 0);
		   Point point4 = Point(0 + count, height);
		   Point point3 = Point(width + count, height);

		   array<Point>^ curvePoints = { point1,point2,point3,point4 };
		   canvas->FillPolygon(brush, curvePoints);
	   }
	   void DrawNodetriangulo(Graphics^ canvas, double height, double width)
	   {
		   Brush^ brush = gcnew SolidBrush(Color::Yellow);
		   Brush^ brushstring = gcnew SolidBrush(Color::Yellow);
		   System::Drawing::Font^ fuente = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
		   //rectangulo
		   Point point1 = Point(0 + count, height);
		   Point point2 = Point(width + count, height);
		   Point point3 = Point((width / 2) + count, 0);

		   array<Point>^ curvePoints = { point1,point2,point3 };
		   canvas->FillPolygon(brush, curvePoints);
	   }

	   void dibujar(Poligonos* actual) {
		   int numero = actual->type;
		   switch (numero) {
		   case 1: case 2:
			   DrawNoderectangulo(pnlList->CreateGraphics(), actual->height, actual->width);
			   count = count + (actual->width) + 10;
			   break;
		   case 3:
			   DrawNodetriangulo(pnlList->CreateGraphics(), actual->height, actual->width);
			   count = count + (actual->width) + 10;
			   break;
		   default:
			   break;
		   }
	   }

	   void dibujar2() {
		   if (!myFigureList->IsEmpty()) {
			   count = 0;
			   Node<Poligonos*>* temp = myFigureList->start;
			   clearnode(pnlList->CreateGraphics());
			   for (int i = 0; i < myFigureList->count; i++) {
				   Poligonos* actual = temp->value;
				   dibujar(actual);
				   temp = temp->next;
			   }

		   }
	   }
	   void insertarlista(int tipo, double area, double perimetro,int id, String^ color) {
		   String^ escribir;
		   String^ escribir2 = "" + area;
		   String^ escribir3 = "" + perimetro;
		   String^ escribir4 = "" + id;
		   switch (tipo )
		   {
		   case 1:
			   escribir = "Cuadrado: ";
			   break;
		   case 2:
			   escribir = "Rectangulo: ";
			
			   break;
		   default:
			   escribir = "Triangulo: ";
			   break;
		   }
		   Figuralist->Items->Add(escribir);
		   Arealist->Items->Add(escribir2);
		   Perimetrolist->Items->Add(escribir3);
		   Idlist->Items->Add(escribir4);
		   colorlist->Items->Add(color);
	   }

private: System::Void btninsertrian_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		if ((txtaltotriangulo->Text->Trim() != "") && (txtanchotriangulo->Text->Trim() != "")) {
			Poligonos* newtriangulo = new Triangulo(ID++);
			newtriangulo->width = Convert::ToDouble(txtanchotriangulo->Text);
			newtriangulo->height = Convert::ToDouble(txtaltotriangulo->Text);
			newtriangulo->type = 3;
			newtriangulo->area = newtriangulo->GetArea();
			newtriangulo->perimeter = newtriangulo->GetPerimeter();
			myFigureList->InsertAtEnd(newtriangulo);
			dibujar2();
			insertarlista(3, newtriangulo->area, newtriangulo->perimeter,ID++,"Amarillo");
			MessageBox::Show("Triangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
	
}
private: System::Void btninserrectan_Click(System::Object^ sender, System::EventArgs^ e) {
	try 
	{
		if ((txtRectAlto->Text->Trim() != "") && (txtRectAncho->Text->Trim() != "")) {
			Poligonos* newRectangle = new Rectangulo(ID++);
			newRectangle->height = Convert::ToDouble(txtRectAlto->Text);
			newRectangle->width = Convert::ToDouble(txtRectAncho->Text);
			newRectangle->type = 2;
			newRectangle->area = newRectangle->GetArea();
			newRectangle->perimeter = newRectangle->GetPerimeter();
			myFigureList->InsertAtEnd(newRectangle);
			dibujar2();
			insertarlista(2, newRectangle->area, newRectangle->perimeter,ID++,"Azul");
			MessageBox::Show("Rectangulo insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

private: System::Void Figuralist_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
	try//para el cuadrado lo recomendable es que ingrese el mismo lado para que se dibuje de color rojo si no lo tomara como rectangulo
	{
		if ((txtboxcuadradoalto->Text->Trim() != "") && (txtanchocuadrado->Text->Trim() != "")) {
			Poligonos* newCuadrado = new Cuadrado(ID++);
			newCuadrado->height = Convert::ToDouble(txtboxcuadradoalto->Text);
			newCuadrado->width = Convert::ToDouble(txtanchocuadrado->Text);
			newCuadrado->type = 1;
			newCuadrado->area = newCuadrado->GetArea();
			newCuadrado->perimeter = newCuadrado->GetPerimeter();
			myFigureList->InsertAtEnd(newCuadrado);
			dibujar2();
			if (newCuadrado->height != newCuadrado->width)
			{
				
				MessageBox::Show("Error en las dimensiones del poligono", "Insersión inccorrecta", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				insertarlista(1, newCuadrado->area, newCuadrado->perimeter, ID, "Rojo");
				MessageBox::Show("Cuadrado insertado exitosamente, cantidad de elementos: " + myFigureList->count, "Insersión correcta", MessageBoxButtons::OK, MessageBoxIcon::Information);
				//en myfigurelist se guardan las figuras dibujadas no las que se muestran en las listas 
			}
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Error detectado: " + e->Message, "Valores incorrectos",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
