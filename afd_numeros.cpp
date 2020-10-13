/*
	* Projeto: Reconhecedor de automatos
	* Autor: Joyce Claine, Marcos Monteiro
	* Dados: 04/10/2020
	* Versao: 1.0
	* Data da ultima modificao: 04/10/2020
	* Descricao: Algoritmo que reconhece um automato pre determinadoA.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
	cout<<endl<<"*****=====*****=====*****=====*****";
	cout<<endl;
	cout<<endl<<"*****RECONHECEDOR DE AFD*****"; 
	cout<<endl;
	cout<<endl<<"*****=====*****=====*****=====*****";
	
	int i,j,achou = 0;
	char fita[100];
	int atual,final;     
	
	char m[3][3]={{'0', '1', 'v'},
			      {'0', 'v', '1'},
				  {'v', '1', '0'}};
						
	atual = 0;
	final = 1;
	
	cout<<"\n\nSentencas permitidas(0 ou 1): " ;
	cin>>fita;
	cout<<endl<<"Entrada: "<<fita;
 
  i=0;
  while(fita[i] != '\0')
  {
                   achou = 0;
                   for(j=0;j<3;j++)
                   {
                     if( m[atual][j]==fita [i])
                     {
                       atual=j;
                       i++;
                       j=3;
                       achou =1;
                     }
                            
                   }
                   if(achou == 0  )
                   {
                         i='\0';
                   } 
  }
  if(atual==final)
  {
    cout<<endl<<"A CADEIA FOI RECONHECIDA!\n";
                   
  }
  else
  {
      cout<<endl<<"\nA CADEIA NAO FOI RECONHECIDA!\n";
  }
}
