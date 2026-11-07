#include<bits/stdc++.h>
using namespace std;
long long n,m;
const long long am=1000000;
long long a[am],x[am],cont[am];
int cnt=0;
int main(){
	cin>>n>>m;
	for(long long i=0;i<=n;i++){
		cont[i]=0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(long long h=1;h<=n;h++){
		for(long long i=h;i<=n;i++){
			for(long long y=i+1;y<=n;y++){
				if(a[i]==a[y]){
					i=y;
					x[h]=y;
					cnt++;
					break;
				}
				if(cnt==0){
					x[h]=h;
				}
			}
		}
		cnt=0;
	}
	for(long long h=n;h>=1;h--){
		for(long long i=n;i>=x[h];i--){
			for(int y=1;y<=m;y++){
				if(a[i]==y){
					cont[y]++;
					break;
				}
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cont[i]<<" ";
	}
	return 0;
}