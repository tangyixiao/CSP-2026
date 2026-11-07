#include<bits/stdc++.h>
using namespace std;
#define N 200005
#define LN 35
const int INF=(1<<30)-1;
struct Num{
	int x;string s;
	char operator [] (int i){
		return s[i];} 
};
int id,n,m,p;
int ct[LN],ans=INF;
Num a[N];
void solve(int id,int x){
	string s;
	for(int i=29;i>=0;i--){
		bool d=x&(1<<i);
		s.push_back((char)('0'+d));
		ct[29-i]+=d;
	}
	a[id]={x,s};
}
bool cmp(Num &x,Num &y){
	return x[id]>y[id];
}
void del(int id){
	for(int i=29;i>=0;i--){
		bool d=a[id].x&(1<<i);
		ct[29-i]-=d;
	}
}
int main(){ 
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		solve(i,x);
	}
	p=n;
	for(int i=0;i<30;i++){
		if(ct[i]<m){continue;}
		id=i;
		sort(a+1,a+p+1,cmp);
		while(a[p][i]=='0'){del(p--);}
	}
	for(int i=1;i<=m;i++){
		ans&=a[i].x;
	}
	cout<<ans;
	return 0;
} 
