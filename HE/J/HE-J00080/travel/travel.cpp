#include<bits/stdc++.h>
using namespace std;
int get_id(char ch){
	if(ch=='A') return 0;
	if(ch=='B') return 1;
	if(ch=='C') return 2;
	if(ch=='D') return 3;
	if(ch=='F') return 4;
	return -1;
}
bool is_left(char ch){
	return ch=='A'||ch=='B'||ch=='C';
}
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	int r1=(s1[0]-'0')*10+(s1[1]-'0');
	int r2=(s2[0]-'0')*10+(s2[1]-'0');
	char ch1=s1[2];
	char ch2=s2[2];
	bool ans1=(c1==c2);
	bool ans2=ans1&&(r1==r2);
	bool ans3=ans2&&(is_left(ch1)==is_left(ch2));
	bool ans4=false;
	if(ans3){
		int id1=get_id(ch1);
		int id2=get_id(ch2);
		if(abs(id1-id2)==1){
			ans4=true;
		}
	
	}
		cout<<ans1<<ans2<<ans3<<ans4<<'/n';
	return 0;
} 
