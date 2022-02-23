#include <stdio.h>

int kerulet(int oldal){
    return 4*oldal;
}

int terulet(int oldal){
    return oldal*oldal;
}





int main(){

int oldalhossz;
printf("Adja meg a negyzet oldalhosszat (cm-ben)!: ");
scanf("%d",&oldalhossz);
printf("\n");
printf("A negyzet kerulete: %d cm\n",kerulet(oldalhossz));
printf("A negyzet terulete: %d cm2\n",terulet(oldalhossz));
return 0;

}