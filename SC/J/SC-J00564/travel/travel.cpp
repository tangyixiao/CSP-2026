//我们注意到t1其实是打表模拟，需要注意的是这里的座位和实际高铁是一样的没有E，
//样例中没有写到，但测式肯定有，一定有不少人被骗（去年t2挂分的后遗症
#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')){
				cout<<1;
				char t1=s1[2],t2=s2[2];
				if(t1=='A'){
					if(t2=='B'){
						cout<<1;
					}else{
						cout<<0;
					}
				}else if(t1=='B'){
					if(t2=='A'||t2=='C'){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					if(t2=='B'){
						cout<<1;
					}else{
						cout<<0;
					}
				}
			}else if((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')){
				cout<<11;
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}
//我去，t1快50行了。。一定有更优秀的做法吧！