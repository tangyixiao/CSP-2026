#include<bits/stdc++.h> 
using namespace std;
char a2[100],b2[100];
int ans[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a1,b1;
	cin>>a1>>a2>>b1>>b2;
	if (a1==b1){
		ans[0]=1;
		if (a2[0]==b2[0] && a2[1]==b2[1]){
		    ans[1]=1;
		    if (a2[2]=='A' || a2[2]=='B' ||a2[2]=='C'){
		    	if (b2[2]=='A' || b2[2]=='B' ||b2[2]=='C'){
		    		ans[2]=1;
		    		if(a2[2]=='B' || b2[2]=='B'){
		    			ans[3]=1;
					}
				}
			}
			if (a2[2]=='D' || a2[2]=='E' ){
		    	if (b2[2]=='D' || b2[2]=='E'){
		    		ans[2]=1;
		    		ans[3]=1;
				}
			}
	    }
	}
	cout<<ans[0]<<ans[1]<<ans[2]<<ans[3];
	fclose(stdin);
	fclose(stdout);
	return 0;
}