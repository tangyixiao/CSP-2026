#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[500050],l[300050],sum[300050];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%lld%lld",&n,&m);
	//cout<<"I love cici";
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		l[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int j=i;
		bool flag=0;
		while(j<n){
			sum[a[j]]++;
			if(a[j]==a[n]) flag=1;
			j=l[a[j]]+1;
		}
		if(flag==0) sum[a[n]]++;
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
} 