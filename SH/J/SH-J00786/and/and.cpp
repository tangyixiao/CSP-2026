#include<bits/stdc++.h>
using namespace std;
#define N 222222
void open(string s){
	freopen((s+".in").c_str(),"r",stdin);
	freopen((s+".out").c_str(),"w",stdout);
}
int n,m,a[N],s[N*30],ch[N*30][2],cnt;
void push(int x){
	int id=0;
	for(int i=29;i>=0;i--){
		// if(x==262144)cerr<<i<<' '<<(x>>i&1)<<endl;
		// if(i==19&&(x>>i&1))cerr<<x<<endl;
		if(!ch[id][x>>i&1])ch[id][x>>i&1]=++cnt;
		id=ch[id][x>>i&1];++s[id];
	}
}
void add(int&id,int&jd){
	if(!id)return;
	if(!jd)jd=++cnt;
	s[jd]+=s[id];
	add(ch[id][0],ch[jd][0]);
	add(ch[id][1],ch[jd][1]);
}
int query(int x){
	int id=0,ans=0;
	for(int i=29;i>=0;i--){
		// cerr<<s[ch[id][1]]<<' '<<i<<' '<<x<<' '<<ans<<endl;
		if(!ch[id][1])id=ch[id][0];
		else if(s[ch[id][1]]<x)add(ch[id][1],ch[id][0]),id=ch[id][0];
		else id=ch[id][1],ans+=1<<i;
	}
	return ans;
}
int main(){
	open("and");
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i],push(a[i]);
	cout<<query(m)<<endl;
}