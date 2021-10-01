#include<bits/stdc++.h>
using namespace std;
// #include "ahma.h"
struct ahmaStruct
{
    bool sum;
    bool carry;
};

ahmaStruct ahmaCalc(bool x4,bool x3,bool x2,bool x1){
    ahmaStruct s;
    bool a = !(x1|x2);
    bool b = !(x3|x4);
    //carry
    s.carry = !(a|b);
    //sum
    s.sum = !(a&b);
    return s;
}

// int main(){
//     ahmaStruct ai;
//     ai = ahmaCalc(0,0,0,0);
//     cout<<ai.carry<<ai.sum<<endl;

//     return 0;
// }

