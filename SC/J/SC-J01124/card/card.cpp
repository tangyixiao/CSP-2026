#include<bits/stdc++.h>
using namespace std;

const int N=5e5+10,M=3e5+10;
int n,m,line[N],fail[N],lst[M];
bool A=1;
void init(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>line[i];
		fail[i]=lst[line[i]];
		lst[line[i]]=i;
		if(line[i]<line[i-1]) A=0;
	}
}

void solve1(){
	bool is_in[205];
	int ans[205];
	memset(ans,0,sizeof(ans));
	memset(is_in,0,sizeof(is_in));
	stack<int> s;
	for(int i=1;i<=n;i++){
		
		for(int j=i;j<=n;j++){
			if(is_in[line[j]]){
				while(s.top()!=line[j]){
					is_in[s.top()]=0;
					s.pop();
				}
				if(s.top()==line[j]){
					is_in[s.top()]=0;
					s.pop();
				}
			}
			s.push(line[j]);
			is_in[line[j]]=1;
		}
		while(s.size()){
			is_in[s.top()]=0;
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
void solveA(){
	int ans[3001];
	memset(ans,0,sizeof(ans));
	for(int i=1;i<=n;i++){
		ans[line[i]]++;
		ans[m+1]--;
	}
	for(int i=1;i<=m;i++){
		ans[i]+=ans[i-1];
		cout<<ans[i]<<" ";
	}
}
void solve2(){
	if(n==1){ 
		cout<<n;
		return ;
	}
	int ans[3];
	memset(ans,0,sizeof(ans));
	for(int i=1;i<n;i++){
		if(line[i]!=line[n])ans[1]++,ans[2]++;
		else ans[line[i]]++;
	}
	ans[line[n]]++;
	cout<<ans[1]<<" "<<ans[2];
}

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	init();
	if(n<=500&&m<=200) solve1();
	else if(A) solveA();
	else if(m<=2) solve2();
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1

10 2
1 2 1 2 2 2 1 2 1 1

*/