#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
struct line{
	bool f;
	int s;
} F[300005];
bool g;
int ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(F[a[j]].f){
				for(int k=F[a[j]].s;k<=j;k++){
					F[a[k]].f=0;
					F[a[k]].s=0;
				}
				F[a[j]].f=1;
				F[a[j]].s=j;
			}
			else{
				F[a[j]].f=1;
				F[a[j]].s=j;
			}
		}
		for(int j=1;j<=m;j++){
			ans[j]+=F[a[j]].f;
			F[a[j]].f=0;
			F[a[j]].s=0;
			
		}
	}
	for(int i=1;i<=m;i++){
		if(a[n]==i){
			cout<<n<<" ";
		}
		else cout<<ans[i]<<" ";
	}
	return 0;
}
