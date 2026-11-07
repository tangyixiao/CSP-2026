#include<bits/stdc++.h>
using namespace std;
int n,a[500010];
char c[500010];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	int l=1,r=n;
	bool b;
	while(l<r){
		b=1;
		if(c[l]==c[r])b=0;
		if(a[l]>a[r]){
			if(b)ans+=a[r];
			a[l]-=a[r];
			r--;
		}
		else if(a[l]<a[r]){
			if(b)ans+=a[l];
			a[r]-=a[l];
			l++;
		}
		else{
			if(b)ans+=a[r];
			r--;
			l++;
		}
	}  
	printf("%lld",ans);
	return 0;
}