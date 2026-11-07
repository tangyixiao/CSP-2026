#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b,d;cin>>a>>b;
	vector<int> c(a+1);
	for(int i=1;i<=a;i++) cin>>c[i];
	sort(c.begin(),c.end(),cmp);
	if(b==1) return cout<<c[0],0;
	d=c[0];
	for(int i=1;i<b;i++) d&=c[i];
	cout<<d;
	return 0;
}
