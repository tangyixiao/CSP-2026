#include<bits/stdc++.h>
using namespace std;
long long a[300000][2]; 
long long n,l=0,p=0;
long long k;
char b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>k>>b;
		a[i][0]=k;
		a[i][1]=b;
	}
	for(int i=1;i<=n;i=i){
		if(a[i][0]<a[n][0]){
			if(a[i][1]!=a[n][1]){
				p+=a[i][0];
			}
			a[n][0]-=a[i][0];
			i++;
		}
		else if(a[i][0]>a[n][0]){
			if(a[n][1]!=a[i][1]){
				p+=a[n][0];
			}
			a[i][0]-=a[n][0];
			n--;
		}
		else{
			if(a[n][1]!=a[i][1]){
				p+=a[n][0];
			}
			n--;
			i++;
		}
	}
	cout<<p;
}