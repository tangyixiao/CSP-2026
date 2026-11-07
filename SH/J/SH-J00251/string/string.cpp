#include<bits/stdc++.h>
using namespace std;
string s;
long long a[2000050];
char c[2000050];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		long long prev=l;
		l+=a[i];
		for(long long j=prev+1;j<=l;j++){
			s[j]=c[i];
		}
	}
	long long mid=l/2;
	long long cnt=mid;
	if(l%2){
		mid++;
	}
	for(long long i=mid+1;i<=l;i++){
		if(s[i]!=s[l+1-i])cnt++;
	}
	cout<<cnt;
	return 0;
}
