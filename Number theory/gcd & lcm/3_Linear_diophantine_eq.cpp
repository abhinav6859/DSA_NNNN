// find integral solution to the eqation

/* ax+by=c
gcd(a,b) = g
g(kx+my) = c  where k and m are integer 
then c/g has to be an integer 
c%g==0

hence , we can say ax+by =c
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


int gcd(int a, int b){
    if(b==0)    return a;
    return gcd(b, a%b);
}
void solve() {
    int a,b,c,g;
    cin >> a >> b >> c;
    if(a>b) g = gcd(a,b);
    else g = gcd(b,a);
    if(c%g == 0)    cout << "Yes" << endl;
    else cout << "No" << endl;
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

/*
Problem Statement/Link: (CW) https://www.spoj.com/problems/CEQU/
*/