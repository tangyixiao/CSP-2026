#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	long long sum = b.size();
	if(a != c){
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if(a == c){
		cout << 1;
	}else{
		cout << 0;
	}
	long long ans1 = 0;
	long long ans2 = 0;
	for(int i=0;i<sum-1;i++){
		ans1 += int(b[i]);
		ans2 += int(d[i]);
	}
	if(ans1 == ans2){
		cout << 1;
	}else{
		cout << 0;
	}
	long long ans3 = 0;
	long long ans4 = 0;
	for(int i=0;i<sum;i++){
		ans3 += b[i];
		ans4 += d[i];
	}
	long long ans5 = ans3 - ans1;
	long long ans6 = ans4 - ans2;
	if((ans1 == ans2) && (ans5 >= 4 && ans6 >= 4 || ans5 <= 3 && ans6 <= 3)){
		cout << 1;
	}else{
		cout << 0;
	}
	if((ans1 == ans2) && (ans5 >= 4 && ans6 >= 4 || ans5 <= 3 && ans6 <= 3) && abs(ans5 - ans6) == 1){
		cout << 1;
	}else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
    return 0;	
}
