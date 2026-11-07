#include <bits/stdc++.h>
using namespace std;
int c_1,c_2;string s_1,s_2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	if(c_1==c_2)cout << 1;
	else{
		cout << "0000";
		return 0;
	}
	int line_a=0,line_b=0;
	char pos_a,pos_b;
	for(int i = 0;i<s_1.length();i++){
		if(s_1[i]>='0'&&s_1[i]<='9'){
			line_a = line_a*10+s_1[i]-'0';
		}
		else{
			pos_a=s_1[i];
		}
	}
	for(int i = 0;i<s_2.length();i++){
		if(s_2[i]>='0'&&s_2[i]<='9'){
			line_b = line_b*10+s_2[i]-'0';
		}
		else{
			pos_b=s_2[i];
		}
	}
	//printf("line_a%d line_b%d \n",line_a,line_b);
	if(line_a==line_b){
		cout << 1;
		if(pos_a>='A'&&pos_a<='C'&&pos_b>='A'&&pos_b<='C'){
			cout << 1;
			int t = pos_a-pos_b;
			if(t==1||t==-1)cout << 1;
			else cout << 0;
		}
		else if(pos_a>='D'&&pos_a<='F'&&pos_b>='D'&&pos_b<='F'){
			cout << 1;
			int t = pos_a-pos_b;
			if(t==2||t==-2)cout << 1;
			else cout << 0;
		}
		else{
			cout << "00";
		}
	}
	else{
		cout<<"000";
	}
	return 0;
} 
