#include<bits/stdc++.h>
using namespace std;

int main(){
  
vector<int>v{2,1,0,2,2,2,1,1,0,0,2,2,0,1,1};
int n= v.size();

// In Increasing order
int a=0,b=0;
int c=n-1,temp;
while(b<=c){
    if(v[b]==0)
       { 
        swap(v[a],v[b]);
        a++;
        b++;}
    
  else  if(v[b]==1)
b++;
  
  else{
swap(v[c],v[b]);
    c--;
 
  }
}


for(int i : v){
    cout << i << " ";
}
 cout<<endl;

}