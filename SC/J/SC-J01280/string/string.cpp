#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
long long ans;
char c[200010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
	}int nn=n/2;
	for(int i=0;i<=nn;i++){
		int mn=min(a[i],a[n-i-1]);
		if(c[i]!=c[n-i-i]){
			ans+=mn;
		}if(a[i]<a[n-i-1]){
			a[n-i-1]-=mn;
			n++;
		}else{
			a[i]-=mn;
			n--;
			i--;
		}
	}cout<<ans;
	return 0;
}
