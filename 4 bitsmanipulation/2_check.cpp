//     https://cp-algorithms.com/algebra/bit-manipulation.html

//  Function to check if x is power of 2
#include<iostream>
using namespace std;

bool PowerOfTwo(int x)
{
     // First x in the below expression is
     // for  the case when x is 0 
     return x && (!(x & (x - 1)));
}
int main(){
    int x;
    cin >> x;

cout<< PowerOfTwo(x) << endl;
}