#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long  n,a[20005];
	long long m=0,c=1;
	char s[20000000000005],s1[20005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s1[i];
		m+=a[i];
		while(a[i]--){
			s[c]==s1[i];
			c++;
		}
	}
	long long r,l,ans;
	while(m-=2){
		l=c;
		r=1;
		if(s[r]!=s[l]){
			ans++;
		}
	}
	
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

