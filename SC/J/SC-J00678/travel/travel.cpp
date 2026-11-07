#include <bits/stdc++.h>
using namespace std;

int c1, c2, s1, s2;
char s1_, s2_;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin>>c1>>s1>>s1_>>c2>>s2>>s2_;
	if(c1==c2){//判断车厢 
		cout<<'1';
		if(s1==s2){//判断同行 
			cout<<'1';
			if(s1_=='A'||s1_=='B'||s1_=='C'){//判断同侧（ABC侧） 
				if(s2_=='A'||s2_=='B'||s2_=='C'){
					cout<<'1';
					if((s1_=='A'&&s2_=='B')
					 ||(s1_=='B'&&s2_=='C')){//判断相邻（ABC侧需要分别判断AB和BC） 
						cout<<'1';
					}
					else cout<<'0';
				}
			}
			else cout<<"00";
			if(s1_=='D'||s1_=='F'){//判断同侧（DF侧，因为只有两座，因此本侧一定相邻） 
				if(s2_=='D'||s2_=='F'){
					cout<<"11";
				}
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}