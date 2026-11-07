#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a,c=0;
	char b[900000],h;
	for(int i=1;i<=n;i++){
		cin>>a>>h;
		int g=c;
		c+=a;
		for(int j=g;j<=c;j++){
			b[j]=h;
		}
	}
	int l=0,r=strlen(b),m=0;
	while(l<r){
		if(b[r]==0){
			r--;
			continue;
		}
		if(b[l]!=b[r])
		m++;
		l++;
		r--;
	}
	cout<<m;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
