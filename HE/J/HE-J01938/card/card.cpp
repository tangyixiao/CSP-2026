#include<bits/stdc++.h>
using namespace std;
int  n,m;
int a[3000005];
itn b[3000005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
}
	int dang=0;
	for(int i=1;i<=n;i++){
		if(a[i]==a[i+1]){
			dang=1;
		}else{
			dang++;
		}
	}
	if(dang==1){
		cout<<dang;
	}else{
		for(int i=1;i<=n;i++){
			cout<<1<<" ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
