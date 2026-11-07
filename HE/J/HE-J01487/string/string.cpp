include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	string s , s1;
	cin >> n;
	for(int i = 0;i < n;i++){
		int w;
		char e;
		cin >> w >> e;
		for(int j = 0;j < w;j++){
			s = e;
		}
		for(k = 0;k < n*w;k++){
			s1[k] = s[n*w-k];
		}
	}
	if(s1 == s){
		cout << '0';
	}else{
		cout << n*w/2;
	}
	return 0;
}
