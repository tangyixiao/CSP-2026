#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[100001],ans[100001];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int q[10001];
		for(int j=i+1;j<=n;j++){
			q[j]=a[i]&a[j];
		}
		int y=0;
		for(int j=i+1;j<=n;j++){
			if(y<q[j]){
				y=q[j];
			}
		}
		ans[i]=y;
	}
	int q=0;
	sort(ans+1,ans+n+1,cmp);
	cout<<ans[m-1]<<endl;
	return 0;
}
