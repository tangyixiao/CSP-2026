#include<bits/stdc++.h>
using namespace std;
const int N=5e5+20;
const int M=3e5+10;

struct node{
	long long cnt;
	int l,r;
	int toid;
};

int n,m;
int a[N];
node vec[N];

int idbi[M];
int to[N];

long long sum[N];
long long ans[M];


int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);	
	cin>>n>>m;
	int FF=N-2;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=0;i<=n+1;i++)idbi[i]=to[i]=FF;
	for(int i=n;i>=1;i--){
		int it=a[i];
		if(idbi[it]!=FF){
			to[i]=i;
			vec[i].cnt++;
			vec[i].toid=idbi[it];
		}
		else{
			to[i]=to[i+1];
			vec[i].cnt++;
			vec[i].l=i;
			vec[i].r=to[i]-1;
			vec[i].toid=to[i];
		}
		
		
		
		idbi[it]=i;
	}
	
	for(int i=1;i<=n;i++){
		if(vec[i].l&&vec[i].r){
			sum[vec[i].l]+=vec[i].cnt;
			sum[vec[i].r+1]-=vec[i].cnt;
		}
		sum[i]+=sum[i-1];
		vec[ vec[i].toid ].cnt= vec[ vec[i].toid ].cnt + vec[i].cnt;
		ans[ a[i] ]+=sum[i];
	}

	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} 