#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(m==1){
		int ans=-10086;
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			ans=max(ans,x); 
		}
		cout<<ans;
		return 0;
	}
	if(n==m){
		int x;
		cin>>x;
		int ans=x;
		for(int i=2;i<=n;i++){
			int x;
			cin>>x;
			ans=ans&&x; 
		}
		cout<<ans;
        return 0;
	} 
	cout<<0;
	return 0;
}
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int A[200005];
//char B[200005];
//signed main() {
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	int n,m=0,ans=0;
//	string s;
//	cin>>n;
//	for(int i=1; i<=n; i++) {
//		cin>>A[i]>>B[i];
//		for(int j=1;j<=A[i];j++){
//			s+=B[i];
//		} 
//	}
//	for(int i=0;i<s.size()/2+1;i++){
//		if(s[i]!=s[s.size()-i-1]){
//			ans++;
//		}
//	}
//	cout<<ans;
//	return 0;
//}
///*
//#include<bits/stdc++.h>
//using namespace std;
//#define int long long
//int A[200005];
//char B[200005];
//signed main() {
//	int n,m=0;
//	string s;
//	cin>>n;
//	for(int i=1; i<=n; i++) {
//		cin>>A[i]>>B[i];
//		m+=A[i];
//	}
//	int ans=0;
//	if(m%2==0) {
//		int a=m/2+1;
//		int x=1,y=m;
//		int cnt1=0,cnt2=0,x1=A[x],y1=A[y];
//		for(int i=0; i<=a; i++) {
//			if(B[x]!=B[y]) {
//				if(cnt1+x1<a&&cnt2+y1<a) {
//					ans+=min(x1,y1);
//					if(x1<y1) {
//						x++;
//						y1=y1-x1;
//						x1=A[x];
//					} else {
//						if(x1==y1) {
//							x++;
//							y--;
//							x1=A[x];
//							y1=A[y];
//						} else {
//							y--;
//							x1=x1-y1;
//							y1=A[y];
//						}
//					}
//				}
//			} else {
//				if(x1<y1) {
//					x++;
//					y1=y1-x1;
//					x1=A[x];
//				} else {
//					if(x1==y1) {
//						x++;
//						y--;
//						x1=A[x];
//						y1=A[y];
//					} else {
//						y--;
//						x1=x1-y1;
//						y1=A[y];
//					}
//				}
//			}
//		}
//	} else {
//		int a=m/2+1;
//		int x=1,y=m;
//		int cnt1=0,cnt2=0,x1=A[x],y1=A[y];
//		for(int i=0; i<=a; i++) {
//			if(B[x]!=B[y]) {
//				if(cnt1+x1<a&&cnt2+y1<a) {
//					ans+=min(x1,y1);
//					if(x1<y1) {
//						x++;
//						y1=y1-x1;
//						x1=A[x];
//					} else {
//						if(x1==y1) {
//							x++;
//							y--;
//							x1=A[x];
//							y1=A[y];
//						} else {
//							y--;
//							x1=x1-y1;
//							y1=A[y];
//						}
//					}
//				}
//			} else {
//				if(x1<y1) {
//					x++;
//					y1=y1-x1;
//					x1=A[x];
//				} else {
//					if(x1==y1) {
//						x++;
//						y--;
//						x1=A[x];
//						y1=A[y];
//					} else {
//						y--;
//						x1=x1-y1;
//						y1=A[y];
//					}
//				}
//			}
//		}
//	}
//	cout<<ans;
//	return 0;
//}
//*/