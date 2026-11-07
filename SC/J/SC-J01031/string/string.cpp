#include<bits/stdc++.h>
using namespace std;
bool huiwen(string a){
	bool f=true;
	string b;
	for(int i=a.size()-1;i>=0;i--){
		b+=a[i];
	}
	int len=a.size();
	while(len--){
		if(a[len]!=b[len]){
			f=false;
			break;
		}
	}
	return f;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,x;
	cin>>n;
	string a,s;
	while(n--){
		cin>>x>>a;
		for(int i=1;i<=x;i++){
			s+=a; 
		}
	}
	if(huiwen(s)){
		cout<<0;
		return 0;
	}
	int count=0;
	int len=s.size();
	int l,r;
	int mid=len/2+1;
	l=mid-1;
	r=len-l+1;
	while(1){
		if(s[r+1]!=s[l+1]){
			count++;
		}
		if(mid/2==1){
			break;
		}
		if(mid%2==0){
			mid=mid/2;
		}else{
			mid=mid/2+1;
		}
		l--;
		r++;
	}
	mid=mid/2;
	l=mid;
	r=len-l+1;
	if(s[r+1]!=s[l+1]){
		count++;
	}
	cout<<count;
	return 0;
}
