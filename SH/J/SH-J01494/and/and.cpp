#include<bits/stdc++.h>
using namespace std;
long long n,m,a,maxa,mini=30,minn=pow(2,21);
string two(int n){
	string o;
	while(n!=0){
		o+=('0'+n%2);
		n/=2;}
	return o;
}
bool cmp(const string&s1,const string&s2){
	if(s1.size()>s2.size()) return true;
	if(s1.size()<s2.size()) return false;
	string s11,s22;
	for(int i=s1.size()-1;i>=0;i--) s11+=s1[i];
	for(int i=s2.size()-1;i>=0;i--) s22+=s2[i];
	if(s11>s22) return true;
	return false;}
string s[200009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int hjhj=0;
	for(int i=1;i<=20;i++){
		if(pow(2,i)==n){
			hjhj=1;
			break;}}
	if(m==1){
		for(int i=1;i<=n;i++){
			cin>>a;
			maxa=max(maxa,a);}
		cout<<maxa;}
	else if(m==n){
		for(int i=1;i<=n;i++){
			cin>>a;
			s[i]=two(a);
			long long ggggg=s[i].size();
			mini=min(mini,ggggg);}
		string ss;
		int u;
		for(int j=0;j<mini;j++){
			u=0;
			for(int k;k<=n;k++){
				if(s[k][j]=='0'){
					ss+='0';
					u=1;
					break;}}
			if(u==0) ss=ss+'1';}
		int answer=0;
		for(int i=0;i<ss.size();i++) answer+=(ss[i]-'0')*pow(2,i);
		cout<<answer;}
	else if(hjhj==0){
		int i;
		for(i=0;i<=30;i++){
			if(pow(2,i)<m&&m<=pow(2,i+1)) break;}
		cout<<n-pow(2,i+1);}
	else{
		for(int i=1;i<=n;i++){
			cin>>a;
			minn=min(minn,a);}
		cout<<minn;}
	return 0;
}
