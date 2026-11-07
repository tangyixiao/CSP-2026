#include<bits/stdc++.h>
using namespace std;
long long n,a[200002],up[200002],all;
char c[200002];
long long ma=INT_MIN;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	up[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		all+=a[i];
		ma=max(ma,a[i]);
		up[i]=up[i-1]+a[i];
	}
	int i=2;
	if(n<=2000 and ma<=500 and i==0){
		string s;
		for(int i=1;i<=n;i++){
			string p;
			for(int j=0;j<=a[i]-1;j++){
				p+=c[i];
			}
			s+=p;
		}
		long long sum=0;
		for(int i=0;i<=(s.size()-1)/2;i++){
			if(s[i]!=s[s.size()-1-i]){
				sum++;
			}
		}
		cout<<sum;
	}
	else{
		int ans=0;
		int tp=1,ed=n,j;
		for(int i=1;i<=all/2;i++){
			j=all-i+1;
			if(!(up[tp-1]<i and i<=up[tp])){
				tp++;
			}
			if(!(up[ed]>=j and up[ed-1]<j)){
				ed--;
			}
			if(c[tp]!=c[ed]){
				ans++;
			}
		}
		cout<<ans;
	}
	return 0;
}