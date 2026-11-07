#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+6;
struct Q{
	int number,val;
}q[N];

//vector<int > ans; 
int n,m,tot;
int a[N];
int pos[N][35],p[35],w[N][35],cur[N];

inline void modify(int x,int y){
	for(int i=0;i<30;i++){
		if((y>>i)&1) pos[x][i+1]=1;
		else pos[x][i+1]=0;
	}
	return ;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		modify(i,a[i]);
	}
	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=30;j++) cout<<pos[i][j]<<" ";cout<<"\n";
//	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=30;j++){
			if(pos[i][j]) w[j][++p[j]]=i;
//			if(j==9) cout<<p[j]<<" ";
		}
	}
	
//	for(int i=1;i<=30;i++){
//		cout<<p[i]<<" ";
//		for(int j=1;j<=p[i];j++) cout<<w[i][j]<<" ";cout<<"\n";
//	}
	
	int cnt=0;
	for(int i=30;i>=1;i--){
		if(p[i]<m) continue;
		cnt=i;
		for(int j=1;j<=p[i];j++) cur[++tot]=w[i][j];
		break;
	}
//	cout<<cnt<<"\n";
	
	if(tot==0){
		cout<<0;
		return 0;
	}
	
//	for(int i=1;i<=tot;i++) cout<<a[cur[i]]<<" ";cout<<"\n";
	
	for(int i=1;i<=tot;i++) q[i]={i,a[cur[i]]};
	
	sort(q+1,q+1+tot,[](const Q &a,const Q &b){
		return a.val>b.val;
	});
	
//	for(int i=1;i<=30;i++) cout<<pos[36][i]<<" ";cout<<"\n";
//	for(int i=1;i<=30;i++) cout<<pos[95294][i]<<" ";cout<<"\n";
//	for(int i=1;i<=10;i++) cout<<q[i].number<<" "<<q[i].val<<"\n";
//	cout<<tot<<"\n";
	int ans=q[1].val;//cout<<ans<<"\n";
	for(int i=2;i<=m;i++){
//		cout<<q[i].val<<" ";
		ans=(ans&q[i].val);
//		cout<<ans<<"\n";
	}
	cout<<ans;
	
//	bool fg=0;
//	while(tot>m){
//		for(int i=cnt-1;i>=1;i--){
//			for(int j=1;j<=tot;j++){
//				if(tot==m) fg=1;
//				if()
//			} 
//			if(fg) break;
//		}
//	}
	
	return 0;
}
/*
4 2
3 15 12 12

12


5 3
31 3 1 15 7

7
*/