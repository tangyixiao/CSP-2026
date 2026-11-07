#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int n,m=0;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		char s1;
		cin>>a>>s1;
		for(int j=1;j<=a;j++){
			s+=s1;
		}
		m+=a;
	}
	int q=0,l,r;
	if(m%2==0){
		l=m/2;
		r=l+1;
	}
	else{
		m/=2;
		l=m-1;
		r=m+1;
	}
	for(;l>=0;){
		if(s[l]!=s[r]) q++;
		l--;
		r++;
	}
	cout<<q;
}