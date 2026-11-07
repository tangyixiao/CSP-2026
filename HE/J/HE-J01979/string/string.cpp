#include<bits/stdc++.h>
using namespace std;
int n,s[200005];
long long ans;
char a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i) cin>>s[i]>>a[i];
	int sum1=0,sum2=n+1,l=0,r=0,min;
	n+=1;
	while(n>0){
		min=0;
		if(l==0){
			n--;
			sum1++;
			l=s[sum1];
		}
		if(r==0){
			n--;
			sum2--;
			r=s[sum2];
		}
		if(sum2<sum1) break;
		if(l>=r) min=r;
		else min=l;
		if(a[sum1]!=a[sum2]) ans+=min;
		l-=min;
		r-=min;
	}
	cout<<ans;
	return 0;
} 
