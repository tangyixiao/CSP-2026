#include<bits/stdc++.h>
using namespace std;
int n,a[200005],b[200005];
char c;
void shuru(){
	int i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i]>>c;
		b[i]=c; 
	}
}
void jiben(){
	int i,f=1;
	for(i=1;i<=n;i++){
		if(b[i+1]==b[i]){
			f=1;
		}else{
			f=0;
		}
	}
	if(f==0){
		cout<<"0";
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	shuru();
	jiben();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
