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
	char fita[100]; //Vetor de entrada
	int atual,final;     
	
	//Matriz estática
	char m[3][3]={{'0', '1', 'v'},
			      {'0', 'v', '1'},
				  {'v', '1', '0'}};
						
	atual = 0; //Estado inicial
	final = 1; //Estado final
	
	//Cadeia de entrada  
	cout<<"\n\nSentencas permitidas(0 ou 1): " ;
	cin>>fita;
	cout<<endl<<"Entrada: "<<fita; //Exibir cadeia
 
  i=0;//Contador
  while(fita[i] != '\0')
  {
                   achou = 0;
                   for(j=0;j<3;j++) //Percorrendo a matriz
                   {
                     if( m[atual][j]==fita [i]) //Se o elemento da matriz for igual ao da entrada
                     {
                       atual=j; //Atual recebe a posição da matriz
                       i++; //Incrementa 1 ao índice da entrada(passa para o valor seguinte) 
                       j=3; 
                       achou =1;
                     }
                            
                   }
                   if(achou == 0  )
                   {
                         i='\0'; //Se a variável "achou" for igual a zero é pq a entrada é nula.
                   } 
  }
  if(atual==final) //Condicional para determinar se o último elemento é igual ao estado final
  {
    cout<<endl<<"A CADEIA FOI RECONHECIDA!\n";
                   
  }
  else
  {
      cout<<endl<<"\nA CADEIA NAO FOI RECONHECIDA!\n";
  }
}
