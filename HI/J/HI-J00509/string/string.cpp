#include<iostream>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","r",stdout);
    int n,x,k=0,z=0;
    char y;
    cin>>n;
    char a[1000000],b[1000000];
    for(int i=0;i<n;i++){
    	cin>>x>>y;
    	for(int j=0;j<x;j++){
    		a[k]=y;
   	 	    k++;
		}
	}
	for(int j=0,i=k-1;i>k/2;i--,j++){
		b[j]=a[i];
	}
	for(int i=0;i<k/2;i++){
		if(a[i]!=b[i]){
			z++;
		}
	}
    cout<<z;
	return 0;
}
