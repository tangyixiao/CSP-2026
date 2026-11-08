#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){ 
		int a;
		char b;
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			s+=b; 
		}
	}
	int left=0,right=s.size()-1,cnt=0;
	double m=s.size()/2;
	round(m);
	for(int i=1;i<=m;i++){
		if(left==right){
			break;
		}
		if(s[left]!=s[right]){
			cnt++;
			}
		left++;
		right--;
		
		
	}
	cout<<cnt;
	
	return 0;
}


