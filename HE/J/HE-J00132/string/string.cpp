#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,k,l=0,cnt=0;
	char c,t1,t2;
	string s="";
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> k >> c;
		for(int j=0;j<k;j++){
			s.push_back(c);
		}
	}
	l=s.length();
	for(int i=0;i<l/2;i++){
		t1=s[i];
		t2=s[l-1-i];
		if(t1!=t2){
			cnt++;
		}
	}
	cout << cnt;
	return 0;
} 
