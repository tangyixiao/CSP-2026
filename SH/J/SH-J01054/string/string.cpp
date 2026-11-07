#include<bits/stdc++.h>
using namespace std;
long long n,sum=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1,a;i<=n;i++){
		char b;
		cin>>a>>b;
		for(long long i=1;i<=a;i++)s+=b;
	}
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-1-i]){
			sum+=1;
			s[s.size()-1-i]=s[i];
		}
	}cout<<sum;
	return 0;
}
