//#include<bits/stdc++.h>
//#define int long long
//
//using namespace std;
//struct node{
//	int l[200005],r[200005],x,s;
//}a[27];
//signed main(){
////	freopen("string.in","r",stdin);
////	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	int n,sum = 0,ans=0;
//	cin>>n;
//	for(int i = 1;i <= 26;i++){
//		a[i].x=0;
//		a[i].s=0;
//	}
//	for(int i = 1;i <= n;i++){
//		int k;
//		char cc;
//		cin>>k>>cc;
//		int cx = cc-'a'+1; 
//		a[cx].x++;
//		a[cx].l[a[cx].x]=sum+1;
//		sum+=k;
//		a[cx].r[a[cx].x]=sum;
//	}
//	for(int i = 1;i <= 26;i++){
//		for(int j = 1;j <= a[i].x;j++){
//			if(a[i].l[j]*2 < sum && a[i].r[j]*2>sum){
//				if(a[i].r[j]*2-sum>sum-a[i].l[j]*2){
//					a[i].s+=(a[i].r[j]*2-sum)-(sum-a[i].l[j]*2);
//				}else{
//					a[i].s+=(sum-a[i].l[j]*2)-(a[i].r[j]*2-sum);
//				}
//			}else{
//				a[i].s+=(a[i].r[j]-a[i].l[j]+1)*2;
//			}
//		}
//		ans+=a[i].s;
//	}
//	cout<<ans/4;
//	return 0;
//} 
#include<bits/stdc++.h>
#define int long long

using namespace std;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,ans=0;
	cin>>n;
	string s = "";
	for(int i = 1;i <= n;i++){
		int k;
		char c;
		cin>>k>>c;
		for(int j = 1;j <= k;j++){
			s+=c;
		}
	}
	for(int i = 0;i < s.size();i++){
		if(s[i]!=s[s.size()-1-i]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
} 