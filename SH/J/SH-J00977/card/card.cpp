#include<bits/stdc++.h>
using namespace std;
int a[10000];
bool b[10000];
int c[10000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++){
		if(b[a[i]]){
			c[i]++;
		}
		else{
			b[a[i]]=1;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<a[i];
		
	}
	return 0;
}
