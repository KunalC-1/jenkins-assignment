#include<stdio.h>

int multiply(int a, int b){
    return a * b;
}
int main(){
    int a = 5;
    int b = 8;
    printf("Multiplication of Two Numbers : %d", multiply(a, b));
    return 0;
};