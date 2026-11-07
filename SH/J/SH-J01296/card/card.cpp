#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=500010,M=300010;
int b[M];
struct node {
	int v,l,n;
}a[N];
signed main(){
	freopen("card1.in","r",stdin);
	freopen("card1.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].v;
		a[i].l=i-1;
		a[i].n=i+1;
	}
	int ii=1;
	while(ii<=n){
		for(int i=1;i<=n;i++){
			a[i].l=i-1;
			a[i].n=i+1;
		}
		a[0].n=ii;
		a[ii].l=0;
		for(int i=ii;i<=n;){
			for(int j=a[i].l;j>0;){
				if(a[j].v==a[i].v){
					a[i].l=a[j].l;
					a[a[j].l].n=i;
				}
				j=a[j].l;
			}
			i=a[i].n;
		}
		cout<<'\n';
		for(int i=0;i<=n;i=a[i].n){
			b[a[i].v]++;
		}
		ii++;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	return 0;
}
