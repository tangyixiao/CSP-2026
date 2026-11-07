#include<bits/stdc++.h>
using namespace std;
int main(){
	vector <int>s;
	int m,n,count=0;
	cin>>m>>n;
	int a[m],b;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		int b=a[i];
		s.push_back(b);
		for(int i=0;i<s.size();i++){
			if(s[i]==b){
				count=0;		
				count+=b;
				break;
			}else{
				count+=b;
				break;
			}
		}
		if(i==0){
			continue;
	}else{
		cout<<count<<" ";
	}
	}
		return 0;
} 

 
 
