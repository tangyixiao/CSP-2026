#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,m,sum=0;
	char c;
	string s;
	cin >> n;
	for(long long i=1; i<=n; i++){
		cin >> m >> c;
		for(long long j=1; j<=m; j++){
			s+=c;
		}
	}
	for(long long i=0; i<s.size()/2; i++){
		if(s[i]!=s[s.size()-i-1]){
			sum++;
		}
	}
	cout << sum;
	return 0;
}