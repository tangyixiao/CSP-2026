#include<bits/stdc++.h>
#define inf long long
using namespace std;
int fa[3*100000+5];
bool vis[3*100000+5];
vector<int> a;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
    	int t;
    	cin>>t;
    	a.push_back(t);
	}
	int y=0;
	for(int h=0;h<n;h++){
		for(int i=n;i>=y;i--){
		int g=i+1;
		if(vis[i]==0){
			for(int j=i-1;j>=y;j--){
			if(a[j]==a[i] && vis[j]==0){
				g=j;
			}
			break;
		}
		
		for(int q=g;q<i;q++){
			vis[q]=1;
		}
		}	
	}
		for(int j=y;j<n;j++){
			if(vis[j]==0){
				fa[a[j]]++;
			}
		}
		y++;
		for(int j=0;j<n;j++)vis[j]=0;
	}
		
	for(int i=1;i<=m;i++){
		cout<<fa[i]<<" ";
	}
	
	return 0;
}