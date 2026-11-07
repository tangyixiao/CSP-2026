#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int cards[20005]={};
	for(int i=1;i<=n;i++){
		cin>>cards[i];
	}
	int ans[20005]={};
	for(int mi=1;mi<=n;mi++){
	
		int inst[20005]={};
		for(int i=mi;i<=n;i++){
			if(inst[cards[i]]){
				while(inst[cards[i]]==1){
					inst[s.top()]=0;
					s.pop();
				}
				s.push(cards[i]);
				inst[cards[i]]=1;				
			}else{
				s.push(cards[i]);
				inst[cards[i]]=1;
			}
			//cout<<s.top()<<'\n';
		}
		for(int i=1;i<=m;i++){
			ans[i]+=inst[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}/*
card4.ans???
*/
