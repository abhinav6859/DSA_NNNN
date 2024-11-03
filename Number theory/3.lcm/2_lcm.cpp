// lcm (least common multiple)
/*          
find lcm of n number 

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
    
    int n,g,l;
 cout<<"In one testcase how much element u have\n ";   
cin >>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
 l=v[0];
for(int i=1;i<n;i++){
    if(l>v[i]) g= gcd(l,v[i]);
else g= gcd(v[i],l);

l=(l*v[i])/g;
}  

    cout<<l<<endl;
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