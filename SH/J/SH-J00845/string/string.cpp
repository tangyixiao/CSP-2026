#include<bits/stdc++.h>
using namespace std;
#define int long long 
int n,a[200005],tot=0,ans=0;
char c[200005];
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++)s+=c[i];
	}
	int len=s.size();
	s=" "+s;
	for(int i=1;i<=s.size()/2;i++){
		if(s[i]!=s[len+1-i])ans++;
	}
	cout<<ans;
//	for(int i=1;i<=n;i++)tot+=a[i];
//	int mid=0;
//	if(tot%2==0)mid=tot/2;
//	else mid=(tot+1)/2;
//	int i=1,j=n,sumi=0,sumj=0;
//	while(i<=j){
//		cout<<"ans="<<ans<<endl;
//		//cout<<"sum:"<<sumi<<" "<<sumj<<endl;
//		cout<<i<<" "<<j<<endl;
//		if(sumi<sumj){
//			if(c[i]!=c[j]){
//				if(sumi>=mid)ans+=(a[i]-2*(sumi-mid)-1);
//				else ans+=(a[i]-(sumi-sumj));
//			}
//			sumi+=a[i];
//			i++;
//		}
//		else{
//			if(c[i]!=c[j]){
//				if(sumj>=mid)ans+=(a[j]-2*(sumj-mid)-1);
//				else ans+=(a[j]-(sumj-sumi));
//			}
//			sumj+=a[j];
//			j--;
//		}
//		
//		cout<<"sum:"<<sumi<<" "<<sumj<<endl;
//	}
//	cout<<ans;
	return 0;
}
