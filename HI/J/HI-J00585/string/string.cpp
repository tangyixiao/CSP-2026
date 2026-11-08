#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		long long gs;
		cin>>gs;
		string b;
		cin>>b;
		for(long long j=0;j<gs;j++){
			a.insert(a.size(),b);
		}
	}
	long long pos=0;
	for(long long i=0;i<a.size()/2;i++){
		if(a[i]!=a[a.size()-i-1]){
			pos+=1;
		}
	}
	cout<<pos;
	return 0;
}
