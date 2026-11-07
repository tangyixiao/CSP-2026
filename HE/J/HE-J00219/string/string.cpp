#include <bits/stdc++.h>
using namespace std;
int ans=0;
string s;
bool huiwen(string s){
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size ()-1-i]){
			return false;
		}
	}
	return true;
}
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x;
	cin>>n;
	char a;
	while(n--){
		cin>>x>>a;
		while(x--){
			s+=a;
		}
	}
	if(huiwen(s)){
		cout<<"0";
	}
	else{
		for(int i=0;i<s.size()/2;i++){
			if(s[i]!=s[s.size ()-i]){
				ans++;
			}
		}
		cout<<ans;
	}
	return 0;
}
