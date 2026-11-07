//string 
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N];
char c[N];
int n,ans;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];++j){
			s+=c[i];
		}
	}
	int len=s.size();
	for(int i=0;i<=len/2;++i){
		if(s[i]!=s[len-1-i]){
			++ans;
//			cout<<s[i]<<"  "<<s[len-i-1]<<endl;
		}
	}
	cout<<ans<<endl;
	return 0;
}
