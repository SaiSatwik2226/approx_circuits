#include<bits/stdc++.h>
#include "fullAdder.h"
using namespace std;

struct exact_4_2Struct
{
    bool tout;
    bool carry;
    bool sum;
};

exact_4_2Struct exact_4_2Calc(bool x4,bool x3,bool x2,bool x1,bool tin){
    exact_4_2Struct s;
    fullAdderStruct f1,f2;
    f1 = fullAdderCalc(x4,x3,x2);
    f2 = fullAdderCalc(tin,x1,f1.sum);
    s.tout = f1.carry;
    s.carry = f2.carry;
    s.sum = f2.sum;
    return s;
}

// int main(){
//     exact_4_2Struct ex;
//     ex = exact_4_2Calc(1,1,1,1,1);
//     cout<<ex.tout<<" "<<ex.carry<<" "<<ex.sum<<endl;
//     return 0;
// }
