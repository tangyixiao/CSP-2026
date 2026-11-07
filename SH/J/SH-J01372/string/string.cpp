#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,a[200005],l=0,cnt=0;
string c[200005],s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
		for(int j=1;j<=a[i];j++)s+=c[i];
	}for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-1-i])cnt++;
	}cout<<cnt;
}
