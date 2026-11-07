#include<bits/stdc++.h>
using namespace std;
char a[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long j=0;
	long long i;
	for(i=0;i<n;i++){
		long long geshu;
		char zimu;
		cin>>geshu>>zimu;
		while(geshu--){
			a[j]=zimu;
			j++;
		}
	}
	long long ans=0;
	for(long long i=0;i<=j/2;i++){
		if(a[i]!=a[n-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}