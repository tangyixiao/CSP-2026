#include<bits/stdc++.h>
using namespace std;
long long cnt=0,size=0,mx=0;
int n,num;
char a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    string s; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num;
		cin>>a;
		for(int j=1;j<=num;j++){
			s+=a;
		}
		size+=num;
    }
    for(int i=0;i<size/2;i++){
    	if(s[i]!=s[size-i-1]){
    		cnt++;
		}
	}
	cout<<cnt;
	return 0;
}