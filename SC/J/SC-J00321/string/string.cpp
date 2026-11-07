#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	freopen("in.string","r",stdin);
	freopen("out.string","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	
	cin >> n;
	ll sum =0;
	string s="";
	for(int i = 1; i <= n;i++){
		ll x;
		char y;
		cin>>x>>y;
		sum+=x;
		for(int i = 1; i <= x;i++){
			s+=y;
		}
	}
	
	ll cnt=0;
	if(sum % 2 == 0){
		for(int i = 0; i <= sum/2-1;i++){
			if(s[i] != s[sum-i-1])cnt++;
			//cout << s[i] << " "<< s[sum-1-i] << endl;
		}
	}
	if(sum % 2 == 1){
		for(int i = 0; i < sum/2;i++){
			if(s[i] != s[sum-i-1])cnt++;
			//cout << s[i] << " "<< s[sum-1-i] << endl;
		}
	}
	cout << cnt;
	return 0;
} 