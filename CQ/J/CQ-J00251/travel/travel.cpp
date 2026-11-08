#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int m,n,a,b;
	string x,y;
	cin>>a>>x>>b>>y;
	
	
	m=10*(x[0]-'0')+x[1]-'0';
	n=10*(y[0]-'0')+y[1]-'0';
	
	
	if(a==b){;
		printf("%d",1);
		if(m==n){
			printf("%d",1);
			if((x[2]-'A'<=2&&y[2]-'A'<=2)||(x[2]-'A'>2&&y[2]-'A'>2)){
				printf("%d",1);
				if(x[2]-y[2]==1||y[2]-x[2]==1){
					printf("%d",1);
				}
				else{
					printf("%c",'0');
				}
			}
			else{
				printf("%s","00");
			}
		}
		else{
			printf("%s","000");
		}
	}
	else{
		printf("%s","0000");
	}
	return 0;
}
