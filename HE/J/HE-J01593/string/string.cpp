#include<bits/stdc++.h>
using namespace std;
char s[10000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a,m=1;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s[m]=c;
			m++;
		}
	}
	cout<<0;
	return 0;
} 
