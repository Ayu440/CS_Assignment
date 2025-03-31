#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}
int divide(int a,int b){
    return a/b;
}
int even_or_odd(int a){
    if(a%2==0){
        printf("even");
    }
    else if(a%2==1){
        printf("odd");
    }
}
int pyramid(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
}
}
int upsidedown_pyramid(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
}
}