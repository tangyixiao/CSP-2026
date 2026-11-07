#include<bits/stdc++.h>
using namespace std;
int a[200010],sumk[200010];
int cnt[300010];
int n,m;
stack<int> s;
void solvebf(){
	for(int i=1;i<=n;i++){
		memset(cnt,0,sizeof cnt);
		for(int j=i;j<=n;j++){
			if(cnt[a[j]]==0){
				cnt[a[j]]=1;
				s.push(a[j]);
			}
			else{
				while(!s.empty() && s.top()!=a[j]){
					cnt[s.top()]=0;
					s.pop();
				}
				s.pop();
				s.push(a[j]);
				cnt[a[j]]=1;
			}
		}
		while(!s.empty()){
			int w=s.top();
			s.pop();
			sumk[w]++;
		}
	}
}

void solvetp(){
	for(int i=1;i<=n;i++){
		if(a[i]==1) sumk[1]++;
		else sumk[2]++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n<=5000){
		solvebf();
	}
	else if(m==2){
		solvetp();
	}
	for(int i=1;i<=m;i++){
		cout<<sumk[i]<<" ";
	}
	return 0;
}
/*
1 0 1
2 0 1
3 1 1
4 1 1
5 1 2
6 2 2
7 2 3
8 2 3
9 3 3
10 3 3
*/
