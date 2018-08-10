#include <iostream>
#include "data.h"

Data::Data(){
	this->dia = 0;
	this->mes = 0;
	this->ano = 0;
}

void Data::setDia(int dia){
	this->dia = dia;
}

void Data::setMes(int mes){
	this->mes = mes;
}

void Data::setAno(int ano){
	this->ano = ano;
}

void Data::avancarData(){
	
}

void Data::avancarDataIndice(int indice){
	while(indice){
		if(this->mes == 1 or this->mes == 3 or this->mes == 5 or this->mes == 7 or this->mes == 8 or this->mes == 10 or this->mes == 12){
			if(this->dia + indice <= 31){
				this->dia += indice;
				break;
			}else{
				indice -= 31 - this->dia + 1;
				this->dia = 1;
				this->mes++;
			}
		}else if(this->mes != 2){
			if(this->dia + indice <= 30){
				this->dia += indice;
				break;
			}else{
				indice -= 30 - this->dia + 1;
				this->dia = 1;
				this->mes++;
			}
		}else if(this->mes == 2){
			if(this->dia + indice <= 28){
				this->dia += indice;
				break;
			}else{
				indice -= 28 - this->dia + 1;
				this->dia = 1;
				this->mes++;
			}
		}
	}
}

int Data::getDia(){
	return this->dia;
}

int Data::getMes(){
	return this->mes;
}
int Data::getAno(){
	return this->ano;
}