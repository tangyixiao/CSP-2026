#include<bits/stdc++.h>

using namespace std;


int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>s1>>c1>>s2>>c2;
	if(s1==s2){//判断同一车厢 
		cout<<1;
		if(c1[0]+c1[1]==c2[0]+c2[1]){//判断同一排 
			cout<<1;
			if(c1[2]<='C'&&c2[2]<='C'||c1[2]>='D'&&c2[2]>='D'){//判断同一侧 
				cout<<1;
				if(c1[2]-c2[2]==1 || c2[2]-c1[2]==1){//判断相邻 
					cout<<1;
				}else{
					cout<<0;
				}
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
