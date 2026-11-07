#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],e[300005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		int d[300005];
		bool f[300005];
		for(int i=j;i<=n;i++){
			f[i]=true;
			if(d[a[i]]!=0&&f[d[a[i]]]){
				for(int q=d[a[i]];q<i;q++){
					f[q]=false;
				}
			}
			d[a[i]]=i;
		}
		for(int i=j;i<=n;i++){
			if(f[i]){
				e[a[i]]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<e[i]<<" ";
	}
	return 0;
}