#include<bits/stdc++.h>
using namespace std ;
int a[999999];
char b[999999],c[999999];
int main(){
	freopen("string.in","r",stdin);
		freopen("string.out","w",stdin);
	int n,x=0,m=0,num=0;
	cin>>n;
	 for(int i=0;i<n;i++){
	 	cin>>a[i]>>b[i];
	 	x+=a[i];
	 }
	 for(int i=0;i<n;i++){
	 	for(int j=0;j<a[i];j++){
	 		c[m]=b[i];
	 		m++;
		 }
	 }
	 int o=x;
	 for(int i=0;i<=x/2;i++){
	 	if(c[i]!=c[o]) num++;
	 	
	 }
	 if(x%2==0){
	 	cout<<num;
	 }else{
	 	cout<<num-1;
	 }
	return 0;
}
