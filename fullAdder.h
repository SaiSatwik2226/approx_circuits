#ifndef FULLADDER_H
#define FULLADDER_H
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct fullAdderStruct
{
    bool sum;
    bool carry;
};


extern fullAdderStruct fullAdderCalc(bool x3,bool x2,bool x1);

#endif 
