#include<bits/stdc++.h>
using namespace std;
string s;
long long sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int k;
		char c;
		cin>>k>>c;
		for(int j=1;j<=k;j++){
			s+=c;
		}
		sum+=k;
	}
	long long ans=0;
	if(sum%2==1){
		for(int i=0;i<=(sum-1)/2-1;i++){
			if(s[i]!=s[sum-i-1]){
				ans++;
			}
		}
	}
	else{
		for(int i=0;i<=sum/2-1;i++){
			if(s[i]!=s[sum-i-1]){
				ans++;
			}
		}
	}
	
	cout<<ans;
	return 0;
	 
}