#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
char c[200005];
string s;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s+=c[i];
//		cout<<s<<'\n';
	}
	int l = s.size();
	for(int i=0;i<s.size()/2;i++){
//		cout<<s[i]<<' '<<s[l-i-1]<<'\n';
		if(s[i]!=s[l-i-1]) ans++;
	}
	cout<<ans;
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//int n;
//int a[200005];
//char c[200005];
//long long ans;
//int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	
//	cin>>n;
//	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
//	for(int i=1;i<=n/2;i++){
//		if(c[i]!=c[n-i+1]) ans+=max(a[i],a[n-i+1]);
//		if(a[i]!=a[n-i+1]&&c[i]==c[n-i+1]&&c[i]!=c[i-1]&&c[i]!=c[i+1]&&c[n-i+1]!=c[n-i+2]&&c[n-i+1]!=c[n-i]) ans+=abs(a[i]-a[n-i+1]);
//	}
//	cout<<ans;
//	return 0;
//}
