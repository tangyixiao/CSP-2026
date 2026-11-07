#include<bits/stdc++.h>
using namespace std;
long long sum,n,a;
char c;
string s,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	if(n==1){
		cin>>a>>c;
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;++i){
		cin>>a>>c;
		for(int j=0;j<a;++j){
			s+=c;
		}
	}
	s2=s;
	reverse(s.begin(),s.end());
	int len=s.length();
	for(int i=0;i<len;++i){
		if(s[i]!=s2[i]){
			sum++;
			s[i]=s2[i];
			s2[len-i-1]=s[i];
		}
	}
	cout<<sum;
	return 0;
} 