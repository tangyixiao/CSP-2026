#include<bits/stdc++.h>
using namespace std;
long long n,num,ans;
char C[100000007];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(long long i=num+1;i<=num+a;i++){
			C[i]=c;
		}
		num+=a;
	}
	for(long long i=1;i<=num/2;i++){
		if(C[i]!=C[num+1-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
