#include<bits/stdc++.h>
using namespace std;
int a[200001];
string b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
	}
	long sum=0;
	for(int i=1;i<=n/2;i++){
		if(b[i]!=b[n-2+1]){
			sum+=max(a[i],a[n-1+i]);
		}
	}
	cout<<sum;
	return 0;
}
