#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
struct sum{
	int cnt=0;
};
sum c[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	queue <int> q1;
	queue <int> q2;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){//n局游戏 
		while(!q2.empty()){
			q2.pop();
		} 
		while(!q1.empty()){
			q1.pop();
		}
		for(int j=i;j<=n;j++){//n-i次出牌
			while(!q2.empty()){
				q1.push(q2.front());
				q2.pop();
			} 
			for(int k=1;k<=q1.size();k++){
				if(q1.front()!=a[j]){
					q2.push(q1.front());
					q1.pop();
				}else{
					break;
				}
			} 
			q2.push(a[j]);
			while(!q1.empty()){
				q1.pop();
			}
		}
		int h=q2.size();
		for(int j=1;j<=h;j++){
			c[q2.front()].cnt++;
			q2.push(q2.front());
			q2.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<c[i].cnt<<" ";
	}
	return 0;
}
