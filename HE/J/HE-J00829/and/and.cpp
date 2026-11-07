#include<bits/stdc++.h>
using namespace std;
const int N=7e6+100,M=2e5+100;
struct Tire_01{
	int cnt,l,r;
}t[N];
int idx=1,n,m,a[M],ans=-1;
string to_num2(int x){
	string s="";
	while(x){
		s=(char)(x%2+'0')+s;
		x/=2;
	}
	while(s.size()<30)s='0'+s;
	return s;
}
int to_num(string s){
	int res=0,two=1;
	for(int i=(int)s.size()-1;i>=0;i--){
		res+=(int)(s[i]-'0')*two;
		two*=2;
	}
	return res;
}
void add(int p,string&s,int dep){
	if(dep>30)return;
	char c=s[dep-1];
	if(c=='0'){
		if(t[p].l==0)t[p].l=++idx;
		t[t[p].l].cnt++;
		add(t[p].l,s,dep+1);
	}
	else{
		if(t[p].r==0)t[p].r=++idx;
		t[t[p].r].cnt++;
		add(t[p].r,s,dep+1); 
	}
}
string query(int p){
	if(t[p].r&&t[t[p].r].cnt>0){
		t[t[p].r].cnt--;
		return '1'+query(t[p].r);
	}
	else if(t[p].l&&t[t[p].l].cnt>0){
		t[t[p].l].cnt--;
		return '0'+query(t[p].l);
	}
	else return "";
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		string s=to_num2(a[i]);
		add(1,s,1);
	}
	
	for(int i=1;i<=m;i++){
		if(ans==-1)ans=to_num(query(1));
		else ans&=to_num(query(1));
	}
	cout<<ans;
	return 0;
}

