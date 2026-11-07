#include<bits/stdc++.h>
using namespace std;
const int maxn=2*1e5+10;
int n,a[maxn],l=0,ans=0;
string s[maxn],z;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>s[i];
		for(int j=1;j<=a[i];j++){
			z+=s[i];
		}
		l+=a[i];
	}
	for(int i=0;i<l/2;i++){
		if(z[i]!=z[l+1-i]){
			z[l+1-i]=z[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
