#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int cnt = 0;
	string s = "";
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int k;
		char c;
		cin >> k >> c;
		for(int j = 1;j <= k;j++){
			s += c;
		}
	}
	for(int i = 0;i*2 < s.length();i++){
		if(s[i] != s[s.length()-1-i]) cnt++; 
	}
	cout << cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//at first and at least 60+,zhinengshinile^-^
//now is 11 o'clock im also stubid.^v^
//i decided to give up 30 minutes before and started drawing.
//i knew it is not easy to be a programmer...
//let's get some easy scores.
//dont think about any prize...be yourselve.dont forget you're a stdent with tallents!
//coding maybe hard,we can find other hobbies...
//now,i think i should dont give up early.
//let's think about how to solve the problem!
//go!go!go~~~
