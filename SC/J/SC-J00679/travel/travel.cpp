#include<bits/stdc++.h>
using namespace std;
int main(){
	string c1,s1,c2,s2;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    if(c1==c2){
    	cout<<1;
    	int a=int(s1[0]-'0')*10+int(s1[1]-'0');
    	int b=int(s2[0]-'0')*10+int(s2[1]-'0');
    	char p1=s1[2],p2=s2[2];
    	if(a==b){
    		cout<<1;
    		if(((p1=='A'||p1=='B'||p1=='C')&&(p2=='A'||p2=='B'||p2=='C'))||((p1=='D'||p1=='F')&&(p2=='D'||p2=='F'))){
    			cout<<1;
    			if(abs(int(p1-p2))==1)cout<<1;
    			else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
    else cout<<"0000";
	return 0;
} 