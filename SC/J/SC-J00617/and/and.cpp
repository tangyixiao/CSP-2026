#include<bits/stdc++.h>
using namespace std;
int n,m,a[35],t;
bool b[200005];
vector<int>ve[35];
queue<int>p;
int ppp(int x,int y){
	int o=1,h=x;
	while(y){
		if(y%2){
			o*=h;
		}
		h*=h;
		y/=2;
	}
	return o;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x,y=1;
		b[i]=1;
		cin>>x;
		while(x){
			if(x%2){
				a[y]++;
				ve[y].push_back(i);
			}
			x/=2;
			y++;
		}
	}
	for(int i=30;i>=1;i--){
		if(a[i]>=m){
			p.push(i);
		}
	}
	while(!p.empty()){
		int u=p.front(),k=0;
		p.pop();
		for(int i=0;i<ve[u].size();i++){
			int v=ve[u][i];
			if(b[v]==1){
				k++;
			}
		}
		if(k>=m){
			for(int i=1,j=0;i<=n;i++){
				if(ve[u][j]<i){
					j++;
				}
				if(ve[u][j]!=i){
					b[i]=0;
				}
			}
			t+=ppp(2,u-1);
		}
	}
	cout<<t;
	return 0;
}
