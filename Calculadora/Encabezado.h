#pragma once

#include <vector>
#include <cmath>
//#include <iostream>

enum class Operacion
{
	DIVISION,
	MULTIPLICACION,
	RESTA,
	SUMA,
	POTENCIACION,
	RADICACION
};

enum class Numero
{
	A,
	B
};

template <typename T>
struct Vec2
{
	T numeroA;
	T numeroB;
};

class class_Calculadora
{
private:

	Vec2<std::vector<float>> vec_numeros;
	Vec2<float> int_numeros;

	float float_resultado;

	float division() const
	{
		if (this->int_numeros.numeroB == 0) return 404;
		return this->int_numeros.numeroA / this->int_numeros.numeroB;
	}

	int multiplicacion() const
	{
		return this->int_numeros.numeroA * this->int_numeros.numeroB;
	}

	int resta() const
	{
		return this->int_numeros.numeroA - this->int_numeros.numeroB;
	}

	int suma() const
	{
		return this->int_numeros.numeroA + this->int_numeros.numeroB;
	}

	int potenciacion() const
	{
		return pow(this->int_numeros.numeroA, this->int_numeros.numeroB);
	}
	int radicacion() const
	{
		return pow(this->int_numeros.numeroA, (1 / this->int_numeros.numeroB));
	}

	void vecANumero()
	{
		if (!this->vec_numeros.numeroA.empty()) {
			int multiplicadorA = 1;
			for (int i = this->vec_numeros.numeroA.size() - 1; i >= 0; --i) {
				this->int_numeros.numeroA += this->vec_numeros.numeroA[i] * multiplicadorA;
				multiplicadorA *= 10;
			}
		}

		if (!this->vec_numeros.numeroB.empty()) {
			int multiplicadorB = 1;
			for (int i = this->vec_numeros.numeroB.size() - 1; i >= 0; --i) {
				this->int_numeros.numeroB += this->vec_numeros.numeroB[i] * multiplicadorB;
				multiplicadorB *= 10;
			}
		}

		//std::cout << int_numeros.numeroA << "\n";
		//std::cout << int_numeros.numeroB << "\n";
	}

public:

	class_Calculadora() :  float_resultado(0)
	{
		this->int_numeros.numeroA = 0;
		this->int_numeros.numeroB = 0;
	};
	~class_Calculadora() = default;

	void setNuevoNumeroA(int nuevoNumero)
	{
		this->vec_numeros.numeroA.push_back(nuevoNumero);
	}

	void setNuevoNumeroB(int nuevoNumero)
	{
		this->vec_numeros.numeroB.push_back(nuevoNumero);
	}

	bool vecNumeroBVacio()
	{
		return this->vec_numeros.numeroB.empty();
	}

	float calcular(Operacion operacion)
	{
		this->float_resultado = 0;
		vecANumero();
		switch (operacion)
		{
		case Operacion::DIVISION: this->float_resultado = division(); break;
		case Operacion::MULTIPLICACION: this->float_resultado = multiplicacion(); break;
		case Operacion::RESTA: this->float_resultado = resta(); break;
		case Operacion::SUMA: this->float_resultado = suma(); break;
		case Operacion::POTENCIACION: this->float_resultado = potenciacion(); break;
		case Operacion::RADICACION: this->float_resultado = radicacion(); break;
		default: return 404;  break;
		}
		this->vec_numeros.numeroA.clear();
		this->int_numeros.numeroA = this->float_resultado;
		//std::cout << int_numeros.numeroA << "\n";
		this->vec_numeros.numeroB.clear();
		this->int_numeros.numeroB = 0;
		//std::cout << int_numeros.numeroB << "\n";
		return this->float_resultado;
	}

	void resetear()
	{
		this->vec_numeros.numeroA.clear();
		this->vec_numeros.numeroB.clear();
		this->int_numeros.numeroA = 0;
		this->int_numeros.numeroB = 0;
		this->float_resultado = 0;
	}
};