#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],maxs=0;
void q(int x,int s){
	for(int i=x+1;i<=n;i++){
		s=max(s,(a[x]&a[i]));
	}
	maxs=max(s,maxs);
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxn=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(a[i],maxn);
	}
	if(m==1){
		cout<<maxn;
	}else if(m==2){
		for(int i=1;i<=n;i++){
			q(i,0);
		}
		cout<<maxs;
	}else{
		int w=a[1];
		for(int i=2;i<=n;i++){
			w=(w&a[i]);
		}
		cout<<w;
	}
	return 0;
}
