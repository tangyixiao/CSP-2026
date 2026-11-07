#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a,js=0,n;
	string s;
	char b;
	cin>>n;
	for(int j=1;j<=n;j++){
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			s+=b;
		}
	}
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]) js++;
	}
	cout<<js;
    return 0;
}