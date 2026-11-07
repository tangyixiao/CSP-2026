#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
bool flag1,flag2,flag3,flag4;
bool tc(char a,char b){
	if((a>='A' && a<='C') && (b>='A' && b<='C')) return 1;
	else if((a>='D' && a<='F') && (b>='D' && b<='F')) return 1;
	else return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	int p1=s1[0]+s1[1];
	int p2=s2[0]+s2[1];
	
	if(c1==c2){
		flag1=1;
		if(p1==p2){
			flag2=1;
			if(tc(s1[2],s2[2])){
				flag3=1;
				if(int(s1[2])-int(s2[2])==1 || int(s2[2])-int(s1[2])==1){
					flag4=1;
				}
			}
		} 
	}
	cout<<flag1<<flag2<<flag3<<flag4;
	return 0;
} 