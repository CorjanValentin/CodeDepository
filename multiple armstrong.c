#include <stdio.h>
#include <math.h>
void ckArmstrong(int a,int b){
    a++;
    while(a<=b){
        int digits=0,aux=a,aux2=a;
        while(aux!=0){
            aux/=10;
            digits++;
        }
        int sum=0;
        while(aux2!=0){
            sum+=pow(aux2%10,digits);
            aux2/=10;
        }
        if(sum==a){
            printf("%i is an Armstrong number.\n",a);
        }
        a++;
    }
}
int main(){
int n,m;
scanf("%i%i",&n,&m);
printf("Armstrong numbers between %i and %i are:\n",n,m);
ckArmstrong(n,m);
return 0;
}