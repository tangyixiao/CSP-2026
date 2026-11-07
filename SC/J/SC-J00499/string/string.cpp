#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long a,sum=0;
	string s;
	char aa;
	for(long long i=1;i<=n;i++){
		cin>>a>>aa;
		sum+=a;
		for(int j=0;j<a;j++){
			s+=aa;
		}
	}
	long long ans=0;
	int h=s.size();
	for(int i=0;i<h;i++){
		int l=h-i-1;
		if(sum%2==1){
			if(i==l){
				break;
			}
		}
		if(sum%2==0){
			if(i>l){
				break;
			}
		}
		if(s[i]!=s[l]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}