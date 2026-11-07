#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e5+50;
int n,m;
int a[MAXN];
int ans[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5){
		for(int i=1;i<=n;i++){
			int x=0,y=0;
			for(int j=i;j<=n;j++){
				if(a[j]==1&&x==0){
					x=j;
				}
				if(a[j]==2&&y==0){
					y=j;
				}
				if(a[j]==1&&x!=0){
					if(y>x){
						y=0;
					}
					x=j;
				}
				if(a[j]==2&&y!=0){
					if(x>y){
						x=0;
					}
					y=j;
				}
			}
			if(x!=0){
				ans[1]++;
			}
			if(y!=0){
				ans[2]++;
			}
		}
		cout<<ans[1]<<" "<<ans[2];
		return 0;
	}
	if(m<=2){
		int xx=0,yy=0,x=0,y=0;
		for(int i=n;i>=1;i--){
			if(a[i]==1&&xx==0){
				xx=i;
			}
			if(a[i]==2&&yy==0){
				yy=i;
			}
			if(a[i]==1){
				x++;
			}else{
				y++;
			}
		}
		if(xx==n){
			ans[1]=n;
			ans[2]=y;
		}
		if(yy==n){
			ans[2]=n;
			ans[1]=x;
		}
		cout<<ans[1]<<" "<<ans[2];
		return 0;
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]=max(ans[a[i]],i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
//11:05 16pts
//11:10 28pts
//11:36 36pts??
//11:49 36pts?