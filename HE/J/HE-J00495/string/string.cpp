#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long ans=0,cnt=0;
	string b;
	for(int i=1;i<=n;i++){
		long long c;
		string a;
		cin>>c>>a;
		cnt+=c;
		for(int i=1;i<=c;i++){
			b+=a;
		}
	}
	for(int i=0;i<cnt/2;i++){
		if(b[i]!=b[cnt-1-i]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;

}
