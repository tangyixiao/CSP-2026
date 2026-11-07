#include<bits/stdc++.h>
using namespace std;
int cnt[30];
long long ans=0;
vector<char> v;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a;
	char c;
	long long cnt=0;
	string s;
	for(long long i=0;i<n;i++){
		cin>>a>>c;
		for(long long i=0;i<a;i++){
			v.push_back(c);
		}
		cnt+=a;
	}
	long long ans=0;
	for(long long i=0;i<cnt/2;i++){
		long long j=cnt-i-1;
		if(v[i]!=v[j]){
			ans++;
		}
	}
	cout<<ans;
}
