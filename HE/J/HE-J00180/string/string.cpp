#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long ans;
long long len;
int n,a[N];
string s;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
		len+=a[i];
	}
	for(int i=1;i<=len/2;i++){
		if(s[i]!=s[len-i]) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
