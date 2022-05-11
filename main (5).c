#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *p;
    char str[30];
    int tam;
    p=fopen("str_em_linhas.txt","wt"); // abre arquivo

    printf("DAVI FELIPE FUHR\n4324\n");

    printf("Digite aqui a string que ira p arquivo:\n");
    gets(str);

    tam = strlen(str);

    do{
        for(int i=0; i<tam; i++){

       if(str[i] == ' '){
        fputs("\n", p);
       }else{
       fputc(str[i], p);
       }
    }

    }while(str[tam]!= '\0');


    fclose(p); // fecha o arquivo
    return 0;
}
