#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.int","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n,x;
	string s,s1;
	char c;
	cin>>n;
	while(n--){
		cin>>x>>c;
		while(x--){
			s+=c;
		}
	}
	long long cnt=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			s[i]=s[s.size()-i-1];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
