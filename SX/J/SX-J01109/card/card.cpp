#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],ans,cnt[300005],e,c,d[300005];

int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];


	}
	c=n;
	for(int j=1;j<=m;j++){
		for(int x=1;x<=c;x++){

			for(int i=1;i<=n;i++){
				cnt[i]=0;
			}
			for(int i=1;i<=n;i++){
				if(a[i]>0){
					e=a[i];
					cnt[e]++;
				}
			}
			for(int i=1;i<=n;i++){
				if(cnt[j]>0){
					d[j]++;
				}
			}

			n-=1;
			a[j]=0;
		}
	}
	for(int i=1;i<=n;i++){
		if(d>0){
			cout<<d[i];
		}
	}
	return 0;
}