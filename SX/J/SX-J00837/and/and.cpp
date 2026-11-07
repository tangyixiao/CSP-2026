#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,b[200005],cur;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[j]>b[i]){
				b[i]=a[j];
				cur=j;
			}

		}
		a[cur]=-1;
		n--;
	}
	ans=b[1];
	for(int i=2;i<=m;i++){
		ans=ans&b[i];
	}
	cout<<ans;
	return 0;
}