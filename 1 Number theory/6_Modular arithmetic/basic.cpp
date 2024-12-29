// Modular arithmetic
/*
(a+b) % p = ( (a%p) + (b%p))%p

(a-b) % p = ( (a%p) - (b%p))%p

(a*b) % p = ( (a%p) * (b%p))%p
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

void solve(){
    int a ,b,c;
    cin >> a >> b ;
    int ans = 1 ;
     int p= 13;
    while(b){
        if(b%2 == 1) ans = ((ans%p)*(a%p))%p ;
        b >>=1;
        a = ((a%p)*(a%p))%p;
    }
    cout<< ans << endl; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n ;
    while(n--){
  solve();
}
return 0;
}