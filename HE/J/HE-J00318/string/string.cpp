#include <iostream>
#include <string>
#include <cstdio> 
#include <vector>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	string str="";
	for(int i= 0; i < n; i++){
		int x;
		char y;
		cin >> x >> y;
		while(x--){
			str.push_back(y);
		} 
	}
	int num=0;
	for(int i = 0; i < str.size()/2; i++){
		if(str[i]!=str[str.size()-1-i]){
			num++;
		}
	}
	cout << num;
	return 0;
}

