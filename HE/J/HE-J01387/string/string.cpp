#include<bits/stdc++.h>
using namespace std;
int a[200005];
string c[200005],s="0";
int n,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	int l=s.length();
	for(int i=1;i<l/2;i++){
		if(s[i]!=s[l-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
