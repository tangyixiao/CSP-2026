#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int freq[n+5];
	char ele[n+5];
	string s="";
	for(int i=1;i<=n;i++){
		cin>>freq[i]>>ele[i];
		for(int j=1;j<=freq[i];j++){
			s+=ele[i];
		}
	}
	//cout<<s;
	long long ans=0;
	long long x=s.length();
	for(int i=0;i<=x/2-1;i++){
		if(s[i]!=s[x-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
