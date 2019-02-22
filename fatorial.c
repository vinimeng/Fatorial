#include <stdio.h>
#include <stdlib.h>

//fat(numero)
//if numero ==1
//return 1
//then
//return numero*fatorial(numero-1)
//fat(4)
//4*fat(3)
//4*3*fat(2)
//4*3*2*fat(1)
//4*3*2*1

int fat(int dec){
    if(dec==0)
              return 1;
    else if(dec==1)
              return 1;
    else
              return (dec*fat(dec-1));
}

int fatorial(){
    int dec, decfinal, auxdaalegria=0, cont, aux=0;
    char exc;
    while(auxdaalegria==0){
                           printf("\nNumero e exclamacao: ");
                           scanf("%d", &dec);
                           if(dec>=0)auxdaalegria=1;
                           else printf("\nTomar no cu eh vitamina, comi tu e tuas prima!\n");            
    }
    while(aux==0){
    scanf(" %c", &exc);
            if(exc== '!'){
                      decfinal=fat(dec);
                      aux=1;
                      }
    }
    return decfinal;
}

int main(int argc, char *argv[])
{
  int resultado, stopmor, finalstop=0;
  char key;
  while(finalstop==0){
  stopmor=0;
  resultado=fatorial();
  printf("\nResultado: %d\n", resultado);
  while(stopmor==0)
    	{
    		printf("\nQuer continuar calculando? (s/n): ");
    		scanf(" %c", &key);
    		switch(key)
    		{
    			case 's':
    				finalstop=0;
    				stopmor=1;
    				break;
    			case 'S':
    				finalstop=0;
    				stopmor=1;
    				break;
    			case 'n':
    				finalstop=1;
    				stopmor=1;
    				break;
    			case 'N':
    				finalstop=1;
    				stopmor=1;
    				break;
    			default:
    				stopmor=0;
    				break;
    		}
    	}
     }
  system("PAUSE");	
  return 0;
}
