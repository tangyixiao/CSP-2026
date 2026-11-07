#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	map<long long,char>mp;
	long long n,a,sum=0,l=0,cnt=0;
	char c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		sum+=a;
		for(long long j=1;j<=a;j++){
			l++;
			mp[l]=c;
		}
	}
	for(long long i=1;i<=(sum+1)/2;i++){
		if(mp[i]!=mp[sum-i+1])cnt++;
	}
	cout<<cnt;
	return 0;
} 