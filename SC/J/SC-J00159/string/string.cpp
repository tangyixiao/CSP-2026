#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int num;
		char str;
		cin>>num>>str;
		for(int j=1;j<=num;j++)
			s+=str; 
	}
	int len=s.size();
	for(int i=0;i<len/2;i++)
		if(s[i]!=s[len-i-1])
			ans++;
	cout<<ans; 
}