#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char c;
	string s;
	cin>>n;
	s+=' ';
	for(long long i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	for(long long i=1;i<=s.size();i++){
		if(i==s.size()-i)break;
		else if(s[i]!=s[s.size()-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
