#include <iostream>
using namespace std ;
int main () {
    int materie ;
    int i ;
    int k ;
    int Numerovoti ;
    int Votimateria ;
    int Numeromateria = 0;
    float media ;
    cout << "Di quante materie vuoi calcolare la media? \n"; 
    scanf("%d", &materie);
    cout << "Di quanti voti vuoi calcolare la media ?\n";
    scanf ("%d" , &Numerovoti);
    int voti [materie] [Numerovoti] ;
     
    for (i = 0 ; i < materie ; i++){
        media = 0 ; 
        Numeromateria ++ ;
        for (k = 0 ; k < Numerovoti ; k++ ){
        cout << "Digita il voto :\n";
        scanf ("%d", &Votimateria );
        media += Votimateria ;
        }
        media /= Numerovoti ;
        cout << "La media dei voti della" << Numeromateria << "^ materia è : " << media << "\n" ;
    }
    

    
    return 0 ; 
}
