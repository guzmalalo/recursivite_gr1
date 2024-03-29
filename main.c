#include <stdio.h>


// Puissance recursive
int puiRec(int b, int n){
    // cas de base ?
    if(n ==0){
        return 1;
    }

    // cas gene
    return b* puiRec(b, n-1);
}

// multiplication recursive
int multRec(int a, int b){
    if(b == 1){
        return a;
    }

    return a + multRec(a,b-1);

}

// suite de fibonacci
int fibo(int n){
    // cas de base
    if(n<2){
        return 1;
    }

    // cas gene
    return fibo(n-1) + fibo(n-2);
}

int mystrlen(char * tab){
    // cas de base
    if(tab[0] == '\0'){
        return 0;
    }

    //cas gene
    return 1 + mystrlen(&tab[1]);
}

int main() {
    //printf("2*3 = %d \n", multRec(2,3));
    //printf("2^3 = %d \n", puiRec(2,3));
    /*for (int i = 0; i < 4; ++i)
        printf("fibo(%d) = %d \n", i,fibo(i));
*/
    char * message  = "hola azdhbaiuzbd uiazdiauzdbiauzd";
    printf("%s a %d caract", message, mystrlen(message));


    return 0;
}
