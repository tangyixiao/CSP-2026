#include<bits/stdc++.h>
using namespace std;
bool cmp(const string&s1,const string&s2){
	if(s1.size()>=s2.size()) return true;
	if(s1.size()<s2.size()) return false;
}
string two(int n){
	string o;
	while(n!=0){
		o+=('0'+n%2);
		n/=2;}
	return o;
}
int n,m,a;
string s[200009];
int main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		s[i]=two(a);}
	sort(s+1,s+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<s[i]<<endl;}
	return 0;
} 
