#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
queue<int> q;
queue<int> hq;
int ans[500005];
int ans_2[500005];
vector<int> x;
bool b=1;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	int last=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(i==1) last=x;
		else{
			if(x<=last) b=0;
			ans_2[x]++;
		}
		q.push(x);
		hq.push(x);
	}
	if(b){
		for(int i=1;i<=m;i++){
			cout<<i<<" ";
		}
		return 0;
	}
	for(int i=1;i<=n;i++){
		map<int,int> ma;
		deque<int> q_2;
		ma.clear();
		int l=1;
		while(!q.empty()){
			int x=q.front();
			q.pop();
			if(ma[x]!=0){
				while(1){
					int y=q_2.back();
					if(y!=x) q_2.pop_back();
					else{
						q_2.pop_back();
						break;
					}
					ma[y]=0;
				}
				q_2.push_back(x);
			}else{
				ma[x]=l;
				q_2.push_back(x);
			}
			l++;
		}
		int x=hq.front();
		hq.pop();
		q=hq;
		
		while(!q_2.empty()){
			int x=q_2.front();
			q_2.pop_front();
			ans[x]++;
		}
	}	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
