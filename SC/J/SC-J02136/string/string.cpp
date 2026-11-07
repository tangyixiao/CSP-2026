#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	vector<char> v;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=1;j<=a;j++) v.push_back(c);
	}
	long long sum=v.size();
	for(long long i=0;i<sum/2;i++){
		if(v[i]!=v[sum-i-1]) ans+=1LL*1;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}