#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
int mmax=1;
int a,b,c,d,e[1000000]={};
cin>>a>>b;
for(int i =1;i<=a;i++){
	cin>>a[i];
	if(a[i]>mmax){
		mmax=a[i];
	}cout<<mmax;
}
	return 0;
}
