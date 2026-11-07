#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,s;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i+=2){
		s++;
		if(a[i]!=s){
			s=a[n];
		}
		else{
			cout<<a[i]+a[i+1];
		}
		cout<<s;
	}
	return 0;
}
