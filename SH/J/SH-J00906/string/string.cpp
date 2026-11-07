#include<bits/stdc++.h>
using namespace std;
long long num[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0;
	cin>>n;
	string x="*";
	for(long long i=1;i<=n;i++){
		cin>>num[i];
		string b;
		cin>>b;
		x+=b;
	}
	for(int i=1;i<=n/2;i++){
		if(x[i]!=x[n-i+1]){
			cnt+=max(num[i],num[n-i+1]);
		}
	}
	cout<<cnt;
	return 0;
}
