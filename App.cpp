/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Alexander Williams
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;

// Answer: no you should not declare a non-reference function argument. It could result in a compiler error.
// This means that you are passing a non-modifiable variable in your function call.
// We might want to do that because we may think it is easier or it may speed up the code.
// People do not do this often because if you try to modify the variable in the function call, it will result in a compiler error.

// This function attempts to add 1 to a which is the paramter
// It will result in a compiler error since a is read-only
int add(const int a){
    a = a + 1; // here is the issue
    return a;
}

// Main will result in a compiler error, if this code is compiled
int main(){
    const int a = 1;

    int result = add(a);

    cout << result << endl;
}