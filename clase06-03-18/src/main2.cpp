#include "Main.h"
/*Una referencia siempre se inicia en tiempo de compilacion
con un valor es decir, en su declaracion
regla1.- no hay apuntadores a referencias
regla2.- no hay referencias de referencias*/
int main(int argc, char const *argv[]){
	int AEn=7;
	int *pApEn=&AEn;
	int &pRfEn=AEn;
	AEn=9;
	std::cout<<AEn<<std::endl;
	*pApEn=2;
	std::cout<<*pApEn<<std::endl;
	pRfEn=10;
	std::cout<<pRfEn<<std::endl;
	int* &pRfApEn=pApEn;
	*pRfApEn=15;
	std::cout<<*pRfApEn<<std::endl;
	pApEn=&pRfEn;
	std::cout<<*pApEn<<std::endl;
	int *qApEn=&pRfEn;
	//int &(*qApRfEn)=&pRfEn;
	//&&pRfRfEn=pRfEn;
	return 0;
}