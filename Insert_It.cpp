#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    
int n,m;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  cin>>m;
  vector<int>v2(m);
for(int i=0;i<m;i++) cin>>v2[i];
int x;
cin>>x;
v.insert(v.begin()+x,v2.begin(),v2.end());
for(int i=0;i<n+m;i++) cout<<v[i]<<" ";
cout<<endl;
    return 0;
}
