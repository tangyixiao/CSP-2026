#include<bits/stdc++.h>
using namespace std;
long long n,a,k=0,ans=0;
char c[200009]={};
int f=0;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>c[f];
		f++;
		for(int j=1;j<a;j++){
			c[f]=c[f-1];
			f++;
		}
	} 
	for(int i=0;i<=f/2;i++){
		if(c[i]!=c[f-1-i]){
			ans++;
			c[f-1-i]==c[i];
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
