#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s="";
	cin>>n;
	while(n--){
		int i;
		string s1;
		cin>>i>>s1;
		while(i--){
			s=s+s1;
		}
	}
	int sum=0;     
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[s.size()-1-i]){
			sum++;
		}
	}
	cout<<sum/2;
	return 0;
} 