#include<bits/stdc++.h>
using namespace std;

const int N=500005;
int n,m,x,cnt,cun,a[N],ans[N],car[N];
bool ql;

void card(int k){
	ql=0;
	for(int i=1;i<=cnt;i++){
		if(ql==1){
			car[i]=0;
		}
		else if(car[i]==k){
			ql=1;
			cun=i;
		}
	}
	if(ql==1){
		cnt=cun;
		return;
	}
	cnt++;
	car[cnt]=k;
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(++x<=n){
		memset(car,0,sizeof(car));
		cnt=0;
		for(int i=x;i<=n;i++){
			card(a[i]);
		}
		for(int i=1;i<=m;i++){
			for(int j=1;j<=cnt;j++){
				if(car[j]==i){
					ans[i]++;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
