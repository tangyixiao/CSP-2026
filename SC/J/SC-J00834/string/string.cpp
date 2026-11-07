#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n,ans=0;
    int a;vector<char> c;
    int l=0;char ci;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>ci;
        l+=a;
        while(a--){
            c.push_back(ci);
        }
    }
    long long le=0,r=l-1;
    for(;le<=r;le++,r--)
    {
        if(c[le]!=c[r]){ans++;}
    }
    cout<<ans;
    return 0;
}
