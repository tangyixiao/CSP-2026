#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){//是否相同车厢
		if(s2.substr(0,2)==s4.substr(0,2)){//是否同一排
			string idx1=s2.substr(2,1);
			string idx2=s4.substr(2,1);
			if(idx1>idx2)swap(idx1,idx2);
			if(idx2<="C"){
				if(idx1=="A" && idx2=="B" || idx1=="B" && idx2=="C")
					cout<<"1111";
				else cout<<"1110";
			}else if(idx1=="D" && idx2=="F")cout<<"1111";
			else cout<<"1100";
		}else cout<<"1000";
	}else cout<<"0000";
	return 0;
}