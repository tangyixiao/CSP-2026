#include <bits/stdc++.h>
using namespace std;
long long   n,m,cnt;
long long a[10000001],b[10000001],m1[100000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int c= 0;
	while(c<n){
		for(int i = 0,j=c;i<n;i++,j++){
			b[i]=a[j];
		}
		for(int i = 0;i<n;){
			if(b[i]==b[i+1]){
				b[i]=0;
				b[i+1]=0;
				i+=2;
			}
			else{
				i++;
			}
		}
		for(int i = 0;i<n;i++){
			if(b[i]>0){
				 
				m1[b[i]]++;
			}
		}
	}
	for(int i = 0;i<m;i++){
		cout<<m1[i]<<" ";
	}
	return 0;
}
