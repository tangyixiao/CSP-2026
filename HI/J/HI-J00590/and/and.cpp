#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a,b=0;
	cin>>n>>a;
	int c[n];
	for(int i=0;i<n;i++){
		cin>>c[i];
		if(c[i]>=15){
			if(b<c[i]%10){
				b=c[i]%10;
				 
			}
			
		}if(c[i]<15||b<c[i]){
				 	b=c[i];
				 	
				 }
		
	}
	cout<<b;
	return 0;
}
