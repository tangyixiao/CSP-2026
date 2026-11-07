#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,m=0;
	char b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		m+=a;
	} 
	if(m%2==0){
		cout<<m/2;
	}
	else{
		m-=1;
		cout<<m/2;
	}
	return 0;
}
