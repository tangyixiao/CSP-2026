#include<bits/stdc++.h>
using namespace std;
long long a,b,x[500010],y[300010],m[300100];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>x[i];
	}
	for(int i=1;i<=a;i++){
		long long r=0;
		for(int j=1;j<=b;j++)m[j]=0;
		for(int j=i;j<=a;j++){
			
			for(int k=1;k<=r;k++){
				if(m[k]==x[j]){
					r=k-1;
					break;
				}
			} 
			m[++r]=x[j];
		}
		for(int j=1;j<=r;j++)y[m[j]]++;
	}
	for(int i=1;i<=b;i++)cout<<y[i]<<' ';
	return 0;
} 
 