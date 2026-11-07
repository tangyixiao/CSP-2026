#include <bits/stdc++.h>
using namespace std;
struct qwe{
	string ch,zu;
}r,x;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string s;
	cin>>r.ch>>r.zu>>x.ch>>x.zu;
	if(r.ch==x.ch){
		s="1000";
		if(r.zu[0]==x.zu[0]&&r.zu[1]==x.zu[1]){
			s="1100";
			if(r.zu[2]<='C'&&x.zu[2]<='C'||r.zu[2]>='D'&&x.zu[2]>='D'){
				s="1110";
				if(r.zu[2]+1==x.zu[2]||r.zu[2]-1==x.zu[2]){
					s="1111";
				}
			}
		}
	}
	else s="0000";
	cout<<s;
	return 0;
} 
