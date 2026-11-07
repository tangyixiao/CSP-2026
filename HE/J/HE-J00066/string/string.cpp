#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[10000000],cnt=0;
	string c,s,s1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		string b="";
		for(int j=1;j<=a[i];j++){
			s1+=c[i];
		}
		s+=s1;
		b=" ";
	}
	reverse(s1.begin(),s1.end());
	if(s1==s){
		cout<<cnt;
	}	
	return 0;
}
