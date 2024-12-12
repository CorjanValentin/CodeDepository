#include <stdio.h>
int main(){
int n,i,j;
scanf("%i",&n);
int s=n*2-2;
for(i=0;i<n;i++,s-=2){
    char c='A';
    for(j=0;j<s;j++){
        printf(" ");
    }
    for(j=0;j<=i;j++){
        printf("%c ",c);
        c++;
    }
    if(i==0){
        printf("\n");
        continue;
    }
    else{
        c-=2;
        for(j=i;j!=0;j--){
            printf("%c ",c);
            c--;
        }
    }
    printf("\n");
}
return 0;
}
