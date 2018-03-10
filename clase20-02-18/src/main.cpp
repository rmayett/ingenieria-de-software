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
/*int *(*CreaFnApArApEn(void))[LonEn]{
	int *(*pApArApEn)[LonEn]=(int *(*)[LonEn]) new (int *[LonEn]);
	for(int i=0;i<LonEn;i++){
		(*pApArApEn)[i]=new int;
	}
	for(int i=0;i<LonEn;i++){
		*(*pApArApEn)[i]=i;
	}
	return pApArApEn;
}*/
int SumaFnEn(int a,int b){
	return a+b;
}
int RestaFnEn(int a,int b){
	return a-b;
}
int ProductoFnEn(int a,int b){
	return a*b;
}
int DivisionFnEn(int a,int b){
	return a/b;
}
int (*(*CreaFnApArApFnEn(void))[4])(int,int){
	int (*(*pApArApFnEn)[4])(int,int) = (int (*(*)[4])(int,int)) new (int(*[4])(int,int));
	(*pApArApFnEn)[0]=SumaFnEn;
	(*pApArApFnEn)[1]=RestaFnEn;
	(*pApArApFnEn)[2]=ProductoFnEn;
	(*pApArApFnEn)[3]=DivisionFnEn;
	return pApArApFnEn;	
}
void ExibeFn(int (*(*pApArApFnEn)[4])(int,int)){
	char TitulosArCd[4][16]={"SumaFnEn=","RestaFnEn=","ProductoFnEn=","DivisionFnEn="};
	std::cout<<"\t     +---+"<<std::endl;
	std::cout<<"pApArApFnEn->| * |->"<<TitulosArCd[0]<<(*(*pApArApFnEn)[0])(6,7)<<std::endl;
	std::cout<<"\t     +---+"<<std::endl;
	for (int i = 1; i < 4; i++)
	{
		std::cout<<"\t     | * |->"<<TitulosArCd[i]<<(*(*pApArApFnEn)[i])(6,7)<<std::endl;
		std::cout<<"\t     +---+"<<std::endl;
	}	
}
/*int (*CreaFnApArEn(void))[4]{
	int (*pApArEn)[4]= (int (*)[4])  new (int *[4]);
	(*pApArEn)[0]= SumaFnEn;
	(*pApArEn)[1]= RestaFnEn;
	(*pApArEn)[2]= ProductoFnEn;
	(*pApArEn)[3]= DivisionFnEn;
	return pApArEn;
}*/
/*void MostrarFn(int ((*pApArApFnEn)[4])){
	char TitulosArCd[4][16]={"SumaFnEn=","RestaFnEn=","ProductoFnEn=","DivisionFnEn="};
	std::cout<<"\t     +---+"<<std::endl;
	std::cout<<"pApArApFnEn->| * |->"<<TitulosArCd[0]<<(*pApArApFnEn)[0]<<std::endl;
	std::cout<<"\t     +---+"<<std::endl;
	for (int i = 1; i < 4; i++)
	{
		std::cout<<"\t     | * |->"<<TitulosArCd[i]<<(*pApArApFnEn)[i])<<std::endl;
		std::cout<<"\t     +---+"<<std::endl;
	}	
}*/
	//Examen parcial A
int* SumaFnApEn(int a,int b){
	int* c = new int;
	*c=a+b;
	return c;
}
int* RestaFnApEn(int a,int b){
	int* c = new int;
	*c=a-b;
	return c;
}
int* ProductoFnApEn(int a,int b){
	int* c = new int;
	*c=a*b;
	return c;
}
int* DivisionFnApEn(int a,int b){
	int* c = new int;
	*c=a/b;
	return c;
}
int *(*(*CreaFnApArApFnApEn(void))[4])(int,int){
	int *(*(*pApArApFnApEn)[4])(int,int)=(int*(*(*)[4])(int,int)) new (int*(*[4])(int,int));
	(*pApArApFnApEn)[0]=SumaFnApEn;
	(*pApArApFnApEn)[1]=RestaFnApEn;
	(*pApArApFnApEn)[2]=ProductoFnApEn;
	(*pApArApFnApEn)[3]=DivisionFnApEn;	
	return 	pApArApFnApEn;
}
void ExibeFnEx(int *(*(*pApArApFnApEn)[4])(int,int)){
	char TitulosArCd[4][16]={"SumaFnApEn=","RestaFnApEn=","ProductoFnApEn=","DivisionFnApEn="};
	std::cout<<"\t       +---+"<<std::endl;
	std::cout<<"pApArApFnApEn->| * |->"<<TitulosArCd[0]<<*(*(*pApArApFnApEn)[0])(6,7)<<std::endl;
	std::cout<<"\t       +---+"<<std::endl;
	for (int i = 1; i < 4; i++)
	{
		std::cout<<"\t       | * |->"<<TitulosArCd[i]<<*(*(*pApArApFnApEn)[i])(6,7)<<std::endl;
		std::cout<<"\t       +---+"<<std::endl;
	}	
}
//B
int *(*CreaFnApArApEn(void))[4]{
	int*(*pApArApEn)[4]=(int*(*)[4]) new (int*[4]);
	(*pApArApEn)[0]=SumaFnApEn(6,7);
	(*pApArApEn)[1]=RestaFnApEn(6,7);
	(*pApArApEn)[2]=ProductoFnApEn(6,7);
	(*pApArApEn)[3]=DivisionFnApEn(6,7);	
	return pApArApEn;
}
void ExibeFnExb(int *(*pApArApEn)[4]){
	char TitulosArCd[4][25]={"SumaFnApEn(6,7)->","RestaFnApEn(6,7)->","ProductoFnApEn(6,7)->","DivisionFnApEn(6,7)->"};
	std::cout<<"\t   +---+"<<std::endl;
	std::cout<<"pApArApEn->| * |->"<<TitulosArCd[0]<<*(*pApArApEn)[0]<<std::endl;
	std::cout<<"\t   +---+"<<std::endl;
	for (int i = 1; i < 4; i++)
	{
		std::cout<<"\t   | * |->"<<TitulosArCd[i]<<*(*pApArApEn)[i]<<std::endl;
		std::cout<<"\t   +---+"<<std::endl;
	}	
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
	/*int *(*paApArApEn)[LonEn]=CreaFnApArApEn();
	for(int i =0;i<LonEn;i++){
	std::cout<<*(*paApArApEn)[i]<<" ";
	}
	puts("\n");*/
//-------------------------------------------------------------
	int (*(*pApArApFnEn)[4])(int,int)=CreaFnApArApFnEn();
	for(int i=0;i<4;i++){
	std::cout<<(*(*pApArApFnEn)[i])(6,7)<<std::endl;
	}
	ExibeFn(CreaFnApArApFnEn());	
	//MostrarFn(CreaFnApArEn());
	std::cout<<"Examen primer parcial"<<std::endl;
	puts("A");
	ExibeFnEx(CreaFnApArApFnApEn());
	puts("B");
	ExibeFnExb(CreaFnApArApEn());
	return 0;
}

