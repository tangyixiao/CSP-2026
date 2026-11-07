#include<bits/stdc++.h>
using namespace std;
int n;
long long a[2000005];
char c[2000005];
string b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long ans=0;
	int rest=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			rest+=a[i-1];
		}else{
			rest+=a[i-1];
			for(int j=1;j<=rest;j++){
				b[j+ans]=c[i-1];
			}
			ans+=rest;
			rest=0;
		}
	}
	rest+=a[n];
	for(int j=1;j<=rest;j++){
		b[j+ans]=c[n];
	}
	int k=0;
	for(int i=1;i<=ans/2;i++){
		if(b[i]!=b[ans-i+1]){
			k++;
		}
	}
	cout<<k;
	return 0;
}
