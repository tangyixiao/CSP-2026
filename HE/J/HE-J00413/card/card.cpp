#include<bits/stdc++.h>
using namespace std;
const int N=5e5+100;
long long  a[N],b[N],d[N],ans[N];//a start,b doing,d posit

void clen(int x,int nn){
	int xx=d[x];
	for(int i=xx;i<=nn;i++) d[b[i]]=0,b[i]=0;
	b[xx]=x;
	d[x]=xx;
}
void solved(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int nn=0;
		memset(b,0,sizeof b);
		memset(d,0,sizeof d);
		for(int j=i;j<=n;j++){
			int x=a[j],xx=d[x];
			if(!d[x]) b[++nn]=x,d[x]=nn;
			else clen(x,nn),nn=xx;
		}
		for(int k=1;k<=m;k++) {
			if(d[k]) ans[k]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
//	int t; cin>>t; while(t--) 
	solved();
	
	return 0;
} 
