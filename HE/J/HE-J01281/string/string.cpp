//#include<bits/stdc++.h>
//using namespace std;
//long long n,cs=1,ans;
//char s[200010];
//int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.ans","w",stdout);
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		int a;
//		char c;
//		cin>>a>>c;
//		for(int j=cs;j<cs+a;j++){
//			s[j]=c;
//		}
//		cs+=a;
//	}
//	cs-=1;
//	long long r=1,l=cs;
//	while(r!=l){
//		if(s[l]!=s[r]){
//			ans++;
//		}
//		r++;l--;
//	}
//	cout<<ans;
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
long long n,cs=1,ans,a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.ans","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int r=n;
	for(int l=1;l<=n/2;l++){
		if(c[l]!=c[r]){
			ans+=max(a[l],a[r]);
		}
		r--;
	}
	cout<<ans;
	return 0;
}
