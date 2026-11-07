#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
bool b[500010];
int ans[500010];
int zhan[500010];
int tp;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int jc=1;
	while(jc<=n){
		memset(b,0,sizeof(b));
		tp=0;
		for(int i=jc;i<=n;i++){
			if(b[a[i]]){
				while(zhan[tp]!=a[i]){
					b[zhan[tp]]=0;
					tp--;
				}
				b[zhan[tp]]=0;
				tp--;
			}
			b[a[i]]=1;
			tp++;
			zhan[tp]=a[i];
		}
		for(int i=1;i<=m;i++){
			ans[i]+=b[i];
		}
		jc++;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 
//当断即断！ 