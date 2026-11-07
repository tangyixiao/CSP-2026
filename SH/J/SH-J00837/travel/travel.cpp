#include<bits/stdc++.h>
using namespace std;
string c1,c2;
string s1,s2;
string tmp1,tmp2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1!=c2){
		cout << "0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	for(int i = 0;i < 2;i++){
		tmp1+=s1[i];
	}
	for(int i = 0;i < 2;i++){
		tmp2+=s2[i];
	}
	if(tmp1 != tmp2){
		cout << "1000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	int w1,w2;
	if(s1[2] == 'A'||s1[2] == 'B'||s1[2] == 'C'){
		w1 = 1;
	}else{
		w1 = 0;
	}
	if(s2[2] == 'A'||s2[2] == 'B'||s2[2] == 'C'){
		w2 = 1;
	}else{
		w2 = 0;
	}
	if(w1 != w2){
		cout << "1100";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(w1==1&&w2==1&&s1[2]-s2[2]!=-1&&s1[2]-s2[2]!=1){
		cout <<"1110";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	cout << "1111";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
