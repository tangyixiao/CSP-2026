#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,m,a[500005],ans[500005],lll[500005],anss[500005],t[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=true; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i])f=false;
	}if(f==true){
		for(int i=1;i<=n;i++){
			for(int j=a[i];j<=m;j++)ans[j]++;
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	}
	else{
		for(int i=n;i>0;i--){
			if(lll[a[i]]==0)lll[a[i]]=i;
		}for(int i=1;i<=n;i++){
			memset(anss,0,sizeof(anss));
			memset(t,0,sizeof(t));
			int top=0;
			for(int j=lll[a[i]];j<=n;j++){
				for(int k=1;k<=m;k++){
					if(a[j]==k){
						if(anss[k]!=0){
							top=anss[k];
							for(int l=top+1;l<=m;l++)t[l]=0;
						}if(anss[k]==0){
							anss[k]=++top;
							t[top]=a[j];
						}
					}
				}
			}for(int j=1;j<=m;j++)ans[t[j]]++;
		}for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	}
} 
