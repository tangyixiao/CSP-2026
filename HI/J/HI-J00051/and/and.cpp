#include<bits/stdc++.h>
using namespace std;

int n,m;
long long a[200005];
long long ma;
bool bj[200005];
bool bjw;
bool cmp(long long ax,long long bx){
	return ax>bx;
}

void js(int c,long long z){
	if(bjw && z<ma){
		return;
	}
	if(c==m){
		ma=max(ma,z);
		bjw=true;
		return;
	}
	for(int i=1;i<=n;i++){
		if(!bj[i]){
			bj[i]=true;
			js(c+1,z&a[i]);
			bj[i]=false;
		}
	}
	return;
}

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%dll",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		bj[i]=true;
		js(1,a[i]);
		bj[i]=false;
	}
	cout<<ma;
	return 0;
}

