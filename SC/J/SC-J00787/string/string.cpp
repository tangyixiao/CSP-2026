#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200005],len;
string s="";
char x[200005];
int f(){
	int cnt=0;
	int l=0,r=len-1;
	while(r-l>=1){
		if(s[l]!=s[r]) cnt++;
		l++;r--;
	}
	return cnt;
}
signed main(){
	freopen("string.in","r",stdio); 
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i]>>x[i];
		len+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=x[i];
		}
	}
	cout<<f();
	return 0;
} 