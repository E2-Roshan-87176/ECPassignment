#include<stdio.h>

int main(){


int i,j,fac=1;

printf("enter the num=");
scanf("%d",&j);

for(i=1;i<=j;i++){

fac=i*fac;
}

printf("factoreal is= %d\n",fac);
return 0;
}
