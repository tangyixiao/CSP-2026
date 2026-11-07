#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	memset(arr,0,sizeof(arr));
	string c1,s1,c2,s2,ans;
	scanf("%s",&c1);
	
	scanf("%s",&s1);
	
	scanf("%s",&c2);
	
	scanf("%s",&s2);
	
	if(c1!=c2){
		printf("0000");
		return 0;
	}
	else if(c1 == c2){
		
		printf("1");
		if(s1[0] == s2[0] and s1[1] == s2 [1]){
		printf("1");
			
			if(s1[2] >= 'D'&&s2[2] >= 'D' || s1[2] <='C' and s2[2] <= 'C'){
				printf("1");
				int a = (s1[0]-'0')*10+s1[1]-'0';
				int b = (s2[0]-'0')*10+s2[1]-'0';
				
				if(abs(a-b)<=1){
					int c = s1[2]-'A'+1;
					int d = s2[2]-'A'+1;
					if(abs(c-d) <= 1){
						printf("1");
					}else{
						printf("0");
					}	
				}
				else {
					printf("0");
				}
				
			}	
			
			else{
				printf("00");
				return 0;
			}
				
			
		}//2

		
		else{
			printf("000");
			return 0;
		}//1
		
		
		
		
	}
	
	
	return 0;
}





 
