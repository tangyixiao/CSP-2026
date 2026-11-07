#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int mp[500005];
int s[300005];
int bl[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		int r=0;
		for(int i=j;i<=n;i++){
			if(bl[a[i]]==0){
				bl[a[i]]=1;
				mp[r+1]=a[i];
				r++;
			}else{
				int k=0;
				while(a[i]!=mp[r]){
					bl[mp[r]]=0;
					r--;
				}
			}
		}
		for(int i=1;i<=m;i++){
			s[i]+=bl[i];
			bl[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	return 0;
}