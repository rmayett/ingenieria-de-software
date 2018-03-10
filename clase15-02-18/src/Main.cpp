#include "Main.h"
#define LonEn 5

void AlfaFn(void){
std::cout<<"Hola"<<std::endl;
}
int *AlfaFnApEn(int AEn){
	int *pApEn = new int;
	*pApEn = AEn;
	return pApEn;
}
int *CreaFnApEn(void){
	int *pApEn = new int[LonEn];
	for(int i=0;i<LonEn;i++){
		*(pApEn+i)=i;	
	}
	return pApEn;
}
int (*CreaFnApArEn(void))[LonEn]{
	int (*pApArEn)[LonEn]=(int (*)[LonEn]) new int[LonEn];
	for(int i=0;i<LonEn;i++){
		(*pApArEn)[i]=i;
	}
	return pApArEn;
}
int *(*CreaFnApArApEn(void))[LonEn]{
	int *(*pApArApEn)[LonEn]=(int *(*)[LonEn]) new (int *[LonEn]);
	for(int i=0;i<LonEn;i++){
		(*pApArApEn)[i]=new int;
	}
	for(int i=0;i<LonEn;i++){
		*(*pApArApEn)[i]=i;
	}
	return pApArApEn;
}
int SumaFnEn(int a,int b){
	return a+b;
}
int RestaFnEn(int a,int b){
	return a-b;
}
int
int (*(*CreaFnApArApFnEn(void))[4])(int,int){
	int (*(*pApArApFnEn)[4])(int,int) = (int (*(*)[4])(int,int)) new int*[4](int,int);
	(*pApArApFnEn)[0]=SumaFnEn;
	(*pApArApFnEn)[1]=RestaFnEn;
	(*pApArApFnEn)[2]=ProductoFnEn;
	(*pApArApFnEn)[3]=DivisionFnEn;
	return pApArApFnEn;	
}
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
//-------------------------------------------------------------
	int *qsApEn=AlfaFnApEn(7);
	std::cout<<*qsApEn<<std::endl;
	std::cout<<*AlfaFnApEn<<std::endl;
//-------------------------------------------------------------
	int *tApEn=CreaFnApEn();
	for(int i =0;i<LonEn;i++){
	std::cout<<tApEn[i]<<" ";
	}
	puts(" ");
//--------------------------------------------------------------
	int (*ssApArEn)[LonEn]=CreaFnApArEn();
	for(int i=0;i<LonEn;i++){
		std::cout<<(*ssApArEn)[i]<<std::endl;	
	}	
//-------------------------------------------------------------
	int *(*paApArApEn)[LonEn]=CreaFnApArApEn();
	for(int i =0;i<LonEn;i++){
	std::cout<<*(*paApArApEn)[i]<<" ";
	}
//-------------------------------------------------------------
	int (*(*pApArApFnEn)[4])(int,int)=CreaApArApFnEn();
	for(int i=0;i<4;i++){
	std::cout<<(*(*pApArApFnEn)[i])(6,7)<<std::endl;
	}
	return 0;
}

