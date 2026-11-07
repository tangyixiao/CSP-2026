#include<bits/stdc++.h>
using namespace std;

int num[5];
int sum[5];
int cnt[5];
string seat[5];

int main(){
	freopen('travel.in','r',stdin);
	freopen('travel.out','w',stdout);
	for(int i = 1 ; i <= 2 ; i++){
		cin >> num[i] >> seat[i];
		//cout << num[i] << " " << seat[i] << " ";
	}
	sum[1] = (int(seat[1][0])-48)*10 + (int(seat[1][1])-48);
	sum[2] = (int(seat[2][0])-48)*10 + (int(seat[2][1])-48);
	//cout << sum[1] << " " << sum[2];
	cnt[1] = int(seat[1][2])-64;
	cnt[2] = int(seat[2][2])-64;
	//cout << cnt[1] << " " << cnt[2];
	if(num[1] == num[2]){
		cout << 1;
		if(sum[1] == sum[2]){
			cout << 1;
			if((cnt[1] <= 3 && cnt[2] <= 3)||(cnt[1] > 3 && cnt[2] > 3)){
				cout << 1;
				if((cnt[1] - cnt[2] == 1)||(cnt[1] - cnt[2] == -1))
					cout << 1;
				else
					cout << 0;
			}
			else{
				cout << 0;
				cout << 0;
			}
		}
		else{
			cout << 0;
			cout << 0;
			cout << 0;
		}
	}
	else{
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
