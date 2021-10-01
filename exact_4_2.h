#ifndef AHMA_H
#define AHMA_H
#include<bits/stdc++.h>

using namespace std;

struct ahmaStruct
{
    bool sum;
    bool carry;
};

extern ahmaStruct ahmaCalc(bool x4,bool x3,bool x2,bool x1);

#endif 
