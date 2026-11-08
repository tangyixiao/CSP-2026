#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
int a[N],ans[M];
deque<int>q;
map<int,int>donk;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(donk[a[j]]==0){
				q.push_front(a[j]);
				donk[a[j]]++;
			}
			else{
				bool nico=1;
				while(!q.empty()){
					int s=q.front();
					if(s==a[j]){
						q.pop_front();
						donk[s]--;
						nico=0;
						break;
					}
					else{
						q.pop_front();
						donk[s]--;
					}
				}
				donk[a[j]]++;
				q.push_front(a[j]);
			}
		}
		while(!q.empty()){
			int s=q.front();
			q.pop_front();
			donk[s]--;
			ans[s]++; 
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 
