#include <bits/stdc++.h>
using namespace std;
string num[200005];
string wy(string x,string y){
	string s = "";
	int len = min(x.length(),y.length());	
	for(int i = 0;i < len;i++){
		if(x[i] == y[i] && x[i] != '0') s += '1';
		else s += '0';
	}
	return s;
}
bool scmp(string x,string y){
	if(x.length() > y.length()) return true;
	else if(x.length() < y.length()) return false;
	else{
		for(int i = x.length()-1;i >= 0;i--){
			if(x[i] > y[i]) return true;
		}
	}
	return false;
}

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m; cin>>n>>m;
	int ans = 0;
	for(int i = 0;i < n;i++){
		int temp; cin>>temp;
		if(m == 1){
			ans = max(ans,temp);
		}
		string s = "";
		while(temp){
			if((temp ^ 1) == temp-1){
				s+="1";
			} else{
				s+="0";
			}
			temp = temp>>1; 
		}
		num[i] = s;
	}
	if(m == 1){
		cout<<ans;
		return 0;
	}
	sort(num,num+n,scmp);
	string ans2 = num[0];
	for(int i = 1;i < m;i++){
		ans2 = wy(ans2,num[i]);
	}
 	for(int i = ans2.length()-1;i >= 0;i--){
 		ans = ans << 1;
 		if(ans2[i] == '1'){
 			ans += 1;
		}
	}
	cout<<ans;
	return 0;
}