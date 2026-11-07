#include<bits/stdc++.h>
using namespace std;
int c_1,c_2;
string r,x;
bool true_of_cx() {
	if(c_1==c_2) {
		return true;
	} else {
		return false;
	}
}
bool true_of_p() {
	int r_=(int)((r[0]-'0')*10)+(int)(r[1]-'0');
	int x_=(int)((x[0]-'0')*10)+(int)(x[1]-'0');
	if(r_==x_) {
		return true;
	} else {
		return false;
	}
}
bool true_of_c() {
	bool r_=((r[2]=='A')||(r[2]=='B')||(r[2]=='C'));
	bool x_=((x[2]=='A')||(x[2]=='B')||(x[2]=='C'));
	if(r_==x_) {
		return true;
	} else {
		return false;
	}
}
bool true_of_xl() {
	if((true_of_cx()==true)&&(true_of_p()==true)&&(true_of_c()==true)) {
		int r_=(int)(r[2]-'A'+1);
		int x_=(int)(x[2]-'A'+1);
		if(abs(r_-x_)==1) {
			return true;
		} else {
			return false;
		}
	} else {
		return false;
	}
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c_1>>r>>c_2>>x;
//	cout<<c_1<<' '<<r<<' '<<c_2<<' '<<x<<endl;
	if(true_of_cx()) {
		cout<<1;
	} else {
		cout<<0;
	}
	if(true_of_cx()&&true_of_p()) {
		cout<<1;
	} else {
		cout<<0;
	}
	if(true_of_cx()&&true_of_p()&&true_of_c()) {
		cout<<1;
	} else {
		cout<<0;
	}
	if(true_of_xl()) {
		cout<<1;
	} else {
		cout<<0;
	}
//	cout<<' '<<r[2]<<' '<<x[2];
	return 0;
}
