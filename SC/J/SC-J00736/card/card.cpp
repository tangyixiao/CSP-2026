#include<bits/stdc++.h>
using namespace std;
#define endl '/n'
const int N=5e5+5,M=3e5+5;
int n,m,a[N],cnt[M];
queue<int> q,p;
int find(int x){
	int s=0,re,t[M];
	bool f=false;
	while(p.empty()){
		t[s+1]=p.front();
		if(p.front()==x){
			f=true;
			re=s;
		}
		else p.pop();
		s++;
	}
	for(int i=re+1;i<=s+1;i++) p.push(t[i]);
	if(f) return re;
	else return m+1;
}
void shoupai(int x,int k){
	for(int i=1;i<=x;i++) q.pop();
	q.push(k);
	p.push(k);
	return;
}
void jisuan(){
	while(q.empty()){
		int x=q.front();
		cnt[x]++;
		q.pop();
		p.pop();
	}
	return;
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int k=find(a[i]);
			if(k!=m+1) shoupai(k,a[i]);
			else{
				q.push(a[i]);
				p.push(a[i]);
			}
		}
		jisuan();
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}
//4 3 1 2 1 3