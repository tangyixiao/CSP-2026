#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,m,h,b,p;
	cin>>n>>m;
	int a[1000]={0};
	for(int i=1;i<=n;i++){
		cin>>b;
		a[i-1]=b;
	}
	for(int j=1;j<=n;j++){
		h=j;
		if(a[0]==a[j]){
			for(int g=0;g<j/2;g++){
				a[j+1]=a[g];
			}
			for(int y=0;y<j/2;y++){
				if(h==a[y]){
					p++;
				}
			}
			cout<<p<<" ";
		}
	}
	return 0;
}