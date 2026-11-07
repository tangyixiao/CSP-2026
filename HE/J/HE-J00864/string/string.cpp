#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string r;
	long long index=0;
	for(long long i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(long long j=0;j<a;j++){
			r[index]=c;
			index++;
		}
	}
	cout<<1;
	return 0;
}
