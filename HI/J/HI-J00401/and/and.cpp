#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	vector<int> s(a);
	int m=0;
	for(int i=0;i<a;i++){
		cin>>s[i];
		if(s[i]>=m){
			m=s[i];
		}
	}
	if(b==1){
		cout<<m;
		return 0;
	}
	if(b==2){
		int num=0;
		for(int i=0;i<a-1;i++){
			for(int j=i+1;j<a;j++){
				if(s[i]&s[j]>num){
					num=s[i]&s[j];
				}
			}
		}
		cout<<num;
	}
	else{
		cout<<0;
	}
	return 0;
}
