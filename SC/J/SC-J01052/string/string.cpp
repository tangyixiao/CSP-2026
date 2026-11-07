#include<bits/stdc++.h>
using namespace std;
long long a[200010];
string s;
int n;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	 freopen("string.out","w",stdout);
	 cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		if(s[i-1]==s[i]){
			a[i-1]+=a[i];
			i--;
			n--;
		}
	}
	for(int i=1;i<=n;i++){
		if(s[i]!=s[n-i+1]){
			if(a[i]>=a[n-i+1]){
				s[n-i+1]=s[i];
				ans+=a[n-i+1];
			}else{
				s[i]=s[n-i+1];
				ans+=a[i];
			}
		}
		if(a[i]!=a[n-i+1]){
			if(a[i]<a[n-i+1]){
				if(s[n-i]!=s[n-i+1]) ans+=a[n-i+1]-a[i];
				a[n-i]+=a[n-i+1]-a[i];
			}else{
				if(a[i]!=a[i+1]) ans+=a[i]-a[n-i+1];
				a[i+1]+=a[i]-a[n-i+1];
			}
		}
	}
	cout<<ans;
	return 0;
} 
/*3
2 a
2 b
1 c*/
/*6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
