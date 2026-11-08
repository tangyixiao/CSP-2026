#include<bits/stdc++.h>
using namespace std;	
int n,m,a[500005],vis[500005],xx[500005];	
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<n;i++){
		vector<int>b;
		memset(vis,0,sizeof vis);
		for(int j=i;j<n;j++){
			if(vis[a[j]]==1||(!b.empty()&&b[b.size()-1]==a[j])){
				int ttt=0;
				for(int k=b.size();k>=0;k--){
					if(b[k]==a[j]){
						ttt=k;
					}
				}
				for(int k=ttt;k<=b.size();k++){
						vis[b[k]]=0;
						b.pop_back();
				}
			}
			vis[a[j]]=1;	
			b.push_back(a[j]);
		}
		for(int i=0;i<b.size();i++){
			xx[b[i]]++;
		}
	}	
	for(int i=1;i<=m;i++){
		cout<<xx[i]<<" ";	
	}
	return 0;
}

