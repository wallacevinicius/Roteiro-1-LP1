#ifndef DATA_H_
#define DATA_H_
#include <iostream>

class Data{
	public:
	int dia;
	int mes;
	int ano;
	
	//Métodos da Classe
	Data();
	void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);
	void avancarData(int indice);
	int getDia();
	int getMes();
	int getAno();
};

#endif