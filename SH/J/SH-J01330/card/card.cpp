#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct node{
	ll s,num;
};
node x[5010];
ll y[5010],a[5010];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ll n,m;
	cin>>n>>m;
	ll d=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(true){
		if(d==0){
			break;
		}
		for(int i=n-d+1;i<=n;i++){
			if(x[a[i]].s==0){
				x[a[i]].s=1;
				x[a[i]].num=i;
			}
			else{
				for(int j=x[a[i]].num;j<=i;j++){
					x[a[j]].s=0;
				}
				x[a[i]].s=1;
				x[a[i]].num=i;
			}
		}
		for(int i=1;i<=m;i++){
			if(x[i].s==1){
				y[i]++;
				x[i].s=0;
			}
			x[i].num=0;
		}
		d--;
	}
	for(int i=1;i<=m;i++){
		cout<<y[i]<<" ";
	}
	return 0;
}
