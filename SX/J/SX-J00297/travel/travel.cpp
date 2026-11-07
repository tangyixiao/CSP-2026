#include <bits/stdc++.h>
using namespace std;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,l1,s2,l2;
	bool flag1,flag2,flag3,flag4;
	cin>>s1>>l1>>s2>>l2;
	if(s1==s2){
		flag1=true;
		if(l1[0]==l2[0]&&l1[1]==l2[1]){
			flag2=true;
			if((l1[2]<=67&&l2[2]<=67)||(l1[2]>67&&l2[2]>67)){
				flag3=true;
				if((l1[2]==68&&l2[2]==70)||(l2[2]==68&&l1[2]<=70)) flag4=true;
				else if((l1[2]>=65&&l1[2]<=67)&&(l2[2]>=65&&l2[2]<=67)){
					if(l1[2]-l2[2]==-1||l1[2]-l2[2]==1) flag4=true;
				}
			}
		}
	}
	cout<<flag1<<flag2<<flag3<<flag4;
	return 0;
}