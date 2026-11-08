#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		long long ai;
		char ci;
		cin>>ai>>ci;
		for(int i=1;i<=ai;i++) s=s+ci;
	}
	int ans=0,l=s.size();
	for(int i=0;i<l/2;i++)
	{
		if(s[i] == s[l+1-i]){}
		else if(s[i] != s[l-1-i])
		{
			s[l+1-i]=s[i];
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
