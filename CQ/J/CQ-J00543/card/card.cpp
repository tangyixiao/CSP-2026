#include <bits/stdc++.h>
using namespace std;
int n,m;
struct taboo{
	int id;
	bool visted;
};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d %d",&n,&m);
	vector<int> a(n); 
	vector<taboo> vis(m+1);
	for(int i=1;i<=m;i++) {
		vis[i].id=INT_MAX;
		vis[i].visted=false;
	}
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	vector<int> tempo(n,0);
	vector<int> ans(m+1,0);
	vector<int> table(n,0);
	int idx=0;
	for(int i=0;i<n;i++) {
		idx=0;
		for(int j=1;j<=m;j++) {
			vis[j].id=INT_MAX;
			vis[j].visted=false;
		}
		for(int j=0;j<n;j++) {
			tempo[j]=0;
		}
		for(int j=0;j<n;j++) {
			table[j]=0;
		}
		for(int j=i;j<n;j++) {
			tempo[j]=a[j];
		}
		for(int j=i;j<n;j++) {
			if(vis[tempo[j]].visted==false) {
				vis[tempo[j]].visted=true;
				vis[tempo[j]].id=idx;//=j
				table[idx]=a[j];//table[j]=a[j]
				idx++;//Empty
			}else{
				for(int k=vis[tempo[j]].id;k<n;k++) {
					table[k]=0;
				}
				table[vis[tempo[j]].id]=tempo[j];
				idx=vis[tempo[j]].id+1;//E
			}
		}
		for(int j=0;j<n;j++) {
			if(table[j]!=0){
				ans[table[j]]++;
			}
		}
//		for(int i=0;i<n;i++) {
//			cout<<table[i]<<" ";
//		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++) {
		cout<<ans[i]<<" ";
	}
	return 0;
}
//Ignite-Miss-Without-Into-Past
//Collide-Entreal-S.h.e-Replace-Escape
