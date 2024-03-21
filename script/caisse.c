//ndao ranga i code ah
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    double valeurapayer = rand() %2001; 
    printf("La valeur a payee est %.2f Rs \n", valeurapayer);
    printf("Votre argent est comment ? \n");
    int argent;
    scanf("%d", &argent);
    while(argent < valeurapayer){
        printf("Oh non, c'est pas suffisant \n");
        printf("Votre argent est comment ? \n");
        scanf("%d", &argent);
    }
    if(argent > valeurapayer){
        double money = argent - valeurapayer;
        printf("Votre money d'echange est %.2f Rs \n", money);
    }else{
        printf("Au revoir ! \n");
    }
    
    return 0;
}
