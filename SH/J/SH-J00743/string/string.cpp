#include<bits/stdc++.h>
using namespace std;
int n;
const int N=10005;
long long a[N];
char c[N];
char s[100000005];
int m=0;
int ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			m++;
			s[m]=c[i];
		}
	}
	for(int i=1;i<=m;i++){
		if(s[i]!=s[m-i+1]){
			s[i]=s[m-i+1];
			ans++;
		}
	}
	cout << ans;
//	k=a[1];
//	K=a[n];
//	o=c[1];
//	O=c[n];
//	s=0,m=0;
//	int Min;
//	for(int i=1;i<=n;i++){
//		if(s+m>n)break;
//		Min=min(k,K);
//		if(o!=O){
//			ans+=Min;
//			cout << Min << " " << o << " " << O << "\n";
//		}
//			k-=Min;
//			K-=Min;
//			if(s==n-m){
//				ans+=max(k,K);
//				break;
//			}
//		if(k==0){
//			s++;
//			k=a[s];
//			o=c[s];	
//			}
//		else{
//			m++;
//			K=a[n-m];
//			O=c[n-m];
//			}
//	}
//	cout << ans;
	return 0;
} 
