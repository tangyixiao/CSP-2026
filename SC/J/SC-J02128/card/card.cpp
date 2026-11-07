#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=5e5+5;
int a[N],p[N],s[N],ans[N],k[N],l[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=n;i>=1;i--){
		if(s[a[i]]==0){
			s[a[i]]=i;p[i]=1;k[i]=i;
		}
	}
	for(int i=1;i<=n;i++)l[i]=k[i]-k[i-1];
	for(int i=n-1;i>=1;i--){
		int j=i;
		while(j<n){
			if(p[j]==0)l[j+1]-=1,l[s[a[j]]]+=1;
			j=s[a[j]]+1;	
		}
	}int sum=0;
	for(int i=1;i<=n;i++){
		sum+=l[i];
		if(p[i]==1)ans[a[i]]=sum;
	}for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
