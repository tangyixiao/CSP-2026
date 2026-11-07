#include<bits/stdc++.h>
using namespace std;
string s;
int n,a,sum=0,c1;
char c;
int main(){
	freopen(string.in,"r",stdin);
	freopen(string.out,"w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;	
		for(int j=1;j<=a;j++){
			s+=c;
		} 
	}
	c1=s.size();
	for(int i=0;i<c1/2;i++)
	{
		if(s[i]!=s[c1-i]) sum++;
	}
	cout<<sum;
	return 0;
} 