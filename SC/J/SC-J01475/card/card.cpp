#include<bits/stdc++.h>
#define AC return 0
using namespace std;
const int N=5*1e5,M=3*1e5;
int a[N+4],sum[M+4],q[N+4];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int t=0;vector<bool>b(m+1);
		for(int j=i;j<=n;j++){
			if(b[a[j]]==false)t++,q[t]=a[j],b[a[j]]=true;
			else{
				for(;true;){
					if(q[t]!=a[j])b[q[t]]=false,t--;
					else break;
				}
			}
		}//cout<<t<<'\n';
		for(int j=1;j<=t;j++){
			sum[a[j]]++,b[a[j]]=false;
			//cout<<a[j]<<' ';
		}//cout<<'\n';
		//for(int i=1;i<=m;i++)cout<<b[i];
		//cout<<'\n';
	}for(int i=1;i<=m;i++)cout<<sum[i]<<' ';
	AC;
}