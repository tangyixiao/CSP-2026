#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int ans1=0,ans2=0,ans3=0,ans4=0;
    int x1,x2,i=1,j=1;
    string z1,z2;
    char n[100005];
    char m[100005];
    cin>>x1>>z1>>x2>>z2;
	for(char a:z1){
	    n[i]=a;
	    i++;
	};
    for(char b:z2){
	    m[j]=b;
	    j++;
	};
	if(x1 == x2){
		ans1 =1;
        if(n[1]==m[1] && n[2]==m[2]){
        	ans2 = 1;
    	    if(n[3]=='A'&& m[3]=='B' or n[3]=='B'&&m[3]=='A'){
        		ans3=1;
        		ans4=1;
	        }
	    	if(n[3]=='B'&& m[3]=='C' or n[3]=='C'&&m[3]=='B'){
        		ans3=1;
        		ans4=1;
	        }
	        if(n[3]=='D'&& m[3]=='F' or n[3]=='F'&&m[3]=='D'){
	        	ans3=1;
	        	ans4=1;
	    	}
	    	if(n[3]=='A'&& m[3]=='C' or n[3]=='C'&&m[3]=='A'){
	    		ans3=1;
	    	}
        }
    }
    cout<<ans1<<ans2<<ans3<<ans4;
	return 0;
}