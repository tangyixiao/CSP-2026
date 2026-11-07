#include <bits/stdc++.h>
const int N=3e5+5;
using namespace std;
int a[N],p[N],j,ans,l[N],r[N];
string c;  
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;  cin>>n;  
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		for(int j=1;j<=a[i];j++)  s=s+c;
	}
	int S=s.size();
	for(int i=0;i<=S/2-1;i++){
		if(s[i]!=s[S-1-i])  ans++;
	}
	cout<<ans;
	return 0;
}