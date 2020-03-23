#include <cstdlib>
#include <string.h>
#include <stdio.h>

int main () {
    int materie ;
    int i ;
    int k ;
    int Numerovoti ;
    int Votimateria ;
    int Numeromateria = 0;
    float media ;
    printf ("Di quante materie vuoi calcolare la media? \n");
    scanf("%d", &materie);
    printf ("Di quanti voti vuoi calcolare la media ?\n");
    scanf ("%d" , &Numerovoti);
    int voti [materie] [Numerovoti] ;
     
    for (i = 0 ; i < materie ; i++){
        media = 0 ; 
        Numeromateria ++ ;
        for (k = 0 ; k < Numerovoti ; k++ ){
        printf("Digita il voto :\n");
        scanf ("%d", &Votimateria );
        media += Votimateria ;
        }
        media /= Numerovoti ;
        printf("La media dei voti della %d^ materia è  %f\n" , Numeromateria , media);
    }
    

    
    return 0 ; 
}


    

