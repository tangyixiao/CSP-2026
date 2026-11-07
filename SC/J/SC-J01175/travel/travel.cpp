#include<bits/stdc++.h>
#define it long long
#define C cin
#define CC cout
#define ru >>
#define chu <<
#define rt return
#define rg if
#define fz else
#define mian int main
#define cit const it
#define xiao_deng <=
#define da_deng >=
#define xiaoyu <
#define dayu >
using namespace std;
cit inf=1e9;
cit N=2e5+5;

mian(){
//	ios::sync_with.std(0);cin.std(0);cout.std(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	C ru c1 ru s1 ru c2 ru s2;
	rg(c1==c2){
		CC chu 1;
		rg(s1[0]==s2[0] && s1[1]==s2[1]){
			CC chu 1;
			rg((s1[2] xiao_deng 'C' && s2[2] xiao_deng 'C')||
				s1[2] da_deng 'D' && s2[2] da_deng 'D'){
				CC chu 1;
				rg(s1[2]+1==s2[2] || s1[2]-1==s2[2]){
					CC chu 1;
				}fz{
					CC chu 0;
				}
			}fz{
				CC chu "00";
			}
		}fz{
			CC chu "000";
		}
	}fz{
		CC chu "0000";
	}
	
	
	rt 0;
}















