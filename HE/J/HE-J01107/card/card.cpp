#include<bits/stdc++.h>
using namespace std;
struct q{
	bool p=0;
	int q=0;
};
int ww[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,t;
	cin>>n>>m;
	q x[n+5];
	int a[n+5],b[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		t=0;
		for(int j=1;j<=n;j++){
			x[j].p=0;
		}
		for(int j=i;j<=n;j++){
			if(x[a[j]].p){
				for(int k=(x[a[j]].q)+1;k<=t;k++){
					x[b[k]].p=0;
				}
				t=x[a[j]].q;
				continue;
			}
			b[++t]=a[j];
			x[a[j]].p=1;
			x[a[j]].q=t;
		}
		for(int j=1;j<=t;j++){
			ww[b[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ww[i]<<" ";
	}
	return 0;
}
