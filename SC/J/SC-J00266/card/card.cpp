#include<bits/stdc++.h>
using namespace std;
vector<int> cards(1);
int n,m;
vector<int> all;
void start_from_i(int canshu){
	stack<int> st;
	unordered_map<int,bool> fin;
	for(int i=canshu;i<=n;i++){
		if(fin[cards[i]]==false){
			st.push(cards[i]);
//			cout<<"第"<<canshu<<"轮游戏，已经成功放入了"<<cards[i]<<endl;
			fin[cards[i]]=true;
		}else{
//			cout<<"第"<<canshu<<"轮游戏，想要放入"<<cards[i]<<"，但是已经有了重复卡牌，";
			while((!st.empty()) and (st.top()!=cards[i])){
				fin[st.top()]=false;
				cout<<st.top()<<' ';
				st.pop();
			}
//			cout<<"被清除了!"<<endl;
		}
	}
	for(int i=1;i<=m;i++){
		all[i]+=fin[i];
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	all.resize(m+1);
	for(int i=1;i<=n;i++){
		int tmp;
		cin>>tmp;
		cards.push_back(tmp);
	}
	for(int i=1;i<=n;i++){
		start_from_i(i);
	}
	for(int i=1;i<=m;i++){
		cout<<all[i]<<' ';
	}
}