#include <bits/stdc++.h>
using namespace std;
int a[10000007];
char c[10000007];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0,cnt=0,mn=1e9;
	string s=" ";
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >>c[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	//cout << s<<"\n";
	int len=s.size()-1;
	if(len&1){
		int l=len/2,r=len/2+2;
	}else{
		int l=len/2,r=len/2+1;
		while(l>=1&&r<=len){
			if(s[l]!=s[r]) cnt++;
			l--;
			r++;			
		}		
	}
	cout << cnt;
	return 0;	
} 
