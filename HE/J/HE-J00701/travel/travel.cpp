#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[3],b[3]={0};
	for(int i=0;i<=3;i++){
		cin>>a[i];
	}
	int k;
	if(a[0]==a[2]){
		b[0]=1;
		else if(a[3]-a[1]==1){
			b[1]=1;
			b[3]=1;
		else if(){
				
			}
		}
		else if(a[3]-a[1]!=1){
			b[1]=0;
			b[3]=0;
		}
	}
	else if(a[0]!=a[2]){
		b[0]=0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
