// extended_gcd

// find allintegral solution to the eqation of x and y in given condition
// 0<=x,Y

// ax+by=c , gcd(a,b) = g
// g((a/g)x+(b/g)y)=c
// general solutiuon is
// (x,y)=(x1 + (b/g)k , y1-(a/g) k)
// x1,y1 is one solution  

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
   
    if(c%g == 0)  {
         int x1=(c/g)*x;
    int y1=(c/g)*y;
    int limit=-x1/(b/g)+1;
    int ulimit=y1/(a/g);
    if(y1%(a/g)==0)
    ulimit -= 1;
    cout<< ulimit-limit+1 <<endl;
for(int k=limit;k<ulimit+1;k++){
    
      cout   << x1+(b/g)*k  <<" "<< y1-(a/g)*k<<endl;
}
}
    else cout << 0 << endl;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    FOR(i,1,t+1) {
       // cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
