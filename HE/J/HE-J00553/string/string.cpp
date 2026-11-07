#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,l,j=0,sum;
string s,b;
char lin;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l>>lin;
		for(int q=0;q<=l;q++){
			s[j]=lin;
			j++;
		} 
	}	
	int a=0;
	for(int i=j;i>=0;i++){
		b[a]=s[i];
		a++;
	}
	for(int i=0;i<j;i++){
		if(s[i]!=b[i])sum++;
	}
	cout<<sum;
	return 0;
} 
