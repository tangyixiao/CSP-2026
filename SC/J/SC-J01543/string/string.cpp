#include<bits/stdc++.h>
using namespace std;
int n,num;
long long cut;
char zm;
vector<char>str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num>>zm;
		for(int j=0;j<num;j++){
			str.push_back(zm);
		}
	}
	for(long long i=0;i<str.size()/2;i++){
		if(str[i]!=str[str.size()-1]) cut++;
	}
	cout<<cut;
	return 0;
}