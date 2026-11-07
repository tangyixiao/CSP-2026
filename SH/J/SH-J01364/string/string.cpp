#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int num[n];
	int res=0;
	char wd[n];
	int let=0;
	vector<char> str;
	for(int i=0;i<n;i++){
		cin>>num[i]>>wd[i];
		let+=num[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<num[i];j++){
			str.push_back(wd[i]);
		}
	}
	for(int i=0;i<let;i++){
		if(str[i]!=str[let-1-i]){
			str[let-1-i]=str[i];
			res+=1;
		}
	}
	cout<<res;
	return 0;
}
