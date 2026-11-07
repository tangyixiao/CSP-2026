#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],b[200010],maxx=0,j=1,s;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cout<<i<<' '<<a[i]<<' ';
		maxx=max(maxx,a[i]);
	}
	while(maxx){
		maxx/=2;
		j*=2;
	}
	for(;j>0;j/=2){
		int k=0;
		for(int i=1;i<=n;i++){
			if(a[i]%j>=j/2&&b[i]==0){
				k++;
			}else if(b[i]==0){
				b[i]=1;
			}
		}
		if(k>=m){
			s+=j/2;
			for(int i=1;i<=n;i++){
				if(b[i]==1){
					b[i]=2;
				}
			}
		}else{
			for(int i=1;i<=n;i++){
				if(b[i]==1){
					b[i]=0;
				}
			}
		}
	}
	cout<<s;
	return 0;
}