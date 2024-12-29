
// solution of 1389A(codeforces)

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

void solve(){
    int a=-1;
    int l,r;
    cin>>l>>r;
    if(l==1)
    cout<<l<<" "<<l+1 <<"\n";
  
   else if(l>1 && r>=2*l)
    cout<<l<<" "<<2*l <<"\n";
  
    else
    cout<<a<<" "<<a<<"\n";

}
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    while(n--){
  solve();
}
return 0;
}