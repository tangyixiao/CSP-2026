#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum,ans,sum2;
char c[200005];
string s;
map<char,long long> mp;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		mp[c[i]]+=a[i];
		long long h=a[i];
		while(h--){
			s+=c[i];
		}
	}
	bool f=1;
//	for(int i=1;i<=n;i++){
//		sum2+=a[i];
//		
//		if(sum%2==1){
//			if(sum2>=sum/2+1 && f){
//				mp[c[i]]--; 
//				f=0;
//			}
//			if(mp[c[i]]!=0){
//				mp[c[i]]+=a[i];
//				ans+=mp[c[i]]-a[i];
//			}
//			else{
//				mp[c[i]]+=a[i];
//				ans+=mp[c[i]];
//			}
//		}
//		else{
//			if(sum2>=sum/2){
//				if(mp[c[i]]!=0){
//					mp[c[i]]+=a[i];
//					ans+=mp[c[i]]-a[i];
//				}
//				else{
//					mp[c[i]]+=a[i];
//					ans+=mp[c[i]];
//				}
//			}
//			
//		}
//		
//	}
	long long len2=s.size();
	for(int i=len2/2;i<len2;i++){
		if(s[i]!=s[len2-1-i]){
			ans++;
		}
	}
	long long len=mp.size();
	if(len==1){
		cout<<"0";
		return 0;
	}
	cout<<ans;
	return 0;
}