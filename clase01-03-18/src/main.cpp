#include "Main.h"

struct EsFns{
	int *(*pApFnApEn)(int,int);
	int AEn;
	int BEn;
	int RdoEn;
};
int *SumaFnApEn(int AEn,int BEn){
	int *pApEn=new int;
	*pApEn=AEn+BEn;
	return pApEn;
}
int *RestaFnApEn(int AEn,int BEn){
	int *pApEn=new int;
	*pApEn=AEn-BEn;
	return pApEn;
}
int *MultiFnApEn(int AEn,int BEn){
	int *pApEn=new int;
	*pApEn=AEn*BEn;
	return pApEn;
}
int *DivFnApEn(int AEn,int BEn){
	int *pApEn=new int;
	*pApEn=AEn/BEn;
	return pApEn;
}
EsFns *(*CreaFnApArApEsFns(void))[4]{
	EsFns *(*pApArApEsFns)[4]= (EsFns*(*)[4]) new (EsFns*[4]); 
	for (int i = 0; i < 4; i++)
	{
		(*pApArApEsFns)[i] = new EsFns;		
	}
	(*pApArApEsFns)[0]->pApFnApEn = SumaFnApEn;
	(*pApArApEsFns)[1]->pApFnApEn = RestaFnApEn;
	(*pApArApEsFns)[2]->pApFnApEn = MultiFnApEn;
	(*pApArApEsFns)[3]->pApFnApEn = DivFnApEn;
	int AEn,BEn;
	std::cout<<"ingresa dos datos"<<std::endl;
	std::cin>>AEn>>BEn;
	for (int i = 0; i < 4; ++i)
	{		
		(*pApArApEsFns)[i]->AEn=AEn;
		(*pApArApEsFns)[i]->BEn=BEn;	
		(*pApArApEsFns)[i]->RdoEn=*(*(*pApArApEsFns)[i]->pApFnApEn)(AEn,BEn);
	}	
	return pApArApEsFns;
}
int main()
{	
	EsFns *(*pApArApEsFns)[4]=CreaFnApArApEsFns();
	for (int i = 0; i < 4; i++)
	{
		std::cout<<(*pApArApEsFns)[i]->AEn<<" "<<(*pApArApEsFns)[i]->BEn<<"="<<(*pApArApEsFns)[i]->RdoEn<<std::endl;
	}
	return 0;
}