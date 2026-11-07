#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long x;
		char y;
		cin>>x>>y;
		for(int j=1;j<=x;j++)s+=y;
	}
	long long cnt=0;
	for(long long i=0,j=s.size()-1;i<=s.size()-1,j>=0;i++,j--){
		if(s[i]!=s[j]){
			s[i]=s[j];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
