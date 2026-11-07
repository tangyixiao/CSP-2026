#include<bits/stdc++.h>
using namespace std;
long long n,x=0;
char a[1000000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out.","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		char y;
		cin>>y;
		for(int j=1;j<=m;j++){
			x+=1;
			a[x]=y;
		}
	}
	int cnt=0;
	for(int i=1;i<=x/2;i++){
		if(a[i]!=a[x-i+1])cnt++;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout); 
	return 0;
}
