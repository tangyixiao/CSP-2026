#include<bits/stdc++.h>
using namespace std;
int b[100000005];
int a[100000005];
int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
  int n,m,min=0;
  cin>>n>>m;
  for(int i=0;i<n;i++){
  	cin>>a[i];
  }
  for(int i=0;i<n;i++){
  	for(int j=i+1;j<n;j++){
  		b[i]=a[i]&a[j];
	    if(b[i]>min){
	    	min=b[i]; 
		}
	  }
  }
  cout<<min;
   return 0;
 }