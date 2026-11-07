#include<bits/stdc++.h>
using namespace std;
string ans;
int main ( ){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n;
	cin >>n;
	long long len=0;
	for (int i=0; i<n; i++){
		long long a;
		char b;
		cin >>a >>b;
		len+=a; 
		for (long long j=0; j<a; j++){
			ans+=b;
		}
	}
	long long cnt=0;
	for (long long i=0; i<len/2;i++){
		if (ans[i] != ans[len-1-i]){
			cnt++;
		}
	}
	cout <<cnt << endl;
}
