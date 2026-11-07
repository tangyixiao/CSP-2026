#include<bits/stdc++.h>
using namespace std;
long long n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string h;
	long long sum=0;
	for(int i=0;i<n;i++){
		int num;
		string c;
		cin>>num>>c;
		for(int j=0;j<num;j++){
			h+=c;
			sum++;
		}
	}
	long long len=sum/2;
	long long ans=0;
	for(int i=0;i<=len;i++){
		if(h[i]!=h[sum-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}
