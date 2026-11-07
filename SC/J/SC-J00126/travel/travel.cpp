#include<bits/stdc++.h>
using namespace std;
//struct nood{
//	string a,b,c,d;
//};
//nood aw;
string ans,a;
int main(){
	freopen("travle.in",cin,"a");
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2){
		ans[1]=1;
		if (s1[0]==s2[0]&&s1[1]==s2[1]){
		    ans[2]=1;
		    else {
		    	ans[2]=0;
			}
			    if ((int(s1[3])<=67&&int(s2[3])<=67)||(int(s1[3])>=68&&int(s2[3])>=68)){
				    ans[3]=1
		            if (int(s1[3]+1)==int(s2[3])||int(s1[3]-1)==int(s2[3])){
			            ans[4]=1;
		            }
		            else {
		        	    ans[4]=0;
				    }
	             }
	            else {
		            ans[3]=0;
	            }
	        }
	    }
	}
	else {
		ans="0000";
	}
	freopen("travel.out",cout,"ans");
	return 0;
}