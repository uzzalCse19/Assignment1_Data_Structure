#include <bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,flag=0;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int n2=unique(v.begin(),v.end())-v.begin();
    
    if(n==n2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
