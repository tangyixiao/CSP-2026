#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a;
	int sum;
	char b;
	int a_;
	int sum_;
	char b_;
	cin >> a >> sum >> b >> a_ >> sum_ >> b_;
	bool f = false, s = false, t = false;
	if(a == a_){
		cout << "1";
		f = true;
	}
	else{
		cout << "0";
	}
	if(sum == sum_ && f){
		cout << "1";
		s = true;
	}
	else{
		cout << "0";
	}
	if(f && s && (b >= 'A' && b <= 'C' && b_ >= 'A' && b_ <= 'C')||(b >= 'D' && b <= 'F' && b_ >= 'D' && b_ <= 'F')){
		cout << "1";
		t = true;
	}
	else{
		cout << "0";
	}
	if(f && s && t && (abs(b - b_) == 1) || ((b == 'D' || b == 'F')&& (b_ == 'D' || b_ == 'F'))){
		cout << "1";
	}	
	else{
		cout << "0";
	}
	return 0;
} 