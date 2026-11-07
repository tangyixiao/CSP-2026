#include<bits/stdc++.h>
using namespace std;
long long n,a,sum;
string b,b1="",b2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a>>b;
		for(long long i=1;i<=a;i++){
			b1+=b;
		}
	}
	int len=b1.size();
	for(long long i=len-1;i>=0;i--){
		b2+=b1[i];
	}
	for(long long i=0;i<=len/2-1;i++){
		if(b1[i]!=b2[i]) sum++;
		}
		cout<<sum;
	return 0;
}
