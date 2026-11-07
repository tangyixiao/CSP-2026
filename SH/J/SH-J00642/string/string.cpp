#include <bits/stdc++.h>
using namespace std;
int n,cnt=0,len,ans=0;
char a[20000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int t;
		char s;
		cin>>t>>s;
		len+=t;
		int cnt2=cnt;
		
		for(int j=cnt2;j<(cnt2+t);j++){
			a[cnt]=s;
			cnt++;
		}
	}
	for(int i=0;i<len/2;i++){
		if(a[i]!=a[len-i-1])ans++;
	}
	cout<<ans<<endl;
	return 0;
} 
