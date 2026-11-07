#include<iostream>
using namespace std;
int main(){
	int n,m,c,max;
	cin>>n>>m;
	for(int h=0;h<n;h++){
		cin>>c;
		int u[h];
		u[h]=c;
		if(h>=1){
			int i;
			if(u[h]>=u[h-1]){
				i=u[h]%u[h-1];
				if(i>max){
					max=u[h-1];
				}
			}
			
			
			else if(u[h]<u[h-1]){
				i=u[h-1]%u[h];
				if(i>max){
					max=u[h];
				}
			}	
		}
	}
	cout<<max;
	return 0;
}
