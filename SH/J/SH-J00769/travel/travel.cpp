#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	bool flag1=0,flag2=0;
	if(c1==c2){//在同一节车厢 
		cout<<1;
		if(s1[0]==s2[0] and s1[1]==s2[1]){//在同一排 
			cout<<1;
			if(s1[2]<='C'){
				flag1=1;
			}
			if(s2[2]<='C'){
				flag2=1;
			}
			if((flag1 and flag2) or (!flag1 and !flag2)){//在同一侧 
				cout<<1; 
				if(abs(s2[2]-s1[2])==1){//如果相邻 
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0<<0;
			}
		}
		else{
			cout<<0<<0<<0;
		}
	}
	else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}
