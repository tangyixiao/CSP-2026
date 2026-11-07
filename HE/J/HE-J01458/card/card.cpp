#include<bits/stdc++.h>
using namespace std;
int a[10000005];
string b;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n,sum=0;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<m;i++){
			sum=i;
			b[i]=a[i]-'0';
			if(b[i]<b[i-1]){
				b=b[i];
			}
		}
		if(b.size()=n){
			cout<<sum;
		}
	}
	
	return 0;
}
