#include<bits/stdc++.h>
#define ll long long
#define pr pair<int,int>
#define _1 first
#define _2 second
using namespace std;
string s_1,s_2,c_1,c_2;
int sz1,sz2;
char zm1,zm2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_1>>s_1>>c_2>>s_2; 
	sz1=(s_1[0]-'0')*10+(s_1[1]-'0');
	zm1=s_1[2];
	sz2=(s_2[0]-'0')*10+(s_2[1]-'0');
	zm2=s_2[2];
	if(c_1==c_2){//先看是否为一个车厢 
		cout<<1;
		if(sz1==sz2){//是否为一排的 
			cout<<1;
			if(zm1=='A'||zm1=='B'||zm1=='C'){//是否为一侧 
				if(zm2=='A'||zm2=='B'||zm2=='C'){
					cout<<1;
					if(zm1=='B'||zm2=='B'){//只有在中间时才行 
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					cout<<"00";
				}
			}else{
				if(zm2=='F'||zm2=='D'){
					cout<<11;
				}else{
					cout<<"00";
				}
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
/*

*/
