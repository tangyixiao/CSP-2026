#include<bits/stdc++.h>
using namespace std;
int ans,m=0;
int andand(int n){
	

	for(int i=0;i<=n;i++){
		m=n%2;
		n=n/2;
		cout<<m;
	}
}
int main(){
	int n;
	cin>>n;
//	for(int i=0;i<=n;i++){
//		m=n%2;
//		n=n/2;
//		cout<<m;
//	}
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);

	andand(n);
	return 0; 
} 

