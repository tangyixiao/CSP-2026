#include <bits/stdc++.h>
using namespace std;
int m;
string s;
long long sum = 0;
long long t[200010],r[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>m;
	int n;
	char b;
	for(long long i = 1;i<=m;i++){
		cin>>n>>b;
		for(int j = 1;j<=n;j++){
		s+=b;
		}
	}
	int len = s.size();
	if(len%2==0) {
		for(long long i = 0;i<(len-1)/2;i++){
			t[i] = s[i];
		}
		for(long long i = len/2;i<len;i++){
			r[i] = s[i];
		}
		for(long long i = 0;i<(len-1)/2;i++){
			if(t[i]!=r[i+(len/2-1)]) sum++;
		}
		cout<<sum;
		return 0;
	}
	else {
		for(long long i = 0;i<(len-1)/2;i++){
			t[i] = s[i];
		}
		for(long long i = len/2+1;i<len;i++){
			r[i] = s[i];
		}
		for(long long i = 0;i<(len-1)/2;i++){
			if(t[i]!=r[i+len/2+1]&&i!=(len-1)/2) sum++;
		}
		cout<<sum;
		return 0;
	}
} 
