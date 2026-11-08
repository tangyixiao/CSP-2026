#include<bits/stdc++.h>
using namespace std;

string c1,c2;
string s1,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
	}else if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000";
	}else{
		int p1=(s1[2]-'A'+1);
		int p2=(s2[2]-'A'+1);
		if(p2<p1)swap(p1,p2);
		if((1<=p1&&p1<=3&&4<=p2&&p2<=5)){
			cout<<"1100";
		}else{
			if(p2-p1==1){
				cout<<"1111";
			}else{
				cout<<"1110";
			}
		}
	}
	return 0;
}
