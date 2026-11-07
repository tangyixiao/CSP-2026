#include<bits/stdc++.h>
using namespace std;
bool cmd(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,w,a,b;
	cin>>n>>m;
	int s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	sort(s,s+n,cmd);
	cout<<s[m-1];
	return 0 ;
}