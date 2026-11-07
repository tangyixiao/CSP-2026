#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long sumi=0,sumj=0,j=n,w=0;
	for(int i=1;i<=n;i++){
		sumi+=a[i];
		while(sumj<sumi){
			if(sumj+a[j]-w>sumi){
				if(c[i]!=c[j]) ans+=sumi-sumj;
				w+=sumi-sumj;
				sumj=sumi;
			}
			else{
				if(c[i]!=c[j]) ans+=a[j]-w;
				sumj+=a[j]-w;
				w=0;
			}
			if(w==0) j--;
		}
	}
	cout<<ans/2;
	return 0;
}
