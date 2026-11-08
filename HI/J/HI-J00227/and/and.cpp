#include<bits/stdc++.h>
using namespace std;
int n,m;
bool cmp(int a,int b){
	return a<b;
}
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
cin>>n>>m;
int a[n+1]={};
for(int i=0;i<n;i++){
	cin>>a[i];
	sort(a,a+i,cmp);
}
cout<<a[m+1];
	return 0;
}
