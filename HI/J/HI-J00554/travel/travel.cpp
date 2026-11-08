#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int sum=0;
	for(int i=0;i<2;i++){
		if(a[i]!=c[i]){
			sum+=1;
		}
	}
	if(sum!=0) {
	   cout<<"0000";
	   return 0;
	}
	else cout<<"1";
	sum=0;
	for(int i=0;i<2;i++){
		if(b[i]!=d[i]){
			sum+=1;
		}
	}
	if(sum!=0) {
	   	cout<<"000";
	  	return 0;
	}
	else if(sum==0) cout<<"1";
	sum=0;
	if(b[2]<='C'&&d[2]>='D'){
		cout<<"00";
		return 0;
	}
	else cout<<"1";
	int n=b[2],m=d[2];
	if(n+1!=m&&m+1!=n){
		cout<<"0";
	}
	else if(n+1==m||m+1==n){
		cout<<"1";
	}
	return 0;
}
