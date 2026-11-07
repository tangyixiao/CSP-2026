#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,ans=0;
	string s="";
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++) s+=c;
	} 
    long long h=s.size();
	for(int i=0;i<=h/2;i++){
		if(s[i]!=s[h-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}

