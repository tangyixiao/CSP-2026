#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int q,k=0,l=1,r,L,k1=0,cnt=0;
	string s; 
	cin>>L;
	vector<int> a(L+1); 
	vector<char> c(L+1);
	for(int i=1;i<=L;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=L;i++){
		q=a[i];
		for(int j=1;j<=q;j++){
			s[k]=c[k1];
			k++;
		}
		k1++;
	}
	r=s.size()-1;
	while(l<r){
		if(s[l]!=s[r]){
			cnt++;
		}
		l++;
		r--;
	}
	cout<<cnt<<endl;
	
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
