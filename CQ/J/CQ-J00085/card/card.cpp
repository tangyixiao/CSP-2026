#include<bits/stdc++.h>
using namespace std;
const int card_Max=5e5;
int card[card_Max],tj[card_Max],tj_b[card_Max];
bool c_b[card_Max];
queue <int> c_np; 
queue <int> c_nd;
queue <int> c_lsn; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			c_nd.push(card[j]); 
		} 
		memset(c_b,0,sizeof(c_b));
		while(!c_nd.empty()){
			int x=c_nd.front();
			c_nd.pop();
			if(!c_b[x]){
				c_b[x]=1;
				c_np.push(x);
			}
			else {
				int f=0;
				while(!c_np.empty()){
					int y=c_np.front();c_np.pop();
					if(!f&&x!=y){
						c_lsn.push(y);
					}
					else if(x==y)f=1;
				}
				while(!c_lsn.empty()){
					int y=c_lsn.front();c_lsn.pop();
					c_np.push(y); 
				}
				c_np.push(x);
			}
		}
		if(!c_np.empty()){
			while(!c_np.empty()){
				int x=c_np.front();c_np.pop();
				if(tj_b[x]==0){
					tj_b[x]=1;
					tj[x]++;
				}
			}
		}
		memset(tj_b,0,sizeof(tj_b));
	}
	for(int i=1;i<=m;i++)cout<<tj[i]<<" ";
	return 0;
} 
