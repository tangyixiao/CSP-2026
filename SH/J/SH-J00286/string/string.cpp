#include<bits/stdc++.h>
using namespace std;
long long n,a[2000000],ans,cnt,r=1,l;
char c[2000000];
string t;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	l=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
	}
	while(cnt>1){
		int h=min(a[l],a[r]);
		a[r]-=h;
		a[l]-=h;
		cnt-=2*h;
		if(c[r]!=c[l])
		ans+=h;
		if(a[r]==0)
		r++;
		if(a[l]==0)
		l--;
	}
	cout<<ans;
		return 0; 
}
