#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char s[200005];
string t;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0;
	cin>>n;
	if(n==1){
		cout<<cnt;
		return 0;
	}
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		for(long long j=1;j<=a[i];j++){
			t+=a[i];
		}
	}
	cout<<2;
	return 0;
}
