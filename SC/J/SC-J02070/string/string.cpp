#include<bits/stdc++.h>
using namespace std;
string a,b,c;
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	int i=n;
	while(i--){
		long long x;
		cin>>x;
		string ss;
		cin>>ss;
		x-=1;
		string mm=ss;
		while(x--)ss+=mm;
		a=a+ss;
	}
	for(long long i=0;i<=a.size()/2;i++){
		b+=a[i];
	}
	for(long long i=a.size()-1;i>=a.size()/2;i--){
		c+=a[i];
	}
	for(long long i=0;i<a.size()/2;i++){
		if(b[i]!=c[i])cnt++;
	}
	cout<<cnt;

	return 0;
} 
