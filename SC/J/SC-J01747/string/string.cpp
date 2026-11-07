#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N=2e5+30;

int a[N];
char c[N];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int sum=0;
	int mx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		mx=max(mx,a[i]);
	}
	if(mx<=500){
		string s="";
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				s+=c[i];
			}
		}
		int len=s.size();
		string st="";
		int ans=0;
		for(int i=0;i<len;i++){
			ans+=(s[i]!=s[len-i-1]);
		}
		cout<<ans/2<<'\n';
		return 0;
	}
	int i=0,j=n;
	int l=0,r=sum-a[n]+1;
	int ans=0;
	int lst=a[n];
	while(i<=n&&j>=1){
		int t=lst;
		if(i==n&&j==1){
			break;
		}
		if(l==sum&&r==0){
			break;
		}
		while(l<=sum-r+a[j]){
			if(i<n){
				i++;
			}
			if(l==sum){
				break;
			}
			l+=a[i];
//			cout<<i<<' '<<l<<'\n';
			if(l==sum-r+a[j]){
				break;
			}
			if(t>=a[i]){
				t-=a[i];
			}
			
			if(c[i]!=c[j]){
				if(l<=sum-r+1){
					ans+=a[i];
//					cout<<a[i]<<' ';
					
				}else{
					ans+=t;
//					cout<<t<<' ';
				}
			}
		}
//		cout<<"l"<<'\n';
		lst=a[i]-t;
		t=lst;
		while(sum-r+1<=l){
			if(j>1){
				j--;
//				cout<<j;
			}
			if(r==1){
				break;
			}
			r-=a[j];
//			cout<<j<<' '<<r<<'\n';
//			if(sum-r+1==l){
//				break;
//			}
			if(t>=a[j]){
				t-=a[j];
			}
			
			if(c[i]!=c[j]){
				if(sum-r+1<=l){
					ans+=a[j];
//					cout<<a[j]<<' ';
				}else{
					ans+=t;
//					cout<<t<<' ';
				}
			}
		}
		lst=a[j]-t;
//		cout<<"r"<<'\n';
	}
	cout<<ans/2<<'\n';
	return 0;
} 