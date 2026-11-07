#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=2e5+10;

int a[N];
vector<int> e[100];
bool vis[N][35];
vector<int> ch;
int ee[100];
bool viss[N];

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		int now=0;
		int aa=a[i];
		while(aa){
			if(aa%2==1){
				e[now].push_back(i);
				vis[i][now]=1;
			}
			now++;
			aa/=2;
		}
	}
	/*for(int i=0;i<=30;i++){
		for(int it:e[i]){
			cout<<it<<" ";
		}
		cout<<endl;
	}*/
	//cout<<1;
	for(int i=31;i>=0;i--){
		if(e[i].size()>=m){
			for(int it:e[i]){
				ch.push_back(it);
			}
			break;
		}
	}
	//cout<<1;
	for(int it:ch){
		for(int i=0;i<=31;i++){
			if(vis[it][i]){
				ee[i]++;
			}
		}
	}
	//cout<<1;
	int num=ch.size();
	for(int i=31;i>=0;i--){
		if(ee[i]>=m){
			for(int it:ch){
				if(!vis[it][i]&&!viss[it]){
					for(int j=0;j<=30;j++){
						if(vis[it][j]) ee[j]--;
					}
					viss[it]=1;
					num--;
				}
			}
		}
		if(num==m){
			break;
		}
	}
	int ans=2147483647;
	for(int it:ch){
		if(!viss[it]){
			ans=(ans&a[it]);
		}
	}
	cout<<ans;
	return 0; 
}
