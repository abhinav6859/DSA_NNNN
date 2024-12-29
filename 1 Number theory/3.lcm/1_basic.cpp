// lcm (least common multiple)
/*          
 any integer a ,b .
 then product of both number is product of their lcm and gcd.
|a*b|=gcd(a,b)*lcm(a,b)

gcd(a,b,c)=gcd(gcd(a,b),c)
lcm(a,b,c)=lcm(lcm(a,b),c)

*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
typedef vector<int>v;
typedef vector<string>vs;
typedef long long int ll;

int gcd(int a,int b){
    if(b==0)    return a;
    return gcd(b, a%b);
}

void solve(){
    int lcm,a,b,g ;
    cin>>a;
    cin>>b;
  
if(a>b) g= gcd(a,b);
else g= gcd(b,a);
lcm=(a*b)/g;
    cout<<lcm<<endl;
}
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cout<<"how much testcase u have \n";
    cin>>n;
    while(n--){
  solve();
}
return 0;
}