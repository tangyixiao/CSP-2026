#include<bits/stdc++.h> 
using namespace std;
string caa,cbb;
string saa,sbb;
int ans1,ans2,ans3,ans4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> caa >> saa >> cbb >> sbb;
	ans1 = caa == cbb;
	ans2 = ans1 and saa[0] == sbb[0] and saa[1] == sbb[1];
	ans3 = ans2 and ((saa[2] <= 'C' and sbb[2] <= 'C') or (saa[2] >= 'D' and sbb[2] >= 'D'));
	ans4 = ans3 and abs(saa[2] - sbb[2]) == 1;
	cout<<ans1<<ans2<<ans3<<ans4;
	
	
	return 0; 
}          
