#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b,c[100009],e[100009],f;
	long long z;
	long long d[100009];
	cin>>a>>b;
	for(int i=0;i<a;i++)
		cin>>c[i];
	for(int i=0;i<a;i++)
		for(int j=i+1;j<a;j++)
			if(c[i]<c[j]){
				z=c[j];
				c[j]=c[i];
				c[i]=z;
			}
	cout<<c[b-1];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(c[i]==1){
				d[i]+=2;
				break;
			}
			if(c[i]%2==1){
				d[i]+=2;
				d[i]*=10;
			}
			else{
				d[i]+=1;
				d[i]*=10;
			}
			c[i]/=2;
		}
	}
	for(int i=0;i<a;i++)
		for(int j=i+1;j<a;j++)
			if(d[i]>d[j]){
			}
	return 0;
}

