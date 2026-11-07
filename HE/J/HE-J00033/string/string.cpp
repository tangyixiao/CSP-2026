#include<bits/stdc++.h>
using namespace std;

int main(){
	//freopen
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	
	string s;
	int n;
	cin >> n;
	while(n--){
		int t;
		string st;
		cin >> t >> st;
		for(int i = 1;i <= t;i++) s+= st;
	}
	
	//xiugai
	

	
	string fan;
	for(int i = s.size() - 1;i >= 0;i--){
		fan += s[i];
	}
	
	int ans = 0;
	
	
	for(int i = 0;i < s.size();i++){
		if(s[i] != fan[i]) ans++;
	}
	
	if(s == fan){
		cout << 0;
		return 0;
	}else{
		cout << ans / 2 << endl;
	}
}
