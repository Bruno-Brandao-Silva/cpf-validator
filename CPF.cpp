#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	system("color 80");
	setlocale(LC_ALL, "Portuguese");
    char cpf[11];
    int k=10, d1=0,d2=0,v=0;
    do{
    printf("\n\n	Digite o CPF: ");
    scanf("%s",cpf);
    v=0;
        for(int x=0; x<11;x++){
            if(cpf[x]-'0'==0 
               ||cpf[x]-'0'==1 
               ||cpf[x]-'0'==2 
               ||cpf[x]-'0'==3 
               ||cpf[x]-'0'==4 
               ||cpf[x]-'0'==5 
               ||cpf[x]-'0'==6 
               ||cpf[x]-'0'==7 
               ||cpf[x]-'0'==8 
               ||cpf[x]-'0'==9){
                v=v+1;
            }
        }
        if(v!=11 ){
                printf("	Digite apenas numeros.\n");
            }
    }while(v!=11);
    if(strlen(cpf) !=11 
    || 0==strncmp(cpf,"11111111111",11)
    || 0==strncmp(cpf,"22222222222",11)
    || 0==strncmp(cpf,"33333333333",11)
    || 0==strncmp(cpf,"44444444444",11)
    || 0==strncmp(cpf,"55555555555",11)
    || 0==strncmp(cpf,"66666666666",11)
    || 0==strncmp(cpf,"77777777777",11)
    || 0==strncmp(cpf,"88888888888",11)
    || 0==strncmp(cpf,"99999999999",11)
    || 0==strncmp(cpf,"00000000000",11)
    ){ 
      printf("	O CPF e invalido.");
      getch();
      return 0;
    }else{
        for(int i =0;i<9;i++){
            d1=d1+(cpf[i]-'0')*k;
            k--;
        }
        d1=d1*10;
        k=11;
        for(int i =0;i<10;i++){
            d2=d2+(cpf[i]-'0')*k;
            k--;
        }
        d2=d2*10;
   if((cpf[9]-'0')==(d1%11) && (cpf[10]-'0')==(d2%11)){
    printf("	O CPF é valido");
        }else{
        printf("	O CPF é invalido");
            }
    }
    getch();
    return 0;
}
