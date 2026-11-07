#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=2e5+5;
int a[N];
char b[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	if(n==1){
		cout<<0;
		cout<<endl<<111;
		return 0;
	}
	string s;
	for(int i=1;i<=n;i++){
		s+=a[i]*b[i];
	}
	string ss=s;
	reverse(s.begin(),s.end());
	if(ss==s){
		cout<<0;
		cout<<endl<<222;
		return 0;
	}
	int cnt=0;
	if(n%2==1){
		if(b[1]==b[n]){
			for(int i=2;i<n;i++){
				if(b[i]==b[n-i]){
					cnt+=abs(a[n-i]-a[i]);
				}
				else cnt+=min(a[n-i],a[i])+a[n-i]-a[i];
			}
		}
		else{
			cnt+=a[n];
			for(int i=2;i<n;i++){
				if(b[i]==b[n-i]){
					cnt+=abs(a[n-i]-a[i]);
				}
				else cnt+=min(a[n-i],a[i])+a[n-i]-a[i];
			}
		}
	}
	else{
		int ans1=0,ans2=0;
		for(int i=2;i<n;i++){
			if(b[i]!=b[1])ans1+=a[i];
		}
		for(int i=2;i<n;i++){
			if(b[i]!=b[n])ans2+=a[i];
		}
		cnt+=min(ans1,ans2);
	}
	cout<<cnt;
}
