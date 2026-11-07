#include<bits/stdc++.h>
using namespace std;
long long a,b,ans;
long long l[200000];
bool cmp(long long x,long long y){
	return x>y; 
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b;
	for(int i=0;i<a;i++){
		cin>>l[i];
	}
	sort(l,l+a,cmp);
	ans=l[0];
	for(int i=0;i<b;i++){
		ans=ans&l[i];
	}
	cout<<ans;
	return 0;
}
