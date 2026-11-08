#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005],ans[500005];
bool g;
struct line{
	bool f;
	int s;
}Z[300005];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","W",stdout);
for(int i=1;i<=n;i++){
	cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(Z[a[j]].f){
				for(int k=Z[a[j]].s;k<=j;k++){
					Z[a[k]].f=0;
					Z[a[k]].s=0;
				}
				Z[a[j]].f=1;
				Z[a[j]].s=j;
			}
			else{ 
			Z[a[j]].f=1;
			Z[a[j]].s=j;
			}
		}
		for(int j=1;j<=m;j++){
		ans[j]+=Z[a[j]].f;
		Z[a[j]].f=0;
		Z[a[j]].s=0;
		}
	} 
	for(int i=1;i<=m;i++){
		if(a[n]==i){
			cout<<n<<" ";
		}else cout<<ans[i]<<" ";
	}
return 0;
}
