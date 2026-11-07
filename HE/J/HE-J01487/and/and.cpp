include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,m,s[10000];
	for(int i = 0;i < n;i++){
		int w;
		cin >> w;
		s[i] = w;
		if(i > 1){
			if(s[i-1] and s[i] > s[i-2] and s[i-1]){
				m = s[i-1] and s[i];
			}else{
				m = s[i-2] and s[i-1];
			}
		}
	}
	cout << m;
	return 0;
}
