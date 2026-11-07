#include<bits/stdc++.h>
using namespace std;
long long n,num,ans,a[200005],shu;
string s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
		num+=a[i];
	}
	int l=1,r=n,ll=0,rr=0;
	while(1){
		if(l==r){
			break;
		}
		if(shu>=num/2){
			break;
		}
		if(s[l]!=s[r]){
			ans+=min(a[l]-ll,a[r]-rr);
			shu+=min(a[l]-ll,a[r]-rr);
			if(shu>num/2){
				ans-=(shu-num/2);
				break;
			}
			if(a[l]-ll<a[r]-rr){
				rr+=a[l]-ll;
				l++;
				ll=0;
			}
			else{
				ll+=a[r]-rr;
				r--;
				rr=0;
			}
		}
		else{
			shu+=min(a[l]-ll,a[r]-rr);
			if(a[l]-ll<a[r]-rr){
				rr+=a[l]-ll;
				l++;
				ll=0;
			}
			else{
				ll+=a[r]-rr;
				r--;
				rr=0;
			}
		}
	}
	cout<<ans;
	return 0;
}
