#include<iostream>

using namespace std;

main(){
	int vet[10],i,j,achou,posi,eleito;
	//Solicitar ao usuario informar os elementos do vetor
	for(i=0;i<=9;i++){
		cout<<"Informe o elemento "<<i<<" do vetor\n";
		cin>>vet[i];
	}
	system("cls");
	cout<<" Informado\n";
	for(i=0;i<=9;i++){
		cout<<vet[i]<<" ";
	}
	for(i=1;i<=9;i++){//i=eleito
		eleito=vet[i];
		j=0;
		achou=0;
		while((j<i)&&(achou==0)){//busca sequencial p/ achar o encaixe do eleito
			if(vet[j]>eleito){
				achou=1;//Sair do la�o
				posi=j;//Aramazenar posi��o de encaixe do eleito
			}else
				j++;
		}
		if(achou==1){
			for(j=1;j>posi;j--){//deslocamento para inser��o
				vet[j]=vet[j-1];//deslocamento
			}
			vet[posi]=eleito;//inser��oo
		}
	}
	cout<<"\n Corrigido\n";
	for(i=0;i<=9;i++){
		cout<<vet[i]<<" ";
	}
}
