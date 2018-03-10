#include "Main.h"

void AlfaFn(void){
std::cout<<"Hola"<<std::endl;}

int main()
{
/*//apuntador a una variable simple
	int AEn=5;
	int *pApEn = &AEn;
	std::cout<< *pApEn<<std::endl;*/
//Arreglo iniciado en tiempo de compilacion 
	int xArEN[3]={1,2,3};
	for (int i = 0; i < 3; i++)
	{
		std::cout<< xArEN[i]<<" ";
	}
//Arreglo de apuntadores a enteros 
	int AEn=10;
	int BEn=20;
	int CEn=30;
	int *pApEn = &AEn;
	int *qApEn = &BEn;
	int *rApEn = &CEn;
	int *xArApEn[3]={pApEn,qApEn,rApEn};
	for (int i = 0; i < 3; i++)
	{
		std::cout<<*xArApEn[i]<<" ";
	}
	puts("\n");
//Arreglo de apuntadores a entero (forma alterna)
	int *yArApEn[3]={&AEn,&BEn,&CEn};
	for (int i = 0; i < 3; i++)
	{
		std::cout<< *yArApEn[i]<<" ";
	}
	puts("\n");
//-------------------------------------------------------------
	int zArEn[3]={1,2,3};
	int (*pApArEn)[3]=(int (*)[3])zArEn;
	for(int i =0;i<3;i++){
	std::cout<<zArEn[i]<<" ";}
	puts("\n");

	for(int i=0;i<3;i++){
	std::cout<<(*pApArEn)[i]<<" ";}
	puts("\n");
//-------------------------------------------------------------
	int *(*pApArApEn)[3]=(int *(*)[3])xArApEn;
	for(int i=0;i<3;i++){
	std::cout<< *(*pApArApEn)[i]<<" ";}
	puts("\n"); 
//-------------------------------------------------------------
	int (*sApArEn)[3]=(int(*)[3]) new (int [3]);
	for(int i=0;i<3;i++){
	(*sApArEn)[i]=i;}
	puts("\n");
	for(int i=0;i<3;i++){
	std::cout<<(*sApArEn)[i]<<" ";}
	puts("\n");
void (*pApFnVd)(void) = AlfaFn;
(*pApFnVd)();
	return 0;
}

