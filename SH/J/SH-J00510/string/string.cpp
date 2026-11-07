#include <bits/stdc++.h>
using namespace std;

int a[200005],n,minn,maxn,flag=-1;
char c[200005];
long long cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {cin>>a[i]; cin>>c[i];}
	int i=1;
	minn=min(a[1],a[n]);
	maxn=max(a[1],a[n]);
	while(i<n-i+1){
		if(flag==0) {minn=min(a[i],maxn); maxn=max(a[i],maxn);}
		else if(flag==1) {minn=min(maxn,a[n-i+1]); maxn=max(maxn,a[n-i+1]);}
		if(minn==a[i]) flag=0; else flag=1;	//flag=0,左更小;flag=1,右更小
		if(c[i]!=c[n-i+1]) {cnt+=minn;}
		maxn-=minn;
		if(flag==0) {i++; n++;} else n--;
	}
	cout<<cnt;
	return 0;
}
