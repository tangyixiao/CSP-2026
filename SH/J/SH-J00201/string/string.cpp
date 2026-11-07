#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int main(){
	ios::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	int n;
	cin>>n;
	string s1;
	int s=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
//		s+=a;
//		for(int j=1;j<=a;j++) s1+=c; 
	}
	long long ans=0;
	
//	for(int i=0;i<s/2;i++){
//		if(s1[i]!=s1[s-i-1]) ans++;
//	}
	int l1=0,r1=0;
	for(int l=0,r=n+1;l<r;){
		if(l1==0) l1+=a[++l];
		if(r1==0) r1+=a[--r];
		if(c[l]!=c[r]) ans+=min(l1,r1);
		int t=min(l1,r1);
		l1-=t; r1-=t;
	}
	cout<<ans;
	
	return 0;
}
