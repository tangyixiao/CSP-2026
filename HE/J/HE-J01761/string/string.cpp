#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	string b,s1;
	while(n--){
		cin>>a>>b;
		while(a--){
			s1+=b;
		}
	}
	int s=0;
	bool f=true;
	for(int i=0;i<s1.size();i++){
		for(int j=s1.size()-1;j>=0;j--){
			if(i==j||i-j==1||j-i==1){
				f=false;
				break;
			}
			if(s1[i]!=s1[j]){
				s++;
				s1[i]=s1[j];
				i++;
				j--;
			}
		}
		if(f)
			break;
	}
	cout<<s;
	return 0;
}
