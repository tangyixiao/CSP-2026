#include<bits/stdc++.h>
using namespace std;
int n;
string s,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		long long sum;
		string tmp1;
		cin >> sum >> tmp1;
		for(long long j = 1;j <= sum;j++){
			s+=tmp1;
		} 
    }
    long long num = 0;
    for(int i = s.length()-1;i >=0;i--) {
    	s2+=s[i];
	}
	for(int i = 0;i < s.length()/2;i++){
		if(s[i] != s2[i]){
			num++;
		}
	}
	cout << num;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
