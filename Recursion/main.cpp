//
//  main.cpp
//  Recursion
//
//  Created by Kishore Venkatesh on 11/07/22.
//

#include<iostream>
#include<stdio.h>
using namespace std;

void recursion(int n)
{
    if(n>0)
    {
        cout<<n;
        recursion(n-1);
        
    }
}

int main() {
    // insert code here...
    int x=3;
    recursion(x);
    return 0;
}
