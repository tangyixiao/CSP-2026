













#include <iostream>
#include <cstdio>
using namespace std;
int n,m,a[200050];
int allans=0;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
    }
	allans=a[1];
	for(int i=2;i<=n;i++){
		allans=allans&a[i];
	}
	cout<<allans;
	return 0; 
}
