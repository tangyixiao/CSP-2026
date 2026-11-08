#include <bits/stdc++.h>
using namespace std;
const int maxn=20005;
int a[maxn];
int xand(int a,int b){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int era[35],erb[35],ans[35],xans=0;
	int i=1;
	while(a!=0)era[i]=a%2;
	int aw=i;
	i=1;
	while(b!=0)erb[i]=b%2;
	int bw=i;
	for(int j=1;j<=max(aw,bw);j++){
		if(era[j]==0||erb[j]==0){
			ans[j]=0;
			continue;
		}
		else{
			ans[j]=1;
			int det=0;
			if(j==1)det=1;
			for(int k=2;k<=j;k++){
				det*=2;
			}
			xans+=det;
		}
			
	}
	return xans;
	
}

int main(){
	int n,m,maxn=-1;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	int ans=a[n];
	for(int i=1;i<=m;i++)ans=xand(ans,a[n-i]);
	cout<<ans;
	
	return 0;
}
