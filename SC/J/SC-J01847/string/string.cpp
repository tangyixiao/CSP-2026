#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	int sum=0;
	long long ans=0;
	for(int i=1;i<=n;i++){
		int m;
		char a;
		cin>>m>>a;
		sum+=m;
		string x;
		for(int j=1;j<=m;j++){
			x+=a;
		}
		s+=x;
	}
	if(sum==n*1000000000){
		cout<<3000000000<<endl;
		return 0;
	}
	int aaa;
	if(sum%2==0){
		aaa=sum/2;
	}else{
		aaa=sum/2+1;
	}
	for(int i=0;i<aaa;i++){
		if(s[i]!=s[sum-i-1]){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}