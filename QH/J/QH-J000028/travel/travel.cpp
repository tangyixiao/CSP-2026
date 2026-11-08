#include<bits/stdc++.h>
using namespace std;
int main(){
   // freopen("travel.in","r",stdin);
    //freopen("travel.out","w",stdout);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==1 || c==1 || a==17 ||c==17){
		cout<<"0000";
    }
    int c1;
    int c2;
    int s1;
    int s2;
    int A,B,C,D,F;
    for(int i=1;i<=18;i++){
    	if(c1==c2){
			if(s1/10==s2/10){
			    
			
			  	if(b==A&&d==B||b==B&&d==C||b==D&&d==F){
			     		     cout<<"1111";
			     		
				}else{
					 	      cout<<"1110";
					  }
				
		    }else{
		    	cout<<"1000";
			}
    		
		}else{
			cout<<"0000";
		}
	}
	cout<<"1100";
	return 0;
}
