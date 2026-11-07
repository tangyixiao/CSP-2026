#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string a;
	for(int i=0;i<n;i++){
		long long num;
		string b;
		cin>>num>>b;
		for(int j=1;j<=num;j++)a+=b;
	}
	long long len=a.size();
	string a2="";
	for(int i=0;i<len;i++){
		a2+=a[len-1-i];
	}
	long long ans=0;
	for(int i=0;i<len;i++){
		if(a[i]!=a2[i]){
			a2[i]=a[i];
			a[len-i-1]=a[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 