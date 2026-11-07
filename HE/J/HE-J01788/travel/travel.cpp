#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int cnt1 = s1[0] - '0' +s1[1] - '0';
	int cnt2 = s2[0] - '0' +s2[1] - '0';
	char a=s1[2];
	char b=s2[2];
	char c = 'C';
	char d = 'D';
	if(c1==c2&&c1!=17&&c1!=01){
		if(cnt1==cnt2){
			if(a<=c&&b<=c||a>=d&&c>=d)
			{
				if(a-b==1||a-b==-1){
					cout<<"1111";
				}
				else cout<<"1110";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	return 0;
}
