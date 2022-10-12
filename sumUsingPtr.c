#include<stdio.h>
int main(){
    int a[]={2,6,11,34,9};
    int *p;
    int sum=0;
    for(p=&a[0];p <=&a[4];p++){
        sum=sum+*p;      
    }
    printf("The sum is: %d \n",sum);
}
