#include<bits/stdc++.h>
using namespace std;
int f[200100];
long long ans=0;
char a[200100];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d%s",&f[i],&a[i]);
	int l=1,r=n;
	while(l<r){
		if(f[l]==f[r]){
			if(a[l]!=a[r]) ans+=f[l];
			f[l]=0; f[r]=0;
			l++; r--;
		}
		else if(f[l]>f[r]){
			if(a[l]!=a[r]) ans+=f[r];
			f[l]-=f[r]; f[r]=0;
			r--;
		}
		else{
			if(a[l]!=a[r]) ans+=f[l];
			f[r]-=f[l]; f[l]=0;
			l++;
		}
	}
	printf("%lld",ans);
	return 0;
}