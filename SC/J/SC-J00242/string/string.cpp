#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
//	cin(0);
//	cout(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,num=0;
	cin>>n;
	string s1,s2,s;
	int f=0;
	for(int i=1;i<=n;i++){
		char x;
		int y;
		cin>>y>>x;
		for(int i=0;i<y;i++){
			s+=x;
		}
		num+=y;
	}
	int numn=num;
	if(num%2==0){
		numn=num/2;
	}
	else{
		numn=(num-1)/2;
	}

	for(int i=0;i<numn;i++){
		s1+=s[i];
	}
	for(int j=num;j>=numn;j--){
		if(num%2==1&&f==1){
			j++;
			f=0;
		}
		s2+=s[j];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	cout<<s1<<'\n'<<s2;
	
	return 0;
}