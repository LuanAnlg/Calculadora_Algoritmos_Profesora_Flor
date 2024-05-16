#pragma once

#include "Encabezado.h"

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Calculadora
	/// </summary>
	public ref class Calculadora_formulario : public System::Windows::Forms::Form
	{
	public:
		Calculadora_formulario(void)
		{
			calculadora = new class_Calculadora();
			numero = Numero::A;
			
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Calculadora_formulario()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container^ components;
		System::Windows::Forms::TextBox^ tbx_texto;

		System::Windows::Forms::Button^ btn_7;
		System::Windows::Forms::Button^ btn_8;
		System::Windows::Forms::Button^ btn_9;
		System::Windows::Forms::Button^ btn_division;
		System::Windows::Forms::Button^ btn_4;
		System::Windows::Forms::Button^ btn_5;
		System::Windows::Forms::Button^ btn_6;
		System::Windows::Forms::Button^ btn_multiplicacion;
		System::Windows::Forms::Button^ btn_1;
		System::Windows::Forms::Button^ btn_2;
		System::Windows::Forms::Button^ btn_3;
		System::Windows::Forms::Button^ btn_resta;
		System::Windows::Forms::Button^ btn_0;
		System::Windows::Forms::Button^ btn_clr;
		System::Windows::Forms::Button^ btn_igual;
		System::Windows::Forms::Button^ btn_suma;

		class_Calculadora* calculadora;
		Numero numero;
		Operacion operacion;
	private: System::Windows::Forms::Button^ btn_tocame;

	private: System::Windows::Forms::Button^ btn_potenciacion;
	private: System::Windows::Forms::Button^ btn_radicacion;
		   String^ stringConjunto;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->tbx_texto = (gcnew System::Windows::Forms::TextBox());
			   this->btn_7 = (gcnew System::Windows::Forms::Button());
			   this->btn_8 = (gcnew System::Windows::Forms::Button());
			   this->btn_9 = (gcnew System::Windows::Forms::Button());
			   this->btn_division = (gcnew System::Windows::Forms::Button());
			   this->btn_4 = (gcnew System::Windows::Forms::Button());
			   this->btn_5 = (gcnew System::Windows::Forms::Button());
			   this->btn_6 = (gcnew System::Windows::Forms::Button());
			   this->btn_multiplicacion = (gcnew System::Windows::Forms::Button());
			   this->btn_1 = (gcnew System::Windows::Forms::Button());
			   this->btn_2 = (gcnew System::Windows::Forms::Button());
			   this->btn_3 = (gcnew System::Windows::Forms::Button());
			   this->btn_resta = (gcnew System::Windows::Forms::Button());
			   this->btn_0 = (gcnew System::Windows::Forms::Button());
			   this->btn_clr = (gcnew System::Windows::Forms::Button());
			   this->btn_igual = (gcnew System::Windows::Forms::Button());
			   this->btn_suma = (gcnew System::Windows::Forms::Button());
			   this->btn_tocame = (gcnew System::Windows::Forms::Button());
			   this->btn_potenciacion = (gcnew System::Windows::Forms::Button());
			   this->btn_radicacion = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // tbx_texto
			   // 
			   this->tbx_texto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tbx_texto->Location = System::Drawing::Point(12, 12);
			   this->tbx_texto->Multiline = true;
			   this->tbx_texto->Name = L"tbx_texto";
			   this->tbx_texto->Size = System::Drawing::Size(318, 50);
			   this->tbx_texto->TabIndex = 0;
			   // 
			   // btn_7
			   // 
			   this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_7->Location = System::Drawing::Point(12, 68);
			   this->btn_7->Name = L"btn_7";
			   this->btn_7->Size = System::Drawing::Size(75, 50);
			   this->btn_7->TabIndex = 1;
			   this->btn_7->Text = L"7";
			   this->btn_7->UseVisualStyleBackColor = true;
			   this->btn_7->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_7_Click);
			   // 
			   // btn_8
			   // 
			   this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_8->Location = System::Drawing::Point(93, 68);
			   this->btn_8->Name = L"btn_8";
			   this->btn_8->Size = System::Drawing::Size(75, 50);
			   this->btn_8->TabIndex = 2;
			   this->btn_8->Text = L"8";
			   this->btn_8->UseVisualStyleBackColor = true;
			   this->btn_8->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_8_Click);
			   // 
			   // btn_9
			   // 
			   this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_9->Location = System::Drawing::Point(174, 68);
			   this->btn_9->Name = L"btn_9";
			   this->btn_9->Size = System::Drawing::Size(75, 50);
			   this->btn_9->TabIndex = 3;
			   this->btn_9->Text = L"9";
			   this->btn_9->UseVisualStyleBackColor = true;
			   this->btn_9->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_9_Click);
			   // 
			   // btn_division
			   // 
			   this->btn_division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_division->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->btn_division->Location = System::Drawing::Point(255, 68);
			   this->btn_division->Name = L"btn_division";
			   this->btn_division->Size = System::Drawing::Size(75, 50);
			   this->btn_division->TabIndex = 4;
			   this->btn_division->Text = L"/";
			   this->btn_division->UseVisualStyleBackColor = true;
			   this->btn_division->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_division_Click);
			   // 
			   // btn_4
			   // 
			   this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_4->Location = System::Drawing::Point(12, 124);
			   this->btn_4->Name = L"btn_4";
			   this->btn_4->Size = System::Drawing::Size(75, 50);
			   this->btn_4->TabIndex = 5;
			   this->btn_4->Text = L"4";
			   this->btn_4->UseVisualStyleBackColor = true;
			   this->btn_4->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_4_Click);
			   // 
			   // btn_5
			   // 
			   this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_5->Location = System::Drawing::Point(93, 124);
			   this->btn_5->Name = L"btn_5";
			   this->btn_5->Size = System::Drawing::Size(75, 50);
			   this->btn_5->TabIndex = 6;
			   this->btn_5->Text = L"5";
			   this->btn_5->UseVisualStyleBackColor = true;
			   this->btn_5->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_5_Click);
			   // 
			   // btn_6
			   // 
			   this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_6->Location = System::Drawing::Point(174, 124);
			   this->btn_6->Name = L"btn_6";
			   this->btn_6->Size = System::Drawing::Size(75, 50);
			   this->btn_6->TabIndex = 7;
			   this->btn_6->Text = L"6";
			   this->btn_6->UseVisualStyleBackColor = true;
			   this->btn_6->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_6_Click);
			   // 
			   // btn_multiplicacion
			   // 
			   this->btn_multiplicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->btn_multiplicacion->Location = System::Drawing::Point(255, 124);
			   this->btn_multiplicacion->Name = L"btn_multiplicacion";
			   this->btn_multiplicacion->Size = System::Drawing::Size(75, 50);
			   this->btn_multiplicacion->TabIndex = 8;
			   this->btn_multiplicacion->Text = L"x";
			   this->btn_multiplicacion->UseVisualStyleBackColor = true;
			   this->btn_multiplicacion->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_multiplicacion_Click);
			   // 
			   // btn_1
			   // 
			   this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_1->Location = System::Drawing::Point(12, 180);
			   this->btn_1->Name = L"btn_1";
			   this->btn_1->Size = System::Drawing::Size(75, 50);
			   this->btn_1->TabIndex = 9;
			   this->btn_1->Text = L"1";
			   this->btn_1->UseVisualStyleBackColor = true;
			   this->btn_1->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_1_Click);
			   // 
			   // btn_2
			   // 
			   this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_2->Location = System::Drawing::Point(93, 180);
			   this->btn_2->Name = L"btn_2";
			   this->btn_2->Size = System::Drawing::Size(75, 50);
			   this->btn_2->TabIndex = 10;
			   this->btn_2->Text = L"2";
			   this->btn_2->UseVisualStyleBackColor = true;
			   this->btn_2->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_2_Click);
			   // 
			   // btn_3
			   // 
			   this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_3->Location = System::Drawing::Point(174, 180);
			   this->btn_3->Name = L"btn_3";
			   this->btn_3->Size = System::Drawing::Size(75, 50);
			   this->btn_3->TabIndex = 11;
			   this->btn_3->Text = L"3";
			   this->btn_3->UseVisualStyleBackColor = true;
			   this->btn_3->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_3_Click);
			   // 
			   // btn_resta
			   // 
			   this->btn_resta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_resta->Location = System::Drawing::Point(255, 180);
			   this->btn_resta->Name = L"btn_resta";
			   this->btn_resta->Size = System::Drawing::Size(75, 50);
			   this->btn_resta->TabIndex = 12;
			   this->btn_resta->Text = L"-";
			   this->btn_resta->UseVisualStyleBackColor = true;
			   this->btn_resta->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_resta_Click);
			   // 
			   // btn_0
			   // 
			   this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_0->Location = System::Drawing::Point(93, 236);
			   this->btn_0->Name = L"btn_0";
			   this->btn_0->Size = System::Drawing::Size(75, 50);
			   this->btn_0->TabIndex = 13;
			   this->btn_0->Text = L"0";
			   this->btn_0->UseVisualStyleBackColor = true;
			   this->btn_0->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_0_Click);
			   // 
			   // btn_clr
			   // 
			   this->btn_clr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_clr->Location = System::Drawing::Point(12, 236);
			   this->btn_clr->Name = L"btn_clr";
			   this->btn_clr->Size = System::Drawing::Size(75, 50);
			   this->btn_clr->TabIndex = 14;
			   this->btn_clr->Text = L"CLR";
			   this->btn_clr->UseVisualStyleBackColor = true;
			   this->btn_clr->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_clr_Click);
			   // 
			   // btn_igual
			   // 
			   this->btn_igual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_igual->Location = System::Drawing::Point(12, 292);
			   this->btn_igual->Name = L"btn_igual";
			   this->btn_igual->Size = System::Drawing::Size(156, 50);
			   this->btn_igual->TabIndex = 15;
			   this->btn_igual->Text = L"=";
			   this->btn_igual->UseVisualStyleBackColor = true;
			   this->btn_igual->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_igual_Click);
			   // 
			   // btn_suma
			   // 
			   this->btn_suma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_suma->Location = System::Drawing::Point(255, 236);
			   this->btn_suma->Name = L"btn_suma";
			   this->btn_suma->Size = System::Drawing::Size(75, 50);
			   this->btn_suma->TabIndex = 16;
			   this->btn_suma->Text = L"+";
			   this->btn_suma->UseVisualStyleBackColor = true;
			   this->btn_suma->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_suma_Click);
			   // 
			   // btn_tocame
			   // 
			   this->btn_tocame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_tocame->Location = System::Drawing::Point(175, 236);
			   this->btn_tocame->Name = L"btn_tocame";
			   this->btn_tocame->Size = System::Drawing::Size(75, 50);
			   this->btn_tocame->TabIndex = 17;
			   this->btn_tocame->Text = L"Tocame";
			   this->btn_tocame->UseVisualStyleBackColor = true;
			   this->btn_tocame->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_tocame_Click);
			   // 
			   // btn_potenciacion
			   // 
			   this->btn_potenciacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->btn_potenciacion->Location = System::Drawing::Point(175, 292);
			   this->btn_potenciacion->Name = L"btn_potenciacion";
			   this->btn_potenciacion->Size = System::Drawing::Size(75, 50);
			   this->btn_potenciacion->TabIndex = 18;
			   this->btn_potenciacion->Text = L"^";
			   this->btn_potenciacion->UseVisualStyleBackColor = true;
			   this->btn_potenciacion->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_potenciacion_Click);
			   // 
			   // btn_radicacion
			   // 
			   this->btn_radicacion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_radicacion->Location = System::Drawing::Point(255, 292);
			   this->btn_radicacion->Name = L"btn_radicacion";
			   this->btn_radicacion->Size = System::Drawing::Size(75, 50);
			   this->btn_radicacion->TabIndex = 19;
			   this->btn_radicacion->Text = L"v";
			   this->btn_radicacion->UseVisualStyleBackColor = true;
			   this->btn_radicacion->Click += gcnew System::EventHandler(this, &Calculadora_formulario::btn_radicacion_Click);
			   // 
			   // Calculadora_formulario
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(354, 351);
			   this->Controls->Add(this->btn_radicacion);
			   this->Controls->Add(this->btn_potenciacion);
			   this->Controls->Add(this->btn_tocame);
			   this->Controls->Add(this->btn_suma);
			   this->Controls->Add(this->btn_igual);
			   this->Controls->Add(this->btn_clr);
			   this->Controls->Add(this->btn_0);
			   this->Controls->Add(this->btn_resta);
			   this->Controls->Add(this->btn_3);
			   this->Controls->Add(this->btn_2);
			   this->Controls->Add(this->btn_1);
			   this->Controls->Add(this->btn_multiplicacion);
			   this->Controls->Add(this->btn_6);
			   this->Controls->Add(this->btn_5);
			   this->Controls->Add(this->btn_4);
			   this->Controls->Add(this->btn_division);
			   this->Controls->Add(this->btn_9);
			   this->Controls->Add(this->btn_8);
			   this->Controls->Add(this->btn_7);
			   this->Controls->Add(this->tbx_texto);
			   this->Name = L"Calculadora_formulario";
			   this->Text = L"Calculadora";
			   this->Load += gcnew System::EventHandler(this, &Calculadora_formulario::Calculadora_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void Calculadora_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn_0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(tbx_texto->Text)) {
			return;
		}
		else {
			tbx_texto->Text += "0";
			switch (numero)
			{
			case Numero::A: calculadora->setNuevoNumeroA(0); break;
			case Numero::B: calculadora->setNuevoNumeroB(0); break;
			default: break;
			}
		}
	}
	private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "1";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(1); break;
		case Numero::B: calculadora->setNuevoNumeroB(1); break;
		default: break;
		}
	}
	private: System::Void btn_2_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "2";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(2); break;
		case Numero::B: calculadora->setNuevoNumeroB(2); break;
		default: break;
		}
	}
	private: System::Void btn_3_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "3";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(3); break;
		case Numero::B: calculadora->setNuevoNumeroB(3); break;
		default: break;
		}
	}
	private: System::Void btn_4_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "4";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(4); break;
		case Numero::B: calculadora->setNuevoNumeroB(4); break;
		default: break;
		}
	}

	private: System::Void btn_5_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "5";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(5); break;
		case Numero::B: calculadora->setNuevoNumeroB(5); break;
		default: break;
		}
	}

	private: System::Void btn_6_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "6";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(6); break;
		case Numero::B: calculadora->setNuevoNumeroB(6); break;
		default: break;
		}
	}

	private: System::Void btn_7_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "7";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(7); break;
		case Numero::B: calculadora->setNuevoNumeroB(7); break;
		default: break;
		}
	}

	private: System::Void btn_8_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "8";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(8); break;
		case Numero::B: calculadora->setNuevoNumeroB(8); break;
		default: break;
		}
	}

	private: System::Void btn_9_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Text += "9";
		switch (numero)
		{
		case Numero::A: calculadora->setNuevoNumeroA(9); break;
		case Numero::B: calculadora->setNuevoNumeroB(9); break;
		default: break;
		}
	}

	private: System::Void btn_division_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		numero = Numero::B;
		operacion = Operacion::DIVISION;
	}

	private: System::Void btn_multiplicacion_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		numero = Numero::B;
		operacion = Operacion::MULTIPLICACION;
	}

	

	private: System::Void btn_resta_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		numero = Numero::B;
		operacion = Operacion::RESTA;
	}

	private: System::Void btn_suma_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		numero = Numero::B;
		operacion = Operacion::SUMA;
	}

	private: System::Void btn_potenciacion_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		numero = Numero::B;
		operacion = Operacion::POTENCIACION;
	}

	private: System::Void btn_radicacion_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		numero = Numero::B;
		operacion = Operacion::RADICACION;
	}

	private: System::Void btn_tocame_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		tbx_texto->Text = "Curiosin el papu :^ (CLR)";
	}

	private: System::Void btn_igual_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numero == Numero::A || calculadora->vecNumeroBVacio()) {
			return;
		}
		else {

			int float_resultado = calculadora->calcular(operacion);
			String^ String_resultado = float_resultado.ToString();
			tbx_texto->Clear();
			tbx_texto->Text = String_resultado;
		}
	}

	private: System::Void btn_clr_Click(System::Object^ sender, System::EventArgs^ e) {
		tbx_texto->Clear();
		numero = Numero::A;
		calculadora->resetear();
	}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
