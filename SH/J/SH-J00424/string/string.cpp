#include<bits/stdc++.h>
using namespace std;
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t;
	cin>>t;
	while(t--){
		int a;cin>>a;
		char b;cin>>b;
		long long l=str.size();
		for(long long i=0;i<a;i++){
			str[l+i]=b;
		}
	}
	long long ans=0; 
	long long len=(str.size()+1)/2;
	for(long long i=0;i<len;i++){
		if(str[i]!=str[str.size()-i]){
			ans++;
			str[i]=str[str.size()-i];
		}
	}
	cout<<ans+2<<endl;
	return 0;
}
