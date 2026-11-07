#include<bits/stdc++.h>
#define int long long
using namespace std;
int ans;
int n;
int m;
string c;
string s;
int check(string x){
	int len = s.size();
	for(int i = 0;i < len/2;i++){
		if(x[i] != x[len+1-i]){
			return 0;
		}
	}
	return 1;
}

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> m >> c;
		for(int j = 1;j <= m;j++){
			s += c;
		}
	}
	int tmp = check(s);
	if(tmp == 1){
		cout << 0;
	}else{
		int a = s.size()/2;
		if(s.size()%2 == 0){
			int cnt = 1;
			for(int i = a;i < s.size();i++){
				if(s[i] != s[i-cnt]){
					++ans;
				}
				cnt += 2;
			}
		}else{
			int cnt = 2;
			for(int i = a+1;i < s.size();i++){
				if(s[i] != s[i-cnt]){
					++ans;
				}
				cnt+=2;
			}
		}
		cout << ans;
	}
	return 0; 
}
