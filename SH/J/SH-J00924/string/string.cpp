#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005][2];
long long cnt,b,ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long x;char c;
		cin>>x>>c;
		a[i][0]=x,a[i][1]=c-'a';
		cnt+=x;
	}
	int l=1,r=n,lc=0,rc=0;
	while(l<r){
		if(a[l][0]-lc>a[r][0]-rc){
			if(a[l][1]!=a[r][1])ans+=a[r][0]-rc;
			lc+=a[r][0]-rc;
			r--;
			rc=0;
		}
		else if(a[l][0]-lc<a[r][0]-rc){
			if(a[l][1]!=a[r][1])ans+=a[l][0]-lc;
			rc+=a[l][0]-lc;
			l++;
			lc=0;
		}
		else{
			if(a[l][1]!=a[r][1])ans+=a[l][0]-lc;
			l++;
			r--;
			lc=0;
			rc=0;
		}
	}
	cout<<ans;
	return 0;
}
