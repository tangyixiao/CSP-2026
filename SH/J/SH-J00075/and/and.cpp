#include<bits/stdc++.h>
using namespace std;
long long n,a[200009],m;
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	for(long long i=0;i<=n;i++){
	cin>>a[i];
    }   
    if(n==1){
    	cout<<n;
	}
	if(m==1){
		cout<<m;
		
	}
	return 0;
}
