#include<bits/stdc++.h>
using namespace std;
int n,m,ax,p[500005];
bool f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>ax;
		f[ax]=!(f[ax]);
		for(int j=1;j<=m;j++){
			if(f[j]){
				p[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<p[i]<<" ";
	}
	return 0;
}

