#include<bits/stdc++.h>
using namespace std;

#define int long long
int n;
const int N=2e5+10;
int a[N];
char c[N];
string s;
void hw(){
	int cnt=0;
	int l=0,r=s.size()-1;
	while(l<=r){
		if(s[l]!=s[r]){
			cnt++;
		} 
		l++;
		r--;
	}
	if(cnt!=0) cout<<cnt;
	else cout<<0;
	return;
}

signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		while(a[i]--) s+=c[i];
	}
	hw();
	return 0;
}