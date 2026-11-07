#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+10;
int n,a[N],c[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		char ch;
		cin>>a[i]>>ch;
		c[i]=ch-'a';
	}
	ll ans=0;
	for(int i=1,j=n;i<j;){
		int sum=min(a[i],a[j]);
		if(c[i]!=c[j])ans+=sum;
		a[i]-=sum,a[j]-=sum;
		if(a[i]==0)i++;
		if(a[j]==0)j--;
	} 
	cout<<ans;
	return 0;
}
