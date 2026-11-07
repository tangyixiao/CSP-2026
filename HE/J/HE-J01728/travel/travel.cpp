#include<bits/stdc++.h>
using namespace std;
char c1[5],s1[5],c2[5],s2[5];
int ans[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s",&c1);
	scanf("%s",&s1);
	scanf("%s",&c2);
	scanf("%s",&s2);
	if(c1[1]==c2[1]&&c1[2]==c2[2]){
		ans[1]=1;
		if(s1[1]+s1[0]==s2[1]+s2[0]) ans[2]=1;
		int c=(int)s1[2]+(int)s2[2];
		if((c<=133&&c>=131)||(c==138)){
			if(ans[2]) ans[3]=1;
		}
		if(abs((int)s1[2]-(int)s2[2])==1+(c/138)){
			if(ans[3]) ans[4]=1;
		}
	}
	for(int i=1;i<=4;i++){
		cout<<ans[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
