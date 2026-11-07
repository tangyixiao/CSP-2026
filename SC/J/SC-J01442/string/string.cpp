#include<bits/stdc++.h>
using namespace std;
struct strs{
	int len;
	char ch;
};
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a,cur_len=0,total_len=0;
	char c;
	cin>>n;
	int num=0;
	vector<strs> str(n);
	string s="";
	for(int i=0;i<n;i++){
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	for(int i=0;i<(s.size()+1)/2;i++){
		
		if(s[i]!=s[s.size()-1-i]) num++;
	}
	cout<<num;
	return 0;
}