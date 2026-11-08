#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200001],ans,mx;
long long cmp(long long x,long long y){
	return x>y;
}
void wu(long long x,int y,int z){
	if(y==m){
		ans=max(ans,x);
		return;
	}
	for(int i=z+1;i<=n-m+y+1;i++){
		wu(x&a[i],y+1,z=i);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mx+=a[i];
	}
	mx=mx/(n+m);
	sort(a,a+n,cmp);
	for(int i=0;i<=n-m;i++){
		if(a[i]<mx){
			break;
		}
		wu(a[i],1,i);
	}
	cout<<ans;
	return 0;
} 
