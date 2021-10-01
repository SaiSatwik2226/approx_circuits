#include<bits/stdc++.h>
#include<bitset>
#include<iostream>

#include "fullAdder.h"
using namespace std;

struct exact_4_2
{
    int tout;
    int carry;
    int sum;
};

exact_4_2 exact_4_2Calc(int x4,int x3,int x2,int x1,int tin){
    exact_4_2 s;
    fullAdder f1,f2;
    f1 = fullAdderCalc(x4,x3,x2);
    f2 = fullAdderCalc(tin,x1,f1.sum);
    s.tout = f1.carry;
    s.carry = f2.carry;
    s.sum = f2.sum;
    return s;
}
