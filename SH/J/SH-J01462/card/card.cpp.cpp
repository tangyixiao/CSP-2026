#include <iostream>
using namespace std;
int main(){
	int a,b,c[100],d[100],ans=0,e;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>c[i];
	}for(int i=1;i<=100;i++){
		d[i]=0;
	}
	for(int i=1;i<=a;i++){
		e=1;
		for(int j=i;j<=a;j++){
			d[e]=c[j];
			e+=1;
			for(int k=1;k<e-1;k++){
				if(c[j]==d[k]){
					for(int l=k+1;l<=e;l++){
						d[l]=0;
					}
					e=k;
				}
			}
		}
		for(int j=1;j<=b;j++){
		ans=0;
		for(int i=1;i<=a;i++){
			for(int k=1;k<=a;k++){
				if(d[k]==j){
				ans+=1;
			}
			}
			
		}
		cout<<ans<<" ";
	}
	}
}
