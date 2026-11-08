#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxn=0,x,minn=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(a[i],maxn);
	}
	for(int i=1;i<=n;i++){
		if(a[i]<maxn){
			minn=max(minn,a[i]);
		}
	}
	cout<<minn;
	return 0;
}
