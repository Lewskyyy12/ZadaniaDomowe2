#include "stdio.h"

void kazda_liczba(){
    int n, czy_jest=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int y=0;y<=i;y++){
            for(int z=0;z<=y;z++){
                for(int x=0;x<=z;x++)
                    if(i*i+y*y+z*z+x*x == n) {
                        printf("%d %d %d %d\n", i, y, z, x);
                    }
            }
        }
    }
}

int main(){
    kazda_liczba();
}