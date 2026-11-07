#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
long long cnt,len,ans;
char c[N];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
	}
	int l=a[1],r=a[n],i1=1,i2=n;
	while(len<cnt/2){
		int g=min(l,r);
		len+=g;
		if(c[i1]!=c[i2]){
			ans+=g;
		}
		l-=g;
		r-=g;
		//代表剩的 
		if(r==0){
			i2--;
			r=a[i2];
		}
		if(l==0){
			i1++;
			l=a[i1];
		}
	}
	cout<<ans;
	return 0;
}