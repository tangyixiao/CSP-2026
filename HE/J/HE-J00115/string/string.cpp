#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	long long j=0,j1=0;
	long long sum=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		sum+=a;
		for(j=j1;j<=a+j1;j++){
			s[j]=c;
		}
		j1=j;
	}
	long long cnt=0;
	for(long long i=0;i<=sum/2;i++){
		if(s[i]!=s[sum-1-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
