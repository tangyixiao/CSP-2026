#include<bits/stdc++.h>
#define N 200005
using namespace std;
long long n,ans;
int a[N];
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)scanf("%d %c",&a[i],&c[i]);
	if(n==1){
		cout<<0;
		return 0;
	}
	int l=1,r=n;
	while(l<=r){
		if(a[l]>a[r]){
			if(c[l]!=c[r])ans+=(long long)(a[r]);
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r]){
			if(c[l]!=c[r])ans+=(long long)(a[l]);
			a[r]-=a[l];
			l++;
		}
		else{
			if(c[l]!=c[r])ans+=(long long)(a[r]);
			l++;
			r--;
		}
	}
	printf("%lld",ans);
	return 0;
}