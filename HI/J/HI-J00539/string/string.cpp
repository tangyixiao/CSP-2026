#include<bits/stdc++.h>
#define int long long
using namespace std;


signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		int c;
		string poi;
		cin>>c>>poi;
		for(int j=1;j<=c;j++){
			s=s+poi;
		}
	}
	int x=s.length();
	int cnt=0;
	if(x%2==0){
		for(int i=x-1;i>=x/2;i--){
			if(s[i]!=s[x-i-1]){
				cnt++;
			}
//			cout<<s[i]<<" "<<s[x-i-1]<<endl;
		}
	}else{
		for(int i=x-1;i>=((x+1)/2);i--){
			if(s[i]!=s[x-i-1]){
				cnt++;
			}
//			cout<<s[i]<<" "<<s[x-i-1]<<endl;
		}
	}
	cout<<cnt;
	return 0;
}
