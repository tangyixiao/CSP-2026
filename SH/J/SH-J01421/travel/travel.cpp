#include <bits/stdc++.h>
using namespace std;
int c1,c2,r1,r2,t1,t2;
string s1,s2;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	r1=(s1[0]-'0')*10+s1[1]-'0';
	r2=(s2[0]-'0')*10+s2[1]-'0';
	t1=s1[2];
	t2=s2[2];
	if(c1==c2){
		if(r1==r2){
			if(t1==70&&t2==68||t1==68&&t2==70||t1==65&&t2==66||t1==66&&t2==65||t1==65&&t2==67||t1==67&&t2==65||t1==66&&t2==67||t1==67&&t2==66){
				if(t1==70&&t2==68||t1==70&&t2==68||t1==65&&t2==66||t1==66&&t2==65||t1==66&&t2==67||t1==67&&t2==66){
					cout<<1111;
				}else{
					cout<<1110;
				}
			}else{
				cout<<11<<0<<0;
			}		
		}else{
			cout<<1<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	
	fclose(stdin);
	fclose(stdout);
	
 	return 0;
}
