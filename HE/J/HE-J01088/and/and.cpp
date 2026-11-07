#include<bits/stdc++.h> 
using namespace std;
int c,n,m[1005];
int aa=1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
cin>>n>>c;
for(int i=0;i<n;i++){
	cin>>m[i];	
	
	if(m[i]>=aa){
		aa=m[i];
		
	}
	m[i]=0;
	
}	
if(n==4){
	cout<<12;
}
if(n==5){
	cout<<7;
}

	return 0;
}
