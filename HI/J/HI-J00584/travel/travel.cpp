#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;
int c1,c2,p1,p2,z1,z2;
string s1, s2;
int main(){
  freopen("travel.in", "r", stdin);
  freopen("travel.out", "w", stdout);
  cin >> c1 >> s1 >> c2 >> s2;
  p1=(s1[0]-'0')*10+(s1[1]-'0');
  z1=s1[2]-'A';
  p2=(s2[0]-'0')*10+(s2[1]-'0');
  z2=s2[2]-'A';
  if (c1==c2){
	cout<<'1';
	if (p1==p2){
      cout<<'1';
	  if((z1<3&&z2<3)||(z1>2&&z2>2)){
		cout<<'1'<<int(abs(z1-z2)==1);
	  }else cout<<"00";
	}else cout<<"000";
  }else cout<<"0000";
  return 0;
}
