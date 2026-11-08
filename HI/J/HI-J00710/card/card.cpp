#include<bits/stdc++.h>
using namespace std;
deque <int> q1,q2;//q1存牌桌上牌组，q2存pop的牌 
int n,m,a[500009],b[500009],v[500009];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	
	for(int i=1;i<=m;i++){
		memset(v,0,500009);
		for(int j=i;j<=n;j++){
			if(v[a[j]]==0){//队中无k直接插入k 
				q1.push_back(a[j]);
				v[a[j]]=1;
			}
			else if(v[a[j]]!=0){
				while(q1.front()!=a[j]){//将q1中k前全部弹出至q2 
					q2.push_back(q1.front());
					q1.pop_front();
				}
				while(!q1.empty()){//将q1清空 
					v[q1.front()]=0;
					q1.pop_front();
				}
				v[a[j]]=1;
				while(!q2.empty()){//将q2还回q1 
					q1.push_front(q2.back());
					q2.pop_back();
				}
				q1.push_back(a[j]);
			}
		}
		while(!q1.empty()){
			b[q1.front()]++;		
			q1.pop_front();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
} 
