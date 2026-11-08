#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,x=0,m=0;
	int n;
	cin>>n;
	char b;
	string s[2000000];
	for(long long i=1;i<=n;i++){
		cin>>a;
		cin>>b;
		for(long long j=1;j<=a;j++){
			s[x]=b;
			x++;
		}
	}
	for(long long i=0;i<(x-1)/2+1;i++){
		if(s[i]!=s[x+1-i]){
			m++;
		}
	}
	cout<<m;
	return 0;
}
