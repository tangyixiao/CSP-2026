#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],ans,ans2;
char b[200010];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		ans+=a;
		for(int j=1;j<=a;j++){
			s+=b;
		}
	}	
	for(int i=1;i<=ans/2;i++){
		if(s[i]=s[ans-i-1]){
			ans2++;
		}
	}
	cout<<ans2;
	return 0;
}
