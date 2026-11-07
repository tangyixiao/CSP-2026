#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("trave.in","r",stdin);
	freopen("trave.out","w",stdout);
	int n,m;
	string s1,s2[n+1];
	int a[n+1],b[n+1];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		while(a[i]/2==0){
			if(a[i]%2==1){
				s1=s1+"1";
			}else{
				s1=s1+"0";
			}
			a[i]=a[i]/2;
		}//µ¹×Å2 
		
	}
	for(int i=0;i<n;i++){
		
	}
	return 0; 
}
