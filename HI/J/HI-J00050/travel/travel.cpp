#include <bits/stdc++.h>
using namespace std;

bool flag[10];
int num1[10], num2[10];
int sum1, sum2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	for(int i=0;i<3;i++) if('1'<=s1[i] && s1[i]<='9') num1[i] = s1[i]-'0';
	for(int i=0;i<3;i++) if('1'<=s2[i] && s2[i]<='9') num2[i] = s2[i]-'0';
	sum1 = num1[0]*10+num1[1];
	sum2 = num2[0]*10+num2[1];
	
	if(c1==c2){		//同车厢 
		flag[0] = true;
		if(sum1==sum2){ 	//同一排 
			flag[1] = true;
			if(s1[2]>='D' && s2[2]>='D' || s1[2]<='C' && s2[2]<='C'){	//同一侧 
				flag[2] = true;
				if(abs(s1[2]-s2[2])==1){
					flag[3] = true;
				}
			}
		}
	}

	for(int i=0;i<4;i++){
		if(flag[i]) cout << 1;
		else cout << 0;
	}

	return 0;
} 
