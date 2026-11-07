#include<bits/stdc++.h>
using namespace std;
long long n,ans=0;
long long a;
char c;
string s;
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		for(int j=0;j<=a;j++){
			s=s+c;
		}
		sum+=a;
	}
	for(int i=1;i<=sum/2;i++){
		if(s[i]!=s[sum-i+1]){
			ans++;
		}
	}cout<<ans;
	return 0;
}
