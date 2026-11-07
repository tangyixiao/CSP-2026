#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		char c;
		cin>>c;
		for(int j=1;j<=x;j++)s+=c;
	}
	string ss;
	int now=0;
	for(int i=s.length()-1;i>=0;i--)ss[now++]=s[i];
	long long sum=0;
	for(int i=0;i<s.length();i++){
		if(s[i]!=ss[i])
			sum++;
	}
	cout<<sum/2;
	return 0;
}
