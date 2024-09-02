#include <bits/stdc++.h>
using namespace std;
 int main()
 {
  int t;
  cin>>t;
  while(t--){
  int n,j=1,flag=0;
  cin>>n;
  vector<int>v(n);
  cin>>v[0];
  for(int i=1;i<n;i++)
  {
    cin>>v[i];
    if(v[i-1]>v[i]) flag=1;
  }
 if(flag==1) cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
  }
    return 0;
 }