#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >>n;
	string s="";
	for(int i = 1;i <= n;i++){
		int num;
		char a;
		cin >> num>> a;
		for(int i = 1;i <= num;i++){
			s=s+a;
		}
	}//
	int ans = 0;
	for(int i =0;i <s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}
	cout << ans;
	return 0;
}