#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define ex exit(0)
#define sinzo return
#define code 0
using namespace std;
const int N=2e6+10;
int a[N],b[N],c[N];
int n,m,k,cnt,mx=-1e18,mn=1e18,sum,ans;
int vis[N],bj[N];
bool cmp(int a,int b)
{
	return a>b;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int T=1;
//	cin>>T;
	while(T--){
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n,cmp);
		for(int k=30;k>=0;k--)
		{
			if(((a[m]>>k)&1)==0)
			{
				int t=(1<<31)-1ll;
				t-=(1<<k);
				for(int i=1;i<=n;i++)
				{
					a[i]=(a[i]&t);
				}
				sort(a+1,a+1+n,cmp);
			}
		}
		ans=(1<<31)-1ll;
		for(int i=1;i<=m;i++)
		{
			ans=ans&a[i];
		}
		cout<<ans;
	}
	
	sinzo code;
	
}
/*
T3比T2简单？！
luogu 873466
_denghuaitian 是gay
sinzo 是gay
sabre 是gay
xzxAKIOI 是gay
//freopen("and.in","r",stdin);
//freopen("and.out","w",stdout);

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