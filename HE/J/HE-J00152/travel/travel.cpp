#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int solve1(){
	if(c1==c2){
		return true;
	}return false;
}
int solve2(){
	int sum1=s1[0]*10+s1[1],sum2=s2[0]*10+s2[1];
	if(sum1==sum2){
		return true;
	}return false;
}
int solve3(){
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
		return true;
	}return false;
}
int solve4(){
	int cnt=abs(s1[2]-s2[2]);
	if(cnt==1&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C'))){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	std::cin>>c1>>s1>>c2>>s2;
	if(solve1()){
		std::cout<<1;
		if(solve2()){
			std::cout<<1;
			if(solve3()){
				std::cout<<1;
				if(solve4()){
					std::cout<<1;
				}else{
					std::cout<<0;
				}
			}else{
				std::cout<<"00";
			}
		}else{
			std::cout<<"000";
		}
	}else{
		std::cout<<"0000";
	}
	return 0;
}
