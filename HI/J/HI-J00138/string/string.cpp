#include<bits/stdc++.h>
using namespace std;
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	string s,x;
	int n,a;
	cin>>n;

	for(int i =1;i<=n;i++){
		cin>>a;
		cin>>x;
		for(int j =1;j<=a;j++){
		s+=x;
		}
	}

	int p = s.size();
	int sum =0;
	for(int i=1;i<=s.size()/2;i++){
	
		if(s[i]!=s[p]){
			sum++;
		}
		p--;
	} 
	cout<<sum;
	return 0;
}
