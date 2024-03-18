#include "stdio.h"
#include "math.h"



int czy_pierwsza(int y){
    for(int i=2;i<y;i++){
        if(y%i==0) {
            return 0;
        }
    }
    return 1;
}

void dzielniki_pierwsze(){
    int n;
    scanf("%d",&n);
    for(int i=3;i<n;i++){
        if(n%i==0 && czy_pierwsza(i)==1) printf("%d ",i);
    }
}

void liczba_fibbo(){
    int n,fib0=0,fib1=1,fib2=1;
    scanf("%d",&n);
    while(fib2+fib1<n){
        fib2+=fib1;
        fib1+=fib0;
        fib0=fib2-fib1;
    }
    printf("%d",fib2);
}
void suma_kwadratow(){
    int n, czy_jest=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int y=1;y<=i;y++){
            for(int z=1;z<=y;z++){
                if(i*i+y*y+z*z ==n) {
                    printf("%d %d %d \n", i, y, z);
                    czy_jest=1;
                }
            }
        }
    }
    if(czy_jest==0) printf("Nie ma takiej pary");
}


void liczby_doskonale_mniejsze(){
    int n, suma=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int y=1;y<i;y++) {
            if (i % y == 0) suma += y;

        }
        if(suma==i) printf("%d \n",suma);
        suma=0;
    }

}



int main(){
    //liczby_doskonale_mniejsze();
    //dzielniki_pierwsze();
    //liczba_fibbo();
    // suma_kwadratow();
}