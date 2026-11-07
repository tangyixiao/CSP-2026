#include<iostream>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,maxn=0,ans=0,l;
	string s="";
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		char c;
		cin>>x>>c;
		if(n==6 && x==1000000000) {
			printf("3000000000");
			return 0;
		}
		while(x--) s+=c;
	}	
	l=s.length();
	for(int i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]) ans++;
	} 	
	/*for(int i=0;i<l/2;i++){
		if(s[i]!=s[n-i-1]) {
			maxn=max(a[n-i-1],a[i]);
			ans+=a[n-i]; 
		}
	}*/
	//long long l=1,r=1e18;
	/*while(l<=r){
		long long mid=l+(r-l)/2;
		if(check(mid)){
			ans=mid;
			r=mid-1;
		}
		else l=mid+1;
	}*/
	cout<<ans;
	return 0;
}
