#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10;
struct pai{
	int id,x;
}b[N]; 
int a[N],ans[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	//Trick||Treat!
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(!b[a[j]].x){
				b[a[j]].x=1;
				b[a[j]].id=j;
			}else{
				for(int k=b[a[j]].id;k<j;k++){
					b[a[k]].x=0;
					b[a[k]].id=0;
				} 
				b[a[j]].x=1;
				b[a[j]].id=j;
			}
//			for(int j=1;j<=m;j++){
//				cout<<b[j].x<<' ';
//			}
//			cout<<'\n';
		}
		for(int j=1;j<=m;j++){
			if(b[j].x)ans[j]++;
		}
		memset(b,0,sizeof(b));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	cout<<'\n';
	return 0;
} 