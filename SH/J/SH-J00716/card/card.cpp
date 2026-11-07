#include<bits/stdc++.h>
using namespace std;
long long n,m,a[10010],answer[1000010];
bool vis[1000010];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int l=1;l<=m;l++){
		vis[l]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		queue<int> q;
		queue<int> qq;
		for(int l=i;l<=n;l++){
			if(vis[a[l]]==1){
				while(q.front()!=a[l]){
					if(q.front()!=a[l]){
						qq.push(q.front());
						q.pop();
					}
				}while(q.empty()==0){
					vis[q.front()]=0;
					q.pop();
				}while(qq.empty()==0){
					q.push(qq.front());
					qq.pop();
				}
			}
			q.push(a[l]);
			vis[a[l]]=1;
		}
		while(q.empty()==0){
			answer[q.front()]++;
			q.pop();
		}
		for(int l=1;l<=m;l++){
			vis[l]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<answer[i]<<" ";
	}
	//s.reserve(s.begin(),s.end());
	return 0;
}
//freopen("","r",stdin);
//freopen("","w",stdout); 

