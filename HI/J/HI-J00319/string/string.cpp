#include<bits/stdc++.h>
using namespace std;
int n[200005];
int a[1000000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	string c;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i+1;j++){
		a[i]++;
		}
		for(long long i=1;i<n;i++){
			sum+=a[i]+i;
		}
	}
	cout<<sum;
		return 0;
}
