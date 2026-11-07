#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N=1e6;
int a[N];
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,k=0,len=0;
	string s,s1;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s1[k]=c[i];
			k++;
		}
	}
	for(int i=0;i<len ;i++)s[i]=s1[len-i-1];
	int ans=0;
	for(int i=0;i<len/2;i++){
		if(s1[i]!=s[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
