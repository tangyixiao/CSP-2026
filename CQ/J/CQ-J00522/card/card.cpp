#include<bits/stdc++.h>
using namespace std;
int last[10005];
int a[10005];
int cnt[10005];
int n,m;
bool vis[10005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int d=1;
	while(n--){
		memset(vis,0,sizeof vis);
		
		int t[10005];
		memset(t,0,sizeof t);
		int ts=0;
        for(int i=d;i<=n;i++){
			if(!vis[a[i]]){
                t[++ts]=a[i];
				last[a[i]]=ts;
				vis[a[i]]=1;
			}else{
				for(int j=last[a[i]];j<=ts;j++){
					t[j]=0;
				}
				ts=last[a[i]];
                t[ts]=a[i];
			}
		}
		for(int i=1;i<=ts;i++){		
				cnt[t[i]]++;
		}
		d++; 
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
}
