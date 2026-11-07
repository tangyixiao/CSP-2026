#include<bits/stdc++.h>
using namespace std;
int a[500007];
int b[300007];
int main(){
	freopen("card.in","w",stdin);
	freopen("card.out","r",stdout);
	int n,m,d;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int y=i;
		while(y<=n){
			d=y;
			for(int x=n;x>y;x--){
				if(a[x]==a[y]){
					y=x;
					x=y;
				}
			} 
			if(y==d){
				b[a[y]]++;
				y++;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<b[i]<<" ";
	return 0;
}
