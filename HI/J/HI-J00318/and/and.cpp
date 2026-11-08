#include<bits/stdc++.h>
using namespace std;
char n[20][10];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	for(int i=0;i<=15;i++){
		int a1=i,s=0;
		for(int j=1;j>0;j++){
			if(a1==0){
				j=-1;
			}
			if(j>0){
				if(a1%2==1){
					n[i][j]='1';
				}else{
					n[i][j]='0';
				}
				a1=a1/2;
			}
		}
	}
	for(int i=0;i<=15;i++){
		for(int j=4;j>=1;j--){
			if(n[i][j]!='1'){
				n[i][j]='0';
			}
		}
	}
	long long a=0,b=0,c=0;
	cin>>a>>b;
	for(long long i=1;i<=a;i++){
		cin>>c;
	}
	for(long long i=1;i<=a;i++){
		
	}
	return 0;
}
