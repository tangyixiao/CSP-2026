#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
string s,m;
long long n,l,r,a,ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a;
		cin>>m;
		for(long long j=1;j<=a;j++){
			s+=m;	
		}
	}
	l=0;
	r=s.size();
	if(s.size()%2==0){
		for(long long i=0;i<(s.size()/2);i++){
			if(s[l]!=s[r]){
				s[r]=s[l];
				l++;
				r--;
				ans++;
			}
			else{
				l++;
				r--;
			}
		}
	}
	else{
		for(long long i=0;i<((s.size()-1)/2);i++){
			if(s[l]!=s[r]){
				s[r]=s[l];
				l++;
				r--;
				ans++;
			}
			else{
				l++;
				r--;
			}
		}
	}cout<<ans;
	return 0;
}