#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int n,m,a[500005],vis[300005];
bool f=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout); 
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])f=0;
	}if(f){
		for(int i=0;i<n;i++)vis[a[i]]++;
		for(int i=1;i<=m;i++)cout<<vis[i]<<" ";
		return 0;
	}else{
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){ 
				bool flag=0; 
				for(int l=i;l<j;l++){
					if(a[l]==a[j])flag=1;
					if(flag)a[l]=-1;
				}
			}
			for(int j=i;j<n;j++){
				vis[a[j]]++;
			}
		}for(int i=1;i<=m;i++)cout<<vis[i]<<" ";
	} 
	return 0;
}
