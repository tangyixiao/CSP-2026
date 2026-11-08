#include<bits/stdc++.h>
using namespace std;

long long n,a[1000001][2],l,r,ans=0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l=1;
	r=n;
	for(int i=1;i<=n;i++){
		long long t;
		char s;
		cin>>t;
		cin>>s;
		a[i][0]=t;
		a[i][1]=s-'a';
	}
	long long ls=a[1][0],lr=a[n][0];
	while(l<r){
		if(ls>lr){
			if(a[l][1]!=a[r][1]){
				ans+=lr;
			}
			ls-=lr;
			r--;
			lr=a[r][0];
		}
		else if(ls<lr){
			if(a[l][1]!=a[r][1]){
				ans+=ls;
			}
			lr-=ls;
			l++;
			ls=a[l][0];
		}
		else{
			if(a[l][1]!=a[r][1]){
				ans+=ls;
			}
			l++;
			r--;
			ls=a[l][0];
			lr=a[r][0];
		}
	}
	cout<<ans;
	return 0;
}
