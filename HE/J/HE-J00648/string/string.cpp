#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200001],cnt;
string c[200001],s=" ";
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		//cout<<s.size()<<" ";
	}//cout<<s;
	n=s.size()-1;
	for(int i=1;i<=n/2+1;i++){
		if(s[i]!=s[n-i+1])cnt++;
	}cout<<cnt;
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//#define rp LLONG_MAX
//int n,a[200001],l,r,q,p,st[200001],ed[200001],len[200001];
//string c[200001];
//signed main(){
//	//freopen("string.in","r",stdin);
//	//freopen("string.out","w",stdout);
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>a[i]>>c[i];
//		st[i]=ed[i-1]+1;
//		ed[i]=st[i]+a[i]-1;
//		len[i]=ed[i]-st[i]+1;
//		r+=a[i]; 
//	}l=1,q=1,p=n;
//	while(1){
//		inr llen=ed[q]-l+1,rlen=r-st[p]+1;
//		if(llen>rlen){
//			q++;
//			l+=rlen;
//			r+=rlen; 
//		}
//	}
//	return 0;
//}
