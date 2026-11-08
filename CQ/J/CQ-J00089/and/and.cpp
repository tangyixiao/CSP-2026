#include<iostream>
#include<algorithm>
using namespace std;
long long s[200008],cnt;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s[i];}
		
	if(m==n){
		cnt=s[1];
		for(int i=2;i<=n;i++)
		cnt=cnt&s[i];
		cout<<cnt;
		return 0;}
	
	for(int i=1;i<=n;i++)
	cnt=max(cnt,s[i]);
	long long k=0;
	for(int i=2;i<=m;i++){
		k=0;
		for(int j=1;j<=n;j++){
			k=max(k,s[j]);}
		cnt=cnt&k;}
	cout<<cnt;
	
	return 0;}
