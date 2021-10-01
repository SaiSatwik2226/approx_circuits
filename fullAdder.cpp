#include<bits/stdc++.h>
using namespace std;

struct fullAdder
{
    int sum;
    int carry;
};

fullAdder fullAdderCalc(int x3,int x2,int x1){
    fullAdder s;
    //carry
    s.carry = (x1^(x2^x3));
    //sum
    s.sum = ((x1&x2)|(x2&x3)|(x3&x1));
    return s;
}
