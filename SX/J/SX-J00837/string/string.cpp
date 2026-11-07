#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],ans,l;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s[l+j]=c[i];
  		}
		l+=a[i];
	}
 	for(int i=1;i<=l/2;i++){
 		if(s[i]==s[l+1-i]){
			continue;
		}else{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}