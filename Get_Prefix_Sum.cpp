#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
 int main()
 {
  int n,j=1;
  cin>>n;
  vector<int>v(n);
  vector<long long int>prSum(n);
  cin>>v[0];
  prSum[0]=v[0];
  for(int i=1;i<n;i++)
  {
    cin>>v[i];
    prSum[j]=prSum[j-1]+v[i];
    j++;
  }
 for(int i=n-1;i>=0;i--) cout<<prSum[i]<<" ";
 cout<<endl;
    return 0;
 }