#include<bits/stdc++.h>
using namespace std;
long long n,m,vis[500005],sum;
bool f[500005];
queue<long long>q;//ÅÆ¿â 
queue<long long>l;//×ÀÃæ 
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;++i){
		long long u;
		cin>>u;
		q.push(u);
	}
	while(n--){
		memset(f,0,sizeof(0));
		for(int i=0;i<n;++i){
			long long fr=q.front();
			l.push(fr);
			q.pop();
			if(f[fr]==1){
				f[fr]=0;
				while(!l.empty()){
					q.push(l.front());
					l.pop();
				}
			}else{
				f[fr]=1;
			}
		}
		for(int i=0;i<m;++i){
			if(f[i]){
				vis[i]++;
			}
		}
	}
	for(int i=0;i<m;++i){
		cout<<vis[i]<<" ";
	}
		
		
}

