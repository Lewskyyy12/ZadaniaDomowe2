cmake_minimum_required(VERSION 3.27)
project(ZadaniaDomowe2)

set(CMAKE_CXX_STANDARD 17)

add_executable(ZadaniaDomowe2 main.c)
add_executable(Zagniezdzone_iteracje zagniezdzone_iteracje.c)
add_executable(Zadania_3 zadania_3.c)


#include "stdio.h"
#include "stdlib.h"
void wypisywanie(int n,int tab[]){
    for(int i=0;i<n;i++) {
        printf("%d ",tab[i]);
    }
    printf("\n");
}

void zadanietablice(){
    int const N = 1000;
    int tab[N];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        tab[i] = rand() % 101 +1;
   }
    wypisywanie(n,tab);
    for(int i=0;i<n;i++) {
        if (tab[i] > 0 && tab[i] % 2 != 0) tab[i] = 3 * tab[i] + 1;
        if (tab[i] > 0 && tab[i] % 2 == 0) {
            for(int z=tab[i]/2;z>0;z--){
                if(z%2!=0 && tab[i]%z==0) {
                    tab[i]= z;
                    break;
                }
            }
        }
    }
    wypisywanie(n,tab);

}

int main(){
zadanietablice();

}
