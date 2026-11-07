#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int a[MAXN];
char c[MAXN];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(c[l]!=c[r])ans+=min(a[l],a[r]);
		if(a[l]>a[r]){
			a[l]-=a[r];
			r--;	
		}
		else if(a[l]==a[r]){
			l++;
			r--;
		}
		else{
			a[r]-=a[l];
			l++;
		}
	}
	printf("%lld",ans);
	return 0;
}
