#include <bits/stdc++.h>
using namespace std;
using LL=long long;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	LL n;
	cin>>n;
	string s={};
	int ans=0;
	while(n--){
		LL cnt;
		char x;
		cin>>cnt>>x;
		for(int i=1;i<=cnt;i++){
			s+=x;
		}
	}
	LL num=s.size()-1;
	for(int i=0;i<=s.size()/2-1;i++){
		if(s[i]!=s[num]){
			ans++;
		}
		num--;
	}
	cout<<ans;
//	cout<<s;
}
