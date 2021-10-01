#include<bits/stdc++.h>
using namespace std;

struct halfAdderStruct
{
    bool sum;
    bool carry;
};

halfAdderStruct halfAdderCalc(bool x2,bool x1){
    halfAdderStruct s;
    s.sum = (x1^x2);
    s.carry = (x1&x2);
    return s;
}
