#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
long long ans=1,cnt=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		char a;
		cin>>x>>a;
		for(int q=ans;q<=ans+x;q++) s[q]=a;
		ans+=x;
	}
	for(int i=1;i<=ans/2;i++)
	{
		if(s[i]!=s[ans-i]) cnt++;
	}
	cout<<cnt;
	return 0;
}








