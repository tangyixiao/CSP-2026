#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
long long a[N],idx,ans;
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;
	string x;
	x+='0';
	for (int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		idx+=a[i];
		for (int j=1;j<=a[i];j++){
			x+=b[i];
		}
	}
	int l,r;
	if (idx%2==0) l=(idx+1)/2,r=(idx+1)/2+1;
	else l=(idx+1)/2-1,r=(idx+1)/2+1;
	for (;l>=1;l--,r++){
		if (x[l]!=x[r]) ans++;
	}
	cout<<ans;
 	return 0;
}

