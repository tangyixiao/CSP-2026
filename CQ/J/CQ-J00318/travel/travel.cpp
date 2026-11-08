#include<bits/stdc++.h>
using namespace std;
//if 递推即可
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if (c1!=c2){//不在同一车厢 0000
		cout<<"0000";
	}
	else {//在同一车厢 1
		cout<<1;
		if (s1[0]==s2[0]&&s1[1]==s2[1]){//在同一排11
			cout<<1;
			if ((s1[2]>='D'&&s2[2]>='D')||(s1[2]<'D'&&s2[2]<'D')){//在同一侧111
				cout<<1;
				if (abs(s1[2]-s2[2])==1){ //相邻1111
					cout<<1;
				}
				else cout<<0; //不相邻1110
			}
			else cout<<"00";//不在同一侧 1100
		}
		else {//不在同一排1000
			cout<<"000";
		}
	}
	return 0;
}
