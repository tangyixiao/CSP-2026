#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int f[10]={0,1,2,3,4,0,5};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
	}else{
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			int cnt1=f[s1[2]-'A'+1],cnt2=f[s2[2]-'A'+1];
			if((cnt1<=3&&cnt2<=3)||(cnt1>=4&&cnt2>=4)){
				if(abs(cnt1-cnt2)==1){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}
	return 0;
}
