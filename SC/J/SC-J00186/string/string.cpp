#include<bits/stdc++.h>
using namespace std;

const long long maxn=2000005;
long long n,a[maxn],s,f,ans,x,y,ss[maxn];
string c;

int main(){
	freopen("string.in","w",stdin);
	freopen("string.out","r",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		s+=a[i];
		ss[i]=s;
	}
	x=1;
	y=n;
	for(long long i=1;i<=s/2;i++){
		if(i>ss[x]){
			x++;
			//cout<<"x"<<i<<x<<"\n"; 
		}
		if(s+1-i<=ss[y-1]){
			y--;
			//cout<<"y"<<i<<x<<"\n"; 
		}
		if(c[x]!=c[y]){
			ans++;
			//cout<<i<<"\n";
		}
	}
	cout<<ans;
	return 0;
}