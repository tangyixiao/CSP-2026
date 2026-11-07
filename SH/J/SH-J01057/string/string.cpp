#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long r=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		r+=a[i]; 
	}
	r--;
	long long ans=0,l=0,ln=0,rn=n-1,ll=a[0],rl=a[n-1];
	while(ln<=rn){
		int add=min(ll,rl);
		if(c[ln]!=c[rn]) ans+=add;
		l+=add+1;r-=add+1;
		rl-=add;ll-=add;
		if(ll==0) ll=a[++ln];
		if(rl==0) rl=a[--rn];
	}
	cout<<ans;
	return 0; 
}
