#include <stdio.h>

struct st_record {
    int marks;

};

int main(){

    return 0;
}


/*
    Rules for initialization
    1. Can't initialize individual members
    2. Initialization value must match the orders of member
    3. We can initialize partially, eg. only the first few members.
    4. Unitialized members will be assigned default values e.g. for char/char[] -> '\0' and for int/float -> '0'
*/