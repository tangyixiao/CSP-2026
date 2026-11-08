#include <bits/stdc++.h>
using namespace std;

int a[30];
bool hw(string s){
	string t;
	for(int i = s.size() - 1;i >= 0;i--){
		t += s[i];
	}
	if(t == s){
		return true;
	}else{
		return false;
	}
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int sum = 0,cnt = 0;
	int n,m;
	string s,t;
	cin>>n;
	int d;
	for(int i = 1;i <= n;i++){
		cin>>m>>s;
		cnt += m;
		for(int j = 1;j <= m;j++){
			t += s;
		}
	}
	
	if(hw(t)){
		cout<<0;
	}else{
		if(cnt % 2 == 0){
			cout<<cnt - sum;
			return 0;
		}
	}
	return 0;
}
