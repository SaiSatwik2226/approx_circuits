#include<bits/stdc++.h>
#include<bitset>
#include<iostream>

using namespace std;

struct halfAdder
{
    int sum;
    int carry;
};

halfAdder ahmaCalc(int x2,int x1){
    halfAdder s;
    s.sum = (x1^x2);
    s.carry = (x1&x2);
    return s;
}
