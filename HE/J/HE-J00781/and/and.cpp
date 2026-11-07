#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005],yu[105];
char er[200005];
int main(){
	cin>>n>>m;
	int ans=0,shang;
	for(int i=1;i<=n;i++){
		int yu{0},er{0},b=1;
		cin>>a[i];
		while(shang>0){
			yu[b]=a[i]%2;
			er[b]=yu[b];
			shang/=2;
			b++;
		}
	}
	for(int i=1;i<=n;i++){
		cout<<er[i];
	}
}
