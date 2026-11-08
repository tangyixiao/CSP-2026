#include <bits/stdc++.h>
using namespace std;
bool s2(string str,int len){
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-i-1]){
			return false;
		}
	}
	return true;
}
int s(string str,int len){
	int c=0,d=len-1;
	for(int i=0;i<len;i++){
		if(s2(str,len)){
			break;
		}
		str[d]=str[c];
		d--;
		c++;
	}
	return c;
}
int main(){
    freopen("string.in", "r", stdin);
    freopen("string.out", "w", stdout);
    int n;
    cin>>n;
    if(n==1){
    	cout<<0;
    	return 0;
	}
    string str;
    for(int i=0;i<n;i++){
    	int a;
    	char b;
    	cin>>a>>b;
    	for(int i=0;i<a;i++){
    		str+=b;
		}
	}
	int len=str.size();
	cout<<s(str,len);
	return 0;
}

