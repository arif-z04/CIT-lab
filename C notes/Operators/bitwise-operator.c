#include <stdio.h>

// even odd function using bitwise operator
int isEven(int n){
    // if the last bit is 1 then it is odd
    // if the last bit is 0 then it is even
    return !(n & 1);    
}
// find the number if a power of 2 or not
int isPowerOfTwo(int n){
    // if the number is a power of 2 then the output will be 1
    // if the number is not a power of 2 then the output will be 0
    return n && !(n & (n - 1));
}

// find the number if its multiplied by 4 or not
int isMultipleOfFour(int n){
    // if the number is a multiple of 4 then the output will be 1
    // if the number is not a multiple of 4 then the output will be 0
    return !(n & 3);
}

// odd occurrence of a number in an array
// XOR of a number with itself is 0
int findOdd(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res ^= arr[i];
    }
    return res;
}

// check if the kth bit is set or not
int isKthBitSet(int n, int k){
    // if the kth bit is set then the output will be 1
    return n & (1 << k);
}

// check two numbers have opposite sign or not
int oppositeSigns(int x, int y){
    // if the XOR of two numbers is negative then they have opposite signs
    return (x ^ y) < 0;
}

// find absolute value of a number
int findAbs(int n){
    // if the number is negative then the output will be 1
    // if the number is positive then the output will be 0
    int mask = n >> (sizeof(int) * 8 - 1);
    return (n + mask) ^ mask;
}

/*
    What is bitmasking? 
    Bitmasking is a technique used in computer programming to manipulate bit sequences.
    It is used to perform operations at the bit level.
    Bitmasking is used to set a particular bit, clear a particular bit, toggle a particular bit, etc.
    Bitmasking is used to perform operations like checking if a number is even or odd, finding the position of the most significant set bit, etc.
    Bitmasking is used to perform operations like checking if the kth bit is set or not, finding the absolute value of a number, etc.

*/
int main(){

    int num = 16;
    num >>= 1; // output: 8
    printf("%d\n", num);

    num <<= 2; // output: 32
    printf("%d\n", num);

    // find the position of the Most significant set bit
    int n = 18;
    int pos = 0;
    while(n >>= 1){
        pos++;
    }
    printf("Position of the most significant set bit: %d\n", pos);
    // output: 4


    
    // toggling a bit
    int x = 5;
    int k = 1;
    // 5 = 101  ->  001 = 1
    x = x ^ (1 << k);
    printf("%d\n", x);
    // output: 1


    // clearing a bit
    int y = 7;
    int k1 = 1;
    // 7 = 111  ->  101 = 5
    y = y & ~(1 << k1);
    printf("%d\n", y);


    // setting a bit
    int z = 5;
    int k2 = 1;
    // 5 = 101  ->  111 = 7
    z = z | (1 << k2);
    printf("%d\n", z);

    // checking if a bit is set or not 
    int a = 5;
    int b = 1;
    // 5 = 101
    if(a & (1 << b)){
        printf("Bit is set\n");
    }else{
        printf("Bit is not set\n");
    }
    
    return 0;
}