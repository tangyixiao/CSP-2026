#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long n,cnt,t,a[N];
char c;
string s="0";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		while(a[i]--)s[++t]=c;
	}
	long long len=s.size();
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len-i+1])cnt++;
	}
	cout<<cnt;
	return 0;
}