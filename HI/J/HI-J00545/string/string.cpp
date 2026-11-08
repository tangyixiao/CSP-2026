#include<bits/stdc++.h>
using namespace std;
long long n,i,bbb=0,aaa,num=0,j,c;
string m[100000001],a[1];
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(j=1;j<=n;j++){
		cin>>i>>a[0];
		for(;i>0;i--){
		bbb++;
		m[bbb]=a[0];
	    }
	}
	aaa=bbb;
	c=bbb/2;
	for(i=1;i<=c;i++){
		if(m[i]!=m[aaa])num++;
		aaa--;
	}
	cout<<num;
	return 0;
} 
