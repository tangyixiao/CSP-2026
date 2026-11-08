#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a;
		char k;
		cin>>a>>k;
		for(int j=1;j<=a;j++){
			s+=k;
		}
	}
	for(int i=0,j=s.size()-1;i<j;i++,j--)
	{
		if(s[i]!=s[j]) ans++;
	}
	cout<<ans;
	return 0;
}

