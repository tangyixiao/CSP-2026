#include<bits/stdc++.h>
using namespace std;
int a[200005];
int n,m;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int maxn=-2e9;
	sort(a+1,a+n+1,cmp);
	if(m==1){
		cout<<a[1];
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,int(a[i]&&a[j]));
			}
		}
		cout<<maxn;
	}else if(m==n){
		int x=a[1];
		for(int i=2;i<=n;i++){
			x=x&&a[i];
		}
		cout<<x;
	}else{
		cout<<1;
	}
	return 0;
}
