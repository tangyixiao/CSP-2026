#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,suml,ans,sumx;
long long a[N];
char c[N];
bool f1,f2;
int main(){ 
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	f1=true,f2=true;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		suml+=a[i];
	}
	for(int i=2;i<=n;i++){
		if(c[i]!=c[i-1]){
			f2=false;
			break;
		}
	}
	if(f2==true){
		cout<<0;
		return 0;
	}
	for(int i=2;i<=n;i++){
		if(a[i]!=a[i-1]){
			f1=false;
			break;
		}
	}
	ans=0;
	if(f1==true){
		for(int i=1;i<=n/2;i++){
			if(c[i]!=c[n-i+1]){
				ans++;
			}
		}
		ans=ans*a[1];
		cout<<ans;	
	}else{
		sumx=0;
		char s[suml];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				sumx++;
				s[sumx]=c[i];

			}
		}
		for(int i=1;i<=suml/2;i++){
			if(s[i]!=s[suml-i+1]){
				ans++;
			}
		}
		cout<<ans;
	}
	return 0;
}
