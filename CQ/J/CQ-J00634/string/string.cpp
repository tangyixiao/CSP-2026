#include<bits/stdc++.h>
using namespace std;
int main() {
freopen("string.in","r",stdin);
freopen("string.out","w",stdout); 
	int n;
	cin>>n;
	string s;
	for (int i=1;i<=n;i++){
		int cc;
		cin>>cc;
		string a1;
		cin>>a1;
		for (int i=1;i<=cc;i++){
			s+=a1;
		} 
	}
	if(s.size()%2){
		int sum=0;
		int i=s.size()/2;
		int j=i;
		while(i>=0&&j<s.size()){
			if(s[i]!=s[j]){
				sum++;
			}
			i--,j++;
		}
		cout <<sum;
	}else{
		int sum=0;
		int i=s.size()/2-1;
		int j=i+1;
		while(i>=0&&j<s.size()){
			if(s[i]!=s[j]){
				sum++;
			}
			i--,j++;
		}
		cout <<sum;		
	}
	return 0;
}
