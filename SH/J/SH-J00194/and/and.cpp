#include<bits/stdc++.h> 
using namespace std;
int a[100010];
bool poww(int x){
	while(x%2==0){
		x/=2;
	}
	if(x==1) return 1;
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxs=0,s=0,c=n;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(poww(a[i]+1)) maxs=max(maxs,a[i]);
	}
	sort(a+1,a+1+n);
	while(m--){
		while(s!=maxs&&c>=1){
			if(a[c]!=maxs&&a[c]!=-1) s=max(s,(a[c]&maxs));
			else cout<<c<<" "<<maxs;
			c--;
		}
		maxs=s;c=n;
		s=0;
	}
		
	cout<<maxs;
	return 0;
}
/*
00010
10000
特殊性质A：对于所有i(1≤i≤n)，均存在非负整数ki 满足ai=2ki?1。
特殊性质B：存在非负整数k满足n=2k，且对所有i(1≤i≤n)，均有ai=i?1。
1100
1
*/
