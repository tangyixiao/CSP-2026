#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,num=0,ci=0,ans=0;
	string s[100000],c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s[i]=c;
			num+=a;
		}
	}
	for(int i=1;i<=num;i++){
		if(s[i]!=s[num+1-i]) ans++;
	}
	cout<<ans;
	return 0;
} 