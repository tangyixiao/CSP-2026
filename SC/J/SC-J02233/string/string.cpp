#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,total=0,w=1;
	cin>>n;
	int a[n+1];
	char c[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		total+=a[i];
	}
	char b[total+1];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=a[i];j++){
			b[w]=c[i];
			w++;
		}
	
	return 0;
}