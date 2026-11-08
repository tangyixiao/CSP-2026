#include<bits/stdc++.h>
using namespace std;
struct sis{
	int lth;
	string st;
}q[200000];
int n,m;
long long intpow(int a,int b){
	long long sm=1;
	for(int i=0;i<b;i++) sm*=a;
	return sm;
}
sis z(long long x){
	if(x==0) return {0,"0"};
	string s;
	int cnt=0;
	long long mi=1;
	while(mi<=x){
		cnt+=1;
		mi*=2;
	}
	long long k=x;
	for(int i=cnt;i>0;i--){
		if(k>=intpow(2,i-1)){
			s+='1';
			k-=intpow(2,i-1);
		}else{s+='0';}
	}
	return {cnt,s};
}
long long ezs(sis h){
	long long res=0;
	for(int i=0;i<(int)h.st.size();i++){
		if(h.st[i]=='1')res+=intpow(2,i);
	}
	return res;
}
bool cmp(sis a,sis b){
	return (a.lth<b.lth);
}
int SIz(bool v[200000],int qlt){
	int sul=0;
	for(int i=0;i<qlt;i++){
		if(v[i]) sul++;
	}
	return sul;
}
int main(){
	freopen("and.in",r,stdin);
	freopen("and.out",w,stdout);
	cin>>n>>m;
	int f;
	for(int i=0;i<n;i++){
		cin>>f;
		q[i]=(z(f));
	}
	sort(q,q+n,cmp);
	for(int i=0;i<n-1;i++){
		string gd;
		for(int j=0;j<q[n-1].lth-q[i].lth;j++) gd+='0';
		q[i].st=gd+q[i].st;
	}
	bool vis[200000]={0};
	for(int i=0;i<q[n-1].lth;i++) vis[i]=1;
	for(int i=0;i<q[n-1].lth;i++){
		if(SIz(vis,q[n-1].lth)>=m) break;
		int sa=0;
		for(int j=0;j<n;j++){
			if(vis[j]&&q[j].st[i]=='1') sa++;
		}
		if(sa>=m){
			for(int j=0;j<n;j++){
				if(vis[j]&&q[j].st[i]=='0'&&SIz(vis,q[n-1].lth)<m) vis[j]=0;
			}
		}
	}
	long long c[200000];
	int fa=0;
	for(int i=0;i<n;i++){
		if(vis[i]){
			c[fa]=ezs(q[i]);
			fa++;
		}
	}
	int answer = c[0];
	for(int i=1;i<m;i++){
		answer = answer & (c[i]) ;
	}
	cout<<answer;
	return 0;
}
