#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],b[M],s[M],n,m;
bool op=true,vis[M];
int main(){
	freopen("card.in","r",stdin);
	froopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<a[i-1])op=false;
	}
	if(op){ 
		for(int i=1;i<=n;i++)b[a[i]]++;
		for(int i=1;i<=n;i++){
			b[a[i]]--;	
			if(b[a[i]]==0){
				s[a[i]]=i; 
			} 
		}
	}
	else{
		for(int i=1;i<=n;i++)b[a[i]]=i;
		for(int i=1;i<=n;i++){
			memset(vis,0,sizeof vis);
			for(int j=i;j<=n;j=b[a[j]]+1){
				if(!vis[a[j]])s[a[j]]++;
				vis[a[j]]=true;
			}
		}
	}
	for(int i=1;i<=m;i++)printf("%d ",s[i]);
	return 0;
}
