#include <bits/stdc++.h>
using namespace std;
string s = "";
string s2 = "";
long long check(string x,string y){
	long long cnt=0;
	long long k = y.size()-x.size();
	reverse(y.begin(),y.end());
	for(int i = 0;i<x.size();i++){
		if(x[i] != y[i+k]){
			cnt++;
		}
	}
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int n;
	cin >> n;
	long long l=0;
	for(int i = 1;i<=n;i++){
		int a;
		char c;
		cin >> a >> c;
		for(int j = 1;j<=a;j++){
			s += c;
		}
		l+=a;
	}
	cout << check(s.substr(0,l/2),s.substr(l/2+1,l-l/2+1));
	/*int temp = l/2;
	if(l%2==1){
		temp++;
	}
	temp++;
	s2 = s.substr(temp-1,l-temp); 
	s = s.substr(0,temp-1); 
	cout << check(s,s2); 
	for(int i=1;i<=n/2;i++){
		int a;
		char c;
		cin >> a >> c;
		while(a--){
			s += c;
		}
	}
	for(int i=n/2+1;i<=n;i++){
		int a;
		char c;
		cin >> a >> c;
		while(a--){
			s2 += c;
		}
	}
	cout << check(s,s2);*/
	
	return 0;
} 
