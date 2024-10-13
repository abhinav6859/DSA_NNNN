// extended_gcd

// find integral solution to the eqation of x and y 

/* ax+by=c
here ur input is a,b,c and output  value of x and y where x,y are integral

input 
3       how much equation u have 
2 4 8    means u have eq 2x+4y=8

if we change value of y in line 31 then we will find another solution

 ax+by =c
 has integral solution iff c is divisible by gcd(a,b)
*/
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
typedef vector<int> vi;


int ex_gcd(int a, int b,int &x,int &y){
    if(b==0)   { 
        x=1;
        y=1 ;  //y can be any integral
        return a;
    }
    int x1,y1;
    int g=ex_gcd(b,a%b, x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
void solve() {
    int a,b,c,g,x,y;
    cin >> a >> b >> c;
    if(a>b) g = ex_gcd(a,b,x,y);
    else g = ex_gcd(b,a,y,x);
    if(c%g == 0)  
      cout << "x =  " <<(c/g)*x  <<", y="<< (c/g)*y <<endl;
    else cout << "No solution exist !" << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    FOR(i,1,t+1) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
