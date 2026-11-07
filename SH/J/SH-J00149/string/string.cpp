#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    long long n,f=0,l,ans=0,t;
    cin>>n;
    vector<int> a(n);
    vector<char> b(n);
    l=n-1;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    while(f<l){
        t=min(a[f],a[l]);
        a[f]-=t;
        a[l]-=t;
        if(b[f]!=b[l])
            ans+=t;
        if(a[f]==0)
            f++;
        if(a[l]==0)
            l--;
    }
    cout<<ans;
	return 0;
}
