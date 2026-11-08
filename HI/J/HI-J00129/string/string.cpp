#include<bits/stdc++.h> 
using namespace std;
char a[200005][1000];
int n;
int main(){
freopen( "string.in","r",stdin);	
freopen("string.out","w",stdout);
	int ans=1; 	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i][1];
		cin>>a[i][2];
	
	}
	for(int i=1;i<=n;i++){
	if(a[i][2]==a[i+1][2])
	ans+=1;
	}
	
		if(ans==n){
			cout<<0;
		}
	
	return 0;
}

