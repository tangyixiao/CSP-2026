#include<bits/stdc++.h>
using namespace std;
long long n,a,sum,ans,f;
char x;
string s;
int main(){
	freopen("string.in","r+",stdin);
	freopen("string.out","r+",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a;
		sum+=a;
		cin>>x;
		while(f<=sum){
			f++;
			s[f]=x;
		}
	}
	for(long long i=1;i<=(sum+1)/2;i++){
		if(s[i]!=s[sum-i+1]){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
