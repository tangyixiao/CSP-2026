#include<bits/stdc++.h>
using namespace std;
int n,x_1;
bool z=1;
string s,x;

int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	cin>>n;
	int l=0;
	for(int i=1;i<=n;i++){
		cin>>x_1>>x;
		for(int j=1;j<=x_1;j++){
			s+=x;
		}
		l+=x_1;
	}
	int cnt=0;
	if(l%2==1){
		int i=l/2,j=i;
		while(1){
			i--,j++;
			if(s[i]!=s[j])cnt++;
			if(i==0){
				cout<<cnt;
				return 0;
			}
		}
	}
	else{
		int i=l/2-1,j=i+1;
		while(1){
			if(s[i]!=s[j])cnt++;
			if(i==0){
				cout<<cnt;
				return 0;
			}
			i--,j++;
		}
	}
	return 0;
}
