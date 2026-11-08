#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],s[200005],cnt,b,num;
char c[200005];
int f(long long x){
	int l=1,r=n,m;
	while(l<r){
//		cout<<l<<" "<<r<<endl;
		m=(l+r)/2;
		if(s[m]<=x)l=m+1;
		else r=m;
	}
	return l;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s[i]=s[i-1]+a[i];
	}
	if(s[n]&1)a[f(s[n]/2)]--;
	int l=1,r=n;
	while(l<r){
//		for(int i=1;i<=n;i++)cout<<a[i]<<" ";
//		cout<<endl;
		if(a[l]>=a[r]){
			if(c[l]!=c[r])cnt+=a[r];
			a[l]-=a[r];
			a[r]=0;
		}else{
			if(c[l]!=c[r])cnt+=a[l];
			a[r]-=a[l];
			a[l]=0;
		}
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
