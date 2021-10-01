#ifndef HALFADDER_H
#define HALFADDER_H
#include<bits/stdc++.h>

using namespace std;

struct halfAdderStruct
{
    bool sum;
    bool carry;
};

halfAdderStruct halfAdderCalc(bool x2,bool x1);

#endif 
