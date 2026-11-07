#include<iostream>
using namespace std;
int a[10000][10000],n,m,x,y,c;
int main(){
	freopen("string.in","r","stdin");
	freopen("string.out","w","stdout");
    cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>c;
		for(int j=0;c!=0;c++){
			a[i][j]=c%2;
			c=c%;
		}
	}
    return 0;
}
	
 