#include <bits/stdc++.h>
using namespace std;
int n;
long long ans;
struct node{
	long long cnt=0;
	char c;
};
node a[200005];
//long long f[200005];
string s;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].c;
		for(int j=1;j<=a[i].cnt;j++){
			s+=a[i].c;
		}
		//f[i]=f[i-1]+a[i].cnt;
	}
//	int i=1,j=n;
//	int p=1,q=f[n];
//	int lz=1,rz=n;
//	while(p!=q){
//		char left=a[i].c;
//		char right=a[j].c;
//		if(left!=right){
//			ans++;
//		}
//		p++,q--;
//		if(p>f[lz]) lz++,i++;
//		if(q<f[rz]) rz--,j--;
//	}
	long long x=s.size()/2,y=s.size()/2;
	if(s.size()%2==0) x--;
	for(int i=x,j=y;i>=0;i--,j++){
		if(s[i]!=s[j]) ans++;
	}
	cout<<ans;
	return 0;
}
