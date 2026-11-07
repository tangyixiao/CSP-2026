#include<bits/stdc++.h>
using namespace std;
int n,m,a[200000],maxa,cur;bool f=true;
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
ios::sync_with_stdio(false);
cin.tie(0);	
cin>>n>>m>>a[0];
cur=a[0];
for(int i=1;i<n;i++){
cin>>a[i];if(cur!=a[i])f=false;}
if(m==n){
	maxa=a[0];
for(int i=1;i<n;i++)maxa=a[i]&maxa;
cout<<maxa;return 0;}
else if(m==1){
sort(a,a+n);maxa=a[0];
cout<<maxa;	return 0;}
else if(f==true){
cout<<a[0];return 0;}
else if(m==n-1){
	sort(a,a+n);maxa=a[m];
	for(int i=m;i>0;i--)maxa=maxa&a[i];
	cout<<maxa;return 0;
}
else{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			maxa=max(maxa,a[i]&a[j]);
cout<<maxa;
}
	return 0;
}
