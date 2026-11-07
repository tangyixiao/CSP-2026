#include<bits/stdc++.h>
using namespace std;
string s;
char c;
long long n,m,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m>>c;
		for(int j=1;j<=m;j++)s+=c;
	}
	long long b=s.size()/2;
	long long a=1,d=s.size();
	for(long long i=0;i<b;i++){
		if(s[d-a]!=s[i])sum++;
	}
	cout<<sum;
	return 0;
} 

