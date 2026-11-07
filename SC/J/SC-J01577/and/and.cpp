#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
long long cf(int b){
	long long ans;
	ans=1;
	for (int i=1;i<=b;i++){
		ans*=2;
	}
	return ans;
}
string tw(int a){
	string ls;
	string ans="";
	while(a){
		ls+=(a%2+'0');
		a/=2;
	}
	return ls;
}
string fan(string ls){
	string ans;
	for (int i=ls.size()-1;i>=0;i--){
		ans+=ls[i];
	}
	return ans;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	string _ans="";
	
	vector<long long> a(n+1);
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a.begin()+1,a.end(),cmp);
	for (int i=1;i<=m;i++){
		string ls_st=tw(a[i]);
		if(i==1){
			_ans=ls_st;
		}
		else{
			int siz=min(_ans.size(),ls_st.size());
			for (int j=0;j<siz;j++){
				if(_ans[j]=='1'&&ls_st[j]=='1')
					_ans[j]='1';
				else _ans[j]='0';
			}
			_ans.resize(siz);
		}
	}
	fan(_ans);
	long long an=0;
	int o=_ans.size()-1;
	for (int i=0;i<_ans.size();i++){
		if(_ans[i]=='1'){
			an+=cf(o);
			o--;
		}
	}
	cout<<an;
}