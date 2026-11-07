#include<bits/stdc++.h>
using namespace std;
long long a[1000006];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	long long ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1];
	}
	for(int i=0;i<n;i++){
		string s;
		while(a[i]!=0){
			if(a[i]%2==0){
				s=s+'0';
			}else{
				s=s+'1';
			}
			a[i]/=2;
		}
		long long p=1;string ss,s2;
		if(i>=1){
			long long q=max(s.size(),ss.size());
			for(int j=q-1;j>=0;j--){
				if(s[j]==ss[j]&&s[j]==1){
					ans+=p;
				}
				p*=2;
				if(s[j]!=ss[j]){
					s2=s2+'0';
				}else if(s[j]==ss[j]&&s[j]==1){
					s2=s2+'1';
				}else{
					s2=s2+'0';
				}
			}
		}else{
			s2=s;
		}
		
		ss=s2;
	}
	cout<<ans;
return 0;
}

