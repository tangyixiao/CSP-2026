#include<bits/stdc++.h>
using namespace std;
int a[100005];
string b;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long d=0,f=1,e=0,max1=0,z=0,y=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		d=d+a[i];
	}
	if(d<=1000000000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=a[i];j++){
				c[f]=b[i];
				f++;
			}
		}
		
		if(d%2==1){
		e=(d+1)/2;
		for(int i=1;i<=e;i++){
			if(c[e-i]!=c[e+i]){
				max1++;
			}
		}	
		}
		else if(d%2==0){
			z=d/2;
			y=d/2+1;
			for(int i=0;i<=d/2;i++){
			if(c[z-i]!=c[y+i]){
				max1++;
			}
		}	
		}
		cout<<max1;
		}
		return 0;
}
