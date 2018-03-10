#include "Main.h"
/*
pasar argumentos por 
C++-C-A)valor
C++-C-B) direccion
C++-C)referencia
pasar por valor 
	es cuando los valores de lo argumentos en la llamada de una funcion 
	se copian en variables locales en el entorno de la fucnion 
pasar por direccion 
	es cuando las direcciones de los argumentos en la llamada de una 
	funcion se copian en variables locales en el entorno de la 
	funcion
pasar por referencia 
	es cuando los argumentos en la llamada de una funcion se transfiere como 
	variables globales en el entorno de la funcion*/
void IntercambiaFn(int AEn,int BEn){
	int TempEn=AEn;
	AEn=BEn;
	BEn=TempEn;
}
void Intercambia1Fn(int* AApEn,int* BApEn){
	int TempEn=*AApEn;
	*AApEn=*BApEn;
	*BApEn=TempEn;
}
void Intercambia2Fn(int &AEn,int &BEn){
	int TempEn=AEn;
	AEn=BEn;
	BEn=TempEn;
}
int main()
{
	int AEn=5,BEn=7;
	Intercambia2Fn(AEn,BEn);
	std::cout<<"AEn="<<AEn<<"BEn="<<BEn<<std::endl;
	return 0;
}