#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum,ans,x,y;
char c[200005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	x=1,y=n;
	for(long long i=1,j=1;i<=sum/2||j<=sum/2;){
		if(a[x]==a[y]){
			i+=a[x],j+=a[y];
			if(c[x]!=c[y]) ans+=a[x];
			x++,y--;
		}
		else{
			long long z=min(a[x],a[y]);
			i+=z,j+=z;
			a[x]-=z,a[y]-=z;
			if(c[x]!=c[y]) ans+=z;
			if(a[x]==0) x++;
			if(a[y]==0) y--;
		}
	}
	cout<<ans;
	
	return 0;
}
/*
 I'm the god , and the smartest brain in the world  think this code isn't correct .
 Although I have much power , but I can't find any data can hack it.(Well ,the true is,I'm too lazy)
 Q : Do you know who am I ? A : I'm the god of qu!!! 
*/