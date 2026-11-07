#include<bits/stdc++.h>
using namespace std;
string c1,s1;
string c2,s2;
bool f1,f2,f3,f4;
int sum1,sum2;
int a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		f1 = 1;
		for(int i = 0;i < 2;i++){
			sum1 *= 10;
			sum1 += s1[i] - '0';
			sum2 *= 10;
			sum2 += s2[i] - '0';
		}
		if(sum1 == sum2){
			f2 = 1;
			if(s1[2] <= 'C' && s2[2] <= 'C'){
				f3 = 1;
			}
			if(s1[2] >= 'D' && s2[2] >= 'D'){
				f3 = 1;
			}
			if(f3==1){
				a1 = s1[2] - '0';
				a2 = s2[2] - '0';
				if(max(a1,a2) - min(a1,a2) == 1){
					f4 = 1;
				}
			}
		}
	}
	cout << f1 << f2 << f3 << f4;
	
	return 0;
}
