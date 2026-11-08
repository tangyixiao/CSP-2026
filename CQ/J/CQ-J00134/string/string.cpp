#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
long long l=0,ans=0;
string b,c,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		l+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=b[i];
		}
	}
	for(int i=1;i<=l/2;i++){
		if(s[i-1]==s[l-i]){
			continue;
		}
		else{
			ans++;
		}
	}
	cout<<ans;
	cout<<endl;
	return 0;
}


