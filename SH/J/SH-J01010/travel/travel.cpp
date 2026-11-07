#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,c2,s1,s2;
	cin>>c1>>c2>>s1>>s2;
	
	if(c1!=s1){ //特判：车厢不在同一节，直接全部不满 
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<=1;i++){
		if(c2[i]!=s2[i]){ //如果不在同一排，三个条件一定不满足 
			cout<<"1000";
			return 0;
		}
	} 
	if(c2[2]=='C'&&s2[2]=='D' || c2[2]=='D'&&s2[2]=='C'){ //不在同一侧，两个不满足 
		cout<<"1100";
		return 0;
	} 
	int c=c2[2]-'A';
	int s=s2[2]-'A';
	int cha=abs(c-s);
	if(cha==1 || (c2[2]=='D'||s2[2]=='F') || (c2[2]=='F'||s2[2]=='D')){ //同在左侧且相邻 || 同在右侧 
		cout<<"1111";
		return 0;
	}
	else cout<<"1110"; //不相邻 
	return 0;
}
 
