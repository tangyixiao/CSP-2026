#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],f[300005],s[300005];
bool k;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]++;
		if(a[i]<a[i-1]){
			k=1;
		}
	}
	if(k==0){
		for(int i=1;i<=m;i++){
		    s[i]=s[i-1]+f[i];
		    cout<<s[i]<<" ";
	    }
	    return 0;
	}
	return 0;
}
