#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int n;
    cin>>n;
    for(int i=0;i<n/2;i++)
    {
      for(int j=0;j<i;j++)
      {
        cout<<" ";
      }
    cout<<"\\";
    for(int j=0;j<n-2*(i+1);j++)
    {
     cout<<" ";
    }
    cout<<"/\n";
    }
    for(int i=0;i<n/2;i++)
    {
      cout<<" ";
    }
    cout<<"X"<<endl;
    for(int i=n/2-1;i>=0;i--)
    {
      for(int j=0;j<i;j++)
      {
        cout<<" ";
      }
      cout<<"/";
      for(int j=0;j<n-2*(i+1);j++)
      {
        cout<<" ";
      }
      cout<<"\\\n";
    }

    return 0;
}
