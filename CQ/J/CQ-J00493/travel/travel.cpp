#include<bits/stdc++.h>
int main(){
    int a,c;
    std::string b[5];
    std::string d[5];
    int x[10];
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	if(a==c){
		x[3]=1;
	}
	else{
		x[0]=0;
		x[1]=0;
		x[2]=0;
		x[3]=0;
		return 0;
	}
	if(b[2]==d[2]&&b[1]==d[1]){
		x[2]=1;
		}
	else{
		x[2]=0;
		x[1]=0;
		x[0]=0;
	    return 0;
	}
	else{
		x[2]=1;
		x[1]=1;
		x[0]=1;
	}
    printf("%d",x) ;
	return 0;	
}    

