#include<bits/stdc++.h>
using namespace std;
string s="";
int ans=1e9;
set<char> se;
bool is_hw(string t){
	string rem="";
	for (int i=t.size()-1;i>=0;i--){
		rem+=t[i];
	}
	return rem==t;
}
void dfs(int pos,int step,char change){
	//pos:到第几个修改
	//step:当前修改次数
	//change:要修改成什么字符 
	if (pos>s.size()){
		if (is_hw(s)){
			ans=min(step,ans);
		}
		return;
	}
	s[pos]=change;
	if (pos<s.size()){
		dfs(pos+1,step,s[pos+1]);//下一个不改 	
	}
	for (auto i:se){
		dfs(pos+1,step+1,i);//下一个改成原字符串中的一个字符 
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		se.insert(c);
		for (int j=1;j<=a;j++){
			s+=c;
		}
	}
	string tem=s;
	if (n==1||is_hw(s)){
		cout<<0;
		return 0;
	}
	dfs(0,0,s[0]);
	s=tem;
	for (auto i:se){
		dfs(0,0,i);
		s=tem;
	}
	cout<<ans;
	return 0;
}
