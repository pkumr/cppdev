//
//  cpp_int_datatypes.cpp
//  compcode
//
//  Created by Parveen Kumar on 7/20/20.
//

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
//Convert a number to binary
//Method#1
void bin(unsigned num){
    if(num > 1){
        bin(num / 2);
    }
    cout<< num % 2;
}
//Method#2
void bin_bitshift(unsigned num){
    if(num > 1){
        bin_bitshift(num >> 1);
    }
    cout<< (num & 1);
}
void bin_for(unsigned n){
    unsigned i;
    for(i = 1 << 31; i > 0; i = i / 2){
        (n & i) ? cout << "1" : cout<< "0";
    }
}
void print_bits(unsigned x){
    for(int i = 31; i >= 0; i--){
        if(x & (1 << i))
            cout<< "1";
        else
            cout << "0";
    }
}
long long convertDecimalToBinary(int n){
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n != 0) {
        remainder = n % 2;
        cout<< step++ << " : " << n << "/2, Remainder = " << remainder << endl;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

int convertBinaryToDecimal(long long n){
    int decimalNumber = 0, i = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2 , i);
        ++i;
    }
    return decimalNumber;
}

int convertDecimalToOctal(int n){
    int octalNumber = 0, i = 1, remainder;
    while (n!=0) {
        remainder = n%8;
        n /= 8;
        octalNumber += remainder * i;
        i *= 10;
    }
    return octalNumber;
}
int convertOctalToDecimal(int octalNumber){
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}

void convertDecimaltoHexadecimal(int n){
    cout << char(55) << endl;
    char hexaDecimal[100];
    int i = 0, remainder = 0;
    while (n != 0) {
        remainder = n % 16;
        if(remainder < 10){
            
            hexaDecimal[i] = remainder + 48;
            ++i;
        }else{
            hexaDecimal[i] = remainder + 55;
            ++i;
        }
        n = n / 16;
    }
    for(int j = i - 1; j >= 0; j--)
        cout << hexaDecimal[j];
}

int main(){
    //ways to convert a number of its binary
    bin(131);
    cout << "\n";
    bin_bitshift(131);
    cout << "\n";
    bin_for(131);
    cout<< endl;
    print_bits(131);
    cout << endl;
    cout << convertDecimalToBinary(131);
    cout << endl;
    //convert a binary number to its decimal form
    cout<< convertBinaryToDecimal(10000011) << endl;
    
    //convert decimal to octal number
    cout << convertDecimalToOctal(78) <<endl;
    //convert octal to Decimal
    cout << convertOctalToDecimal(2341) <<endl;
    //convert decimal to hex
    convertDecimaltoHexadecimal(2545);
    cout << endl;
    
    return 0;
}
