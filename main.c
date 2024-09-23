#include <stdio.h>
#define LanguageSelect "C"
int Variaveis(){
    char Language = 'Python'; // PEGA APENAS UMA CHARACTERIA // Se tiver varias ele pega a ultima
    char Strings[] = "JavaScript"; // Uma String Completa //
    int NumeroInteiro = 1;
    float NumeroQuebrado = 1.5;

    printf("%c",Language);
    printf("\n%s",Strings);
    printf("\n%i",NumeroInteiro);
    printf("\n%f",NumeroQuebrado);
    printf("\n%s",LanguageSelect);

}

int Mathematics(){

    printf("\n%i",50+50); // Adição
    printf("\n%i",100/50); // Divisão
    printf("\n%i",50*50); // Multiplicação
    printf("\n%i",100-50); // Subitação
    printf("\n%i",(50+50 * 50) / 50 - 50 ); // Tudo Junto
}

int Condicionais(int ERROR,char Type[]){
    if (Type == "if")
    {
        if (ERROR != 404)
        {
            printf("Atualmente o Sistema está funcionando Coerentimente..");
        }
        else
        {
            printf("ERRO");
        }

        if (ERROR > 404)
        {
            printf("\n ALERTA: %i",ERROR);
        }

        if (ERROR > 100 && ERROR < 300)
        {
            printf("\n Algo deu Muito ERRADO: %i",ERROR);
        }
    }
    if (Type == "switch"){
        switch(ERROR){
        case 404:
            printf("O Sistema está funcionando PERFEITAMENTE.");
            break;
        case 505:
            printf("Algo deu errado.");
            break;
        default:
            printf("Codigo Do ERRO: %i",ERROR);
            break;
        }
    }
}

int Loops(char Type[]){
    int a = 0;
    if (Type == "While"){
        while (a < 10){
            a++;
            printf("%i",a);
        }
    }else if (Type == "Do While"){

    do{
            printf("%i",a);
            a++;
      }while(a < 10);

    }else if (Type == "For"){

    for (int i=0; i<10;i++){
        printf("%i",i);
    }
 }

}

int Scheen(){

    int Nome;
    scanf("%d",&Nome);
    printf("%d",Nome);
    if (Nome == 1){
    printf("\n Mude o valor \n");
    Scheen();
    }else{
    printf("O Valor Foi aceito");
    }

}

int Vectores(){
    int Vector[3]; // Definindo Quantas Casas o Vector Tem
    Vector[0] = 5; // Adicionando dados a casa 1
    printf("%d",Vector[0]); // Pegando o dado da casa 1
}

void main(){


/**
    Vectores(); // Array
    Scheen(); // Adicionar Opções de escolha no CMD para o Usuario pode escolher de forma mais dinamica.
    Condicionais(404,"switch"); // Verificar se algo é real antes de executar
    Mathematics();// Somas Matematicas
    Variaveis(); //Dados que podem mudar Dependendo da escolha do Desenvolvedor
**/

}
