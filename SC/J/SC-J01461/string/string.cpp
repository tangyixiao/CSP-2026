#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string","r",stdin);
	freopen("string","w",stdout);
	const int N=2e5+5;
	int n;
	long long ans=0,a[N];
	char c[N];
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	} 
	int p=n,i=1;
	while(p>i){
		int x=min(a[i],a[p]);
		if(c[i]!=c[p]) ans+=x;
		a[i]-=x,a[p]-=x;
		if(a[i]<=0) a[i+1]+=a[i],i++;
		if(a[p]<=0) a[p-1]+=a[p],p--; 
	}
	cout<<ans;
	return 0;
}