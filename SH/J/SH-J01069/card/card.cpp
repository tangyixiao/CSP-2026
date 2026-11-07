#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500005],b[500005],c[500005],pos,cnt[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	if(n<=5000){
		for(int t=1;t<=n;t++){
			pos=t;
			memset(c,0,sizeof(c));
			for(int i=t;i<=n;i++){
				c[a[i]]++;
				if(c[a[i]]>1){
					pos=i;
					c[a[i]]=1;
				}
			}
			for(int i=pos;i<=n;i++){
				cnt[a[i]]++;
			}
		}
		for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	}
	else{
		for(int i=1;i<=m;i++)cout<<n-i+1<<" ";
	}
	 
	
	
	
	return 0;
}
//O(nlogn)
