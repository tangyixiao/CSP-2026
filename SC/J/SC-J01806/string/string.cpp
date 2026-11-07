#include<bits/stdc++.h>
using namespace std;
int n;
string a;
string b;
string c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long k;
		char b;
		cin>>k>>b;
		while(k--){
			a+=b;
		}
	}
	long long s=a.size();
	for(int i=s-1;i>=(s-1)/2;i--){
		b+=a[i];
	}
	for(int i=0;i<=(s-1)/2;i++){
		c+=a[i];
	}
	int cnt=0;
	for(int i=0;i<=(s-1)/2;i++){
		if(b[i]!=c[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
 } 