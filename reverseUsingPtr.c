#include<stdio.h>
#define N 5
int main(){
int arr[N], *p;
printf("Enter the element for the arr:");
for(p=arr;p<=arr+N-1;p++){
    scanf("%d",p);
}
printf("the reverse numbers are: ");
for(p=arr+N-1;p>arr;p--){
    printf(" %d",*p);
}
}
