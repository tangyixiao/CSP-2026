#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,e,f=0;
    cin>>n>>m;
    int a[n];
    int b[m+5];
    for(int l=1;l<=n;l++){
    	cin>>a[l];
	}
	int q=1,s=0;
	for(int w=1;w<=m;w++){
		q=n*q;
		
	}
	int k=1;
	for(int w=0;w<m;w++){
		k=n*k;
		for(int j=0;j<q/m;j++){
	    b[w]=a[j%n];
	    e=b[0];
	for(int i=0;i<m;i++){
		e=e&b[m];
	}
	if(f<e){
		f=e;
	}
   	}
	}
	cout<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
