#include<bits/stdc++.h>
using namespace std;

long long a,b,s;
string a1,b1;

int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	cin>>a>>a1>>b>>b1;
	if(a==b){
		s++;
		if(a1[0]*10+a1[1]==b1[0]*10+b1[1]){
			s++;
			if((a1[2]<='C'&&b1[2]<='C')||(a1[2]>='D'&&b1[2]>='D')){
				s++;
				if(a1[2]-b1[2]==1||a1[2]-b1[2]==-1)s++;
			}
		}
	}
	for(int i=1;i<=s;i++)
		cout<<1;
	for(int i=1;i<=4-s;i++)
		cout<<0;
	return 0;
}