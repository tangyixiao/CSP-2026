#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5;
int n,m,a[N];
int vis[N],ma=-1;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	
	if(m==1) {
		cout<<a[1];
		return 0;
	}
	if(m==n){
		int sum=a[1];
		for(int i=1;i<=n;i++){
			sum&=a[i];
		}
		cout<<sum;
		return 0;
	}
	if(m==2 && n<=2000){
		int maxnn=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i!=j){
					int sum=a[i]&a[j];
					maxnn=max(maxnn,sum);
				}
			}
		}
		cout<<maxnn;
		return 0;
	}
	ma=a[1];
	vis[1]=1;
	int maxn=-1;
	for(int k=1;k<m;k++){
		int v;
		maxn=-1;
		for(int i=1;i<=n;i++){
			if(vis[i]==1) continue;
			int sum=ma&a[i];
			if(maxn<=int(sum)){
				maxn=sum;
				v=i;
			}
		}
		vis[v]=1;
		ma=maxn;
	}
	cout<<ma;
	return 0;
}//35pts