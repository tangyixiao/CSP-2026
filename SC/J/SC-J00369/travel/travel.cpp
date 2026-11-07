#include<bits\stdc++.h>
using namespace std;
int c1,c2;
char s1[5],s2[5];
int ans[5]; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%d %c%c%c %d %c%c%c",&c1,&s1[1],&s1[2],&s1[3],&c2,&s2[1],&s2[2],&s2[3]);
	if(c1==c2){
		ans[1]=1;
		if(s1[1]==s2[1]&&s1[2]==s2[2]){
			ans[2]=1;
			if(s1[3]<='C'&&s2[3]<='C'||s1[3]>'C'&&s2[3]>'C'){
				ans[3]=1;
				if(s1[3]==s2[3]+1||s2[3]==s1[3]+1)ans[4]=1;
			}
		}
	}
	printf("%d%d%d%d",ans[1],ans[2],ans[3],ans[4]);
	return 0;
}