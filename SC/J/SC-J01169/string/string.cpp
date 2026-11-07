#include<bits/stdc++.h>
#define int long long
const int N=1e6+5;
/*int er(int x){
	int l=1,r=n;
	int ans=0; 
	while(l<=r){
		int mid=(l+r)/2;
		if(pre[mid]<=x){
			ans=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	return ans;
}*/
using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		string c;
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			s+=c;
		}
	}
	int m=s.size();
	s=" "+s;
	int ans=0;
	for(int i=1;i<=(m+1)/2;i++){
		if(s[i]!=s[m-i+1])ans++;
	}
	cout<<ans<<endl;
	return 0;
}