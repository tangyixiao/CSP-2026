#include<bits/stdc++.h>
using namespace std;
const int N=200001;
string s;
long long n,a[N],ans,i,len;
char c[N];
bool flag=false;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=0;i<n;++i){
		cin>>a[i]>>c[i];
		s+=c[i]*a[i];
		if(i!=0&&c[i]==c[i-1]) flag=true;
		else flag=false;
	}
	if(flag){
		cout<<0<<endl;
		return 0;
	}
	len=s.size();
	for(i=0;i<len;++i)
		if(s[len-i]!=s[i]) ++ans;
	if((len/2)!=0) ++ans;
	cout<<ans/2<<endl;
	return 0;
}
