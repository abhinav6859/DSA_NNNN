/* It is also known as phi Function  phi symbol(n) .
it counts the number of integers between 1 and n (inclusive) which are
relatively prime to n .

7,3 are relatively prime or coprime 
a,b are coprime iff gcd (a,b)=1

1 is coprime with every positive integer 
only  1 is coprime with itself
if p is prime ,phi(p)=p-1
phi(7)=6 . {1,2,3,4,5,6}

* phi(n)<n, if n>1

* Phi(p^k)=p^k(1-1/p) where p is prime 

* phi(a*b)=phi(a)*phi(b)  if gcd(a,b)=1

general solution for any two integers a,b
* phi(a*b)=phi(a)*phi(b)*g/phi(g)    g=gcd(a,b)
 

* the prime factorization of n is p1^(k1)*p2^(k2)*.....pr^(kr)     where p is prime number .
then phi(n)=phi(p1^(k1))*phi(p2^(k2))*.....phi(pr^(kr)) .
 phi(n)=n.(1-1/p1)(1-1/p2)....(1-1/pr)


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


int phi(int n){
      int ans=n;
    for(int i=2;i*i<=n;i++){
   
 if(n%i==0){
 while (n%i==0)
 {
 n=n/i;                                       
 }
 ans=ans-ans/i;
 }
  
     }
      if(n>1)
   ans=ans-ans/n;
  return ans;
   
}
void solve(){
int n;
cin>>n;

  cout<<phi(n)<<endl;
   
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
     while(n--){
  solve();
}
return 0;
}