#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int t,cnt = 0;
	bool en = true;
	set<char>st;
	cin >> t;
	string ans = "",s = "";
	while(t--){
		long long n;
		char c;
		cin >> n >> c;
		while(n--){
			ans += c;
			st.insert(c);
		}
	}
	for(int i=ans.size()-1;i >= 0;i--) s += ans[i];
	if(st.size() == 1 || ans == s){
		cout << 0;
		return 0;
	}
	string frt = "",bak = "";
	for(int i=0;i < ans.size()/2;i++) frt += ans[i];
	if(ans.size()%2 == 0){
		for(int i=ans.size()-1;i >= ans.size()/2;i--) bak += ans[i];
	}
	else{
		for(int i=ans.size()-1;i > ans.size()/2;i--) bak += ans[i];
	}
	for(int i=0;i < frt.size();i++){
		if(frt[i] != bak[i]) cnt++;
	}
	cout << cnt;
	return 0;
} 
