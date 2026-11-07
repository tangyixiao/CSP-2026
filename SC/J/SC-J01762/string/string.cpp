#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define ex exit(0)
#define sinzo return
#define code 0
using namespace std;
const int N=6e5+10;
int a[N],b[N],c[N],d[N],qza[N],qzc[N];
int n,m,k,cnt,mx=-1e18,mn=1e18,sum,ans;
int vis[N],bj[N];
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int T=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		char t;
		cin>>a[i]>>t;
		b[i]=t;
		sum+=a[i];
		
	}
	if(n==1)
	{
		cout<<0;
		ex;
	}
	cnt=sum%2;
	sum/=2;
	for(int i=1,sm=0;i<=n;i++){
		sm+=a[i];
		if(sm>=sum){
			k=i;
			for(int i=n,j=1;j<=(n-k);i--,j++){
				m++;
				c[m]=a[i];
				d[m]=b[i];
			}
			for(int i=1;i<=k;i++){
				qza[i]=qza[i-1]+a[i];
			}
			for(int i=1;i<=m;i++){
				qzc[i]=qzc[i-1]+c[i];
			}
			if(sm>sum){
				m++;
				c[m]=qza[k]-sum;
				a[k]-=c[m];
				d[m]=b[k];
			}
			for(int i=1;i<=k;i++){
				qza[i]=qza[i-1]+a[i];
			}
			for(int i=1;i<=m;i++){
				qzc[i]=qzc[i-1]+c[i];
			}
			qza[k+1]=qzc[m+1]=1e18;
			break;
		}
	}
	int l=1,r=1,x=0,lax=0;
//	cout<<k<<' '<<m<<endl<<endl;
	while(l<=k&&r<=m){
		
		lax=x+1;
		int t=min(qza[l],qzc[r]);
		x=t;
		if(b[l]==d[r]){
			if((qza[l]<qzc[r]&&l!=k)||r==m)l++;
			else r++;
			continue;
		}
		
		t=x-lax+1;
		ans+=t;
//		cout<<x<<' '<<lax<<endl;
		
		if((qza[l]<qzc[r]&&l!=k)||r==m)l++;
		else r++;
		
	}
//	cout<<endl;
	cout<<ans;
	
	sinzo code;
	
}
/*
~~过不了样例6~~
~~毙掉了~~

过啦过啦过啦!!!!!!!!!!!!
3
2 a
2 b
1 c

2
2 a
3 a

5
5 a
4 b
6 c
5 a
5 b

//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
~~| ___              ______              ___    |        _______           ~~
~~| \  \            /  __  \            /  /    |       /  ___  \          ~~
~~|  \  \          /  /  \  \          /  /     |      /  /   \  \         ~~
~~|   \  \        /  /    \  \        /  /      |     /  /_____\  \        ~~
~~|    \  \      /  /      \  \      /  /       |    /   _______   \       ~~
~~|     \  \    /  /        \  \    /  /        |   /  /         \  \      ~~
~~|      \  \  /  /          \  \  /  /         |  /  /           \  \     ~~
~~|       \  \/  /            \  \/  /          | /  /             \  \    ~~
~~|        \____/              \____/           |/__/               \__\   ~~
_____________________________________________________________________________

|        _______           |       _____________     
|       /  ___  \          |      /  __________ \    
|      /  /   \  \         |     /  /          \ \   
|     /  /_____\  \        |    /  /            \_\  
|    /   _______   \       |   /  /                  
|   /  /         \  \      |   \  \              _   
|  /  /           \  \     |    \  \            / /  
| /  /             \  \    |     \  \__________/ /   
|/__/               \__\   |      \_____________/    


*/