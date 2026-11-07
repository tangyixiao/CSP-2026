#include<bits/stdc++.h>
using namespace std;
int num,cnt=0,ans=0;
string str="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>num;
	for(int i=0;i<num;i++){
		int aa;
		char cc;
		cin>>aa>>cc;
		cnt+=aa;
		for(int i=0;i<aa;i++){
			str=str+cc;
		}
	}
	int bb=cnt/2;
	if(cnt%2==1){
		for(int i=0;i<=cnt/2;i++){
			if(str[bb-i]!=str[bb+i]){
				ans++; 
			}
		} 
	}else{
		for(int i=0;i<cnt/2;i++){
			if(str[bb-i]!=str[bb+i-1]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}