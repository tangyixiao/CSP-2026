#include<bits/stdc++.h>
using namespace std;
int a[20000005];
char c;
char s[20000005];
int main(){
	freopen("string.in","i",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long len=1;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++){
			s[len++]=c;
		}
	}
	int cnt=0;
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len-i]) cnt++;
	}
	cout<<cnt;
	return 0;
} 