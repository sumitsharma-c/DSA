// Binary to Decimal & Decimal to Hexadecimal Conversion using calloc
#include<stdio.h>
int covertBinaryToDecimal(int n){
    int sum = 0, base = 1;
    while(n != 0){
        int digit = n % 10;
        sum += digit * base;
        base = base * 2;
        n = n / 10; 
    }
    return sum;
}
void convertDecimalToHexadecimal(int n){
    char hexNum[100];
    int i = 0;
    while(n != 0){
        int rem = n % 16;
        if(rem < 10){
            hexNum[i] = rem + '0';
        } else {
            hexNum[i] = rem - 10 + 'A';
        }
        n = n / 16;
        i++;
    }
    printf("Hexadecimal: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%c", hexNum[j]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    int decimal = covertBinaryToDecimal(n);
    printf("Decimal: %d\n", decimal);
    convertDecimalToHexadecimal(decimal);
    return 0;
}
