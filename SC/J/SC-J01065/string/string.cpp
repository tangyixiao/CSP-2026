#include<bits/stdc++.h>
using namespace std;
char a[100000005];
long long b[100000005];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
   int n,s=0,sam=0,cut=0;
   string h;
   cin>>n;
   for(int i=1;i<=n;i++){
   	cin>>b[i]>>a[i];
   	s=s+b[i];
   	for(int j=1;j<=b[i];j++){
   		h=h+a[i];
	   }
   }
   if(s%2==1){
   	s=s/2+1;
   
   for(int i=s-1;i>=0;i--){
   	   cut++;
	   if(h[i]!=h[i+2*cut]){
	   	sam++;
	   }
   }
   cout<<sam-1;
   }
   else{
   	s=s/2;
   	for(int i=s;i>=0;i--){
   		if(i!=s){
   			cut++;
		   }
   		if(h[i]!=h[i+2*cut])
   		sam++;
	   }
	   cout<<sam;
   }
   return 0;
 }