#include<bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 200005
//vector<int> a[35];
int love[MAXN];
int w[35];
int g[35]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296,8589934592,17179869184};
int n,m,ans,b,kkk,maxc,lef,da;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>b;
		love[i]=b;
		kkk=1;
		while(b!=0){
			if(b%2==1)
			w[kkk]++;
			b=b>>1;
			kkk++;
		}
		maxc=max(maxc,kkk-1);
	}
	for(int i=maxc;i>=0;i--){
		if(w[i]>=m)
		{
			for(int j=1;j<=n;j++){
			if(love[j]<g[i-1]&&love[j]!=0){
				kkk=1;
				while(love[j]!=0){
					if(love[j]%2==1)
					w[kkk]--;
					love[j]=love[j]>>1;
					kkk++;
				}
				love[j]=0;
			}
		}
		ans+=g[i-1];
		}
	}
	cout<<ans;
	return 0;
} 
