#include<bits/stdc++.h>
using namespace std; 
const int N=2e5;

int n;
long long ans;
char c[N+5];
int a[N+5];

int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
    	cin>>a[i]>>c[i];
    for(int l=1,r=n,cntl=a[1],cntr=a[n];l<r;){
    	//cout<<"debug:"<<l<<' '<<r<<' '<<ans<<' '<<cntl<<' '<<cntr<<endl;
    	int t=min(cntl,cntr);
    	if(c[l]!=c[r]) ans+=t;
    	cntl-=t;
    	cntr-=t;
		if(cntl==0) l++,cntl=a[l];
		if(cntr==0) r--,cntr=a[r];
	}
	cout<<ans<<'\n';
    return 0;
}
