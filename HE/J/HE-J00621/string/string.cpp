#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n,ans=0,k=0,l=0,sum=0;
	cin>>n;
	int a[100001];
	string c;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c;
		if(c[i]==c[i+1]){
			sum++;
		}
	}
		for(int i=0;i<n;i++){
		if(c[i]==c[i+1]){
			sum++;
		}
	}
	if(sum==n){
		cout<<"0";
		return 0;
	}
	else
	cout<<a[0];
	return 0;
}
