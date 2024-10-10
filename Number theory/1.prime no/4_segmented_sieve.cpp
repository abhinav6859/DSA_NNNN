// ALL PRIME NO. BETWEEN TWO GIVEN NO.

//1<=m<=n<=1000000000
//n-m<=100000

//for every testcase print all prime numbers p such that m<=p<=n;


//ANS
// if we apply seive methood here then time limit exeed 
// so we use seigmented seive 
  
  
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define FOR(i,a,b) for(int i=(a); i<(b); i++)
#define FORk(i,a,b,k) for(int i=(a); i<(b); i+=k)
#define RFOR(i,a,b) for(int i=(a); i>=(b); i--)
#define RFORk(i,a,b,k) for(int i=(a); i>=(b); i-=k)
#define pb push_back
typedef vector<int> vi; 
typedef long long int ll;

const int msm = 31623;      // root of 10^9
bool pr[msm+1], p[100001];    // augmented array
vi prs;
void sieve() {
    // Step 1
    FOR(i, 2, msm+1)
        pr[i] = true;
    for(int i=2; i*i<=msm; i++)
        if(pr[i])
            FORk(j, i*i, msm+1, i)
                pr[j] = false;
    FOR(i, 2, msm+1)
        if(pr[i])
            prs.pb(i);
}
void seg_sieve(int N, int M) {
    // Step 2 & 3
    FOR(i,0,M-N+1)  p[i] = true;
    if(N==1) p[0] = false; // Border case
    int sm = int(sqrt(M));
    for(auto i: prs) {
        if(i>sm)
            break;
        int x = (N/i)*i;
        if(x < N)
            x += i;
        if(x < i*i)
            x = i*i;
        FORk(j, x, M+1, i) {
            p[j-N] = false;
        }
    }
    FOR(i, 0, M-N+1)
        if(p[i])
            cout << N+i << endl;
}

void solve() {
    int n,m;
    cin >> n >> m;
    seg_sieve(n,m);
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    sieve();
    while(t--) {
        solve();
    }
    return 0;
}