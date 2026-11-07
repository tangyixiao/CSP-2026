#include<bits/stdc++.h>
using namespace std;
const long long N=1e6+10;
struct abc{
	long long x;
	char y;
}a[N];
string s,ss;
long long n,cnt,k;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i].x>>a[i].y;
		for(long long j=1;j<=a[i].x;j++){
			s+=a[i].y;
			k++;
		}
	}
	for(long long i=k-1;i>=k/2;i--){
		ss+=s[i];
	}
	k=0;
	for(long long i=0;i<s.size()/2;i++){
		if(s[i]!=ss[k]){
			cnt++;
		}
		k++;
	}
	cout<<cnt;
	return 0;
}