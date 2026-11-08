#include<bits/stdc++.h>
using namespace std;
long long a[300000],b[300000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[1]>>b[i];
	}
	for(int i=1;i<=n;i++){
		if(b[i]!=b[i-1]){
			sum+=b[i]*a[i];
		}
	}
	cout<<sum;
}
