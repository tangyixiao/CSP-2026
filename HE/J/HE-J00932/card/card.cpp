#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[500005];
bool vis[300005];
int ans[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);
	//3 1 2 1 3 2 3 1 2 1  
	//3 1 
	//1 
	//2 1 
	//1 
	//3 1
	//2 1 
	//3 1 
	//1 
	//2 1
	//1
	
	//1 2 1 3 
	//1 3
	//2 1 3 
	//1 3
	//3
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int nn=1;
	while(nn<=n){
		stack<int>q;
	    for(int i=1;i<=n;i++){
		    vis[a[i]]=0;
    	}
    	int cnt=0;
		for(int i=nn;i<=n;i++){
		//	cout<<1<<endl;
			if(vis[a[i]]==0){
				q.push(a[i]);
				cnt++;
				vis[a[i]]=1;
	    	}
			else if(vis[a[i]]==1){
			//}
//				int j=vis[a[i]].pos;
//				for(int i=q.size();i>j;i--){
//					q.pop();
//				}
        		int j=0;
				while(1){
					if(q.size()){
						j=q.top();
						if(j!=a[i]){
						    vis[j]=0;
							q.pop();
						}
						else break;
					}
					else{
						break;
					}
				}
			}
		}
	//	cout<<"---------"<<q.size()<<endl;
//	    while(q.size()){
//	    	cout<<q.top();
//	    	q.pop();
//		}
//		cout<<endl;
		while(q.size()){
			int uu=q.top();
			ans[uu]++;
			q.pop();
		}
		nn++;
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
