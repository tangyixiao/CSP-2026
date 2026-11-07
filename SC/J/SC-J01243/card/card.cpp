#include <bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
long long n,m,a[N],mx=-1,sum[M],x,v[N],st;
queue<long long> q;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		long long z=i,st=i;
		for(int j=i;j<=n;j++){
			q.push(a[j]);
			z=i;
			while(z<=j-1){
				if(a[z]==a[j]&&v[z]!=1){
					
					long long f=i;
					while(q.size()!=0){
						q.pop();
					}
					while(q.size()<(z-i+1)){
						q.push(a[f]);
						v[f]=1;
						f++;
					}
				}
				z++;
		}
		
		}
		while(q.size()!=0){
			long long x=q.front();
			sum[x]++;
			q.pop();
		}
		for(int i=1;i<=n;i++) v[i]=1;
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
}