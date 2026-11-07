//100-32=68
#include<bits/stdc++.h>
using namespace std;
#define int unsigned long long
int n,a[200005],na[200005],b[200005],sum,x,cnt,tnc,ans;
char c[200005],nc[200005];
string s=" ";
int q(int i){
	int j=sum-i+1;
//	cout<<endl<<i<<" "<<j<<endl<<(s[i]!=s[j])<<endl;
	return (s[i]!=s[j]);
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){cin>>a[i]>>c[i];sum+=a[i];}
//	int st=1;
//    for(int i=2;i<=n;i++){
//    	if(c[i]==c[st])a[st]+=a[i],a[i]=0;
//    	else st=i;
//	}
//	for(int i=1;i<=n;i++)if(a[i])na[++cnt]=a[i],nc[++tnc]=c[i];
	//<=500zuo fa
	if(sum<=1e8){
		for(int i=1;i<=n;i++)for(int j=1;j<=a[i];j++)s.push_back(c[i]);
//		cout<<s<<endl;
		for(int i=1;i<=sum/2;i++)ans+=q(i);
		cout<<ans;
	}
}
