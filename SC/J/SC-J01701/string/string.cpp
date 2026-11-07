#include<bits/stdc++.h>
using namespace std;

int o=0,i,j,n,m,h,p;
string s;
char a[10200][10200];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			cin>>a[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			o=o+int(a[i][1]);
			if(n==1){
				cout<<"0";
				break; 
			}
			if(o/n==int(a[i][1])){
				cout<<"0";
				break;
			}else{
				break;
			}
		}	
	}
	return 0;
}