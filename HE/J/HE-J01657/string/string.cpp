#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string str;
	for(int i=1;i<=n;i++){
		long long a;char c;
		cin>>a>>c;
		for(long long j=1;j<=a;j++)str+=c;
	}
	long long len=str.size();
	long long cnt=0;
	for(long long i=0;i<=(len>>1);i++){
		if(str[i]!=str[len-i-1]){
			str[len-i-1]=str[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
