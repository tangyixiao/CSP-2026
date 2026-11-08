#include <bits/stdc++.h>
#define int long long
using namespace std;
int n,ans,l;
int a;
char c;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++)
			s+=c;
	}
	//cout<<s<<endl;
	int l=s.size();
	for(int i=0,j=l-1;i<l,j>=0;i++,j--){
		if(s[i]==s[j])
			continue;
		else{
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}

