#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0,m=1,a;
	string s;
	char b;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=1;j<=a;j++){
			s[m]=b;
			m++;
		}
	}
	m--;
	for(int i=1;i<=m/2;i++){
		if(s[i]!=s[m+1-i]) sum++;
	}
	cout<<sum;
	return 0;
}
