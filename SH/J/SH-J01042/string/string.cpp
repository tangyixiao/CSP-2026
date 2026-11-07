#include<bits/stdc++.h>
using namespace std;
#define fre(x) freopen(#x".in","r",stdin);freopen(#x".out","w",stdout)
#define int long long
const int N=4e5+19;
int n,a[N],p[N];
char c[N];
int sum;
string s;
signed main(){
	fre(string);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		p[i]=sum;
	}
	if(sum<=N){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s+=c[i];
			}
		}
		int mid=(s.size()+1)/2,ans=0;
		for(int i=0;i<=mid;i++){
			if(s[i]!=s[sum-1-i])ans++;
		}
		cout<<mid<<' '<<ans;
		return 0;
	}
	int l=1,r=n,ans=0,mid=sum/2;
	while(l<r){
//		if(l+1==r){
//			if(c[l]!=c[r]&&)
//		}
		if(a[l]==a[r]){
			l++,r--;
			ans+=a[l]*(c[l]!=c[r]);
		}else if(a[l]>a[r]){
			ans+=a[r]*(c[l]!=c[r]),a[l]-=a[r],r--;
		}else{
			ans+=a[l]*(c[l]!=c[r]),a[r]-=a[l],l++;
		}
		cout<<l<<' '<<r<<' '<<a[l]<<' '<<a[r]<<' '<<ans<<endl;
	}
	cout<<ans;
	return 0;
}
/*
6
39 s
8 r
31 e
49 r
1 u
50 e
*/
