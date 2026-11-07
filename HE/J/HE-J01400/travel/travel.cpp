#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	int n=0;
	if(a==c){
		cout<<1;
		n=1;
	}
	else{
		cout<<0;
	}
	int l=b.size();
	int k=d.size();
	int u=1;
	if(l!=k||n==0){
		cout<<0;
		u=0;
	}
	else{
	for(int i=0;i<l-1;i++){
		if(b[i]!=d[i]){
			cout<<0;
			u=0;
		}
	}
	if(u){
		cout<<1;
	}
	}
	int y=0;
	if(((b[l-1]<='C'&&d[k-1]<='C')||(b[l-1]>'C'&&d[k-1]>'C'))&&u==1){
		cout<<1;y=1;
	}
	else{
		cout<<0;
	}
	if(y==0)cout<<0;
	else{
	if(abs(b[l-1]-d[k-1])==1||((b[l-1]=='D'&&d[k-1]=='F')||(b[l-1]=='F'&&d[k-1]=='D'))){
	cout<<1;
	}
	else{
		cout<<0;
	}	
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
