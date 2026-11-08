#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int c1,c2;
int bh1,bh2;
int mp[15]={1,1,1,2,2};
char s1,s2;

void File(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
}

int main(){
	File();
	cin>>c1>>bh1>>s1>>c2>>bh2>>s2;
	if(c1==c2){
		cout<<1;
		if(bh1==bh2){
			cout<<1;
			if(s1=='F'){
				s1='E';
			}
			if(s2=='F'){
				s2='E';
			}
			int m1=mp[s1-'A'],m2=mp[s2-'A'];
			if(m1==m2){
				cout<<1<<(abs(int(s1-'A')-int(s2-'A'))==1);
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
/*
Red AC
*/
