#include<bits/stdc++.h>
using namespace std;
char strs[999999999]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int zhizhen=1;
	int sum=0; 
	cin>>n;
	for(int i=1;i<=n;i++){
		int tmp=0;
		char a;
		cin>>tmp>>a;
		for(int j=1;j<=tmp;j++){
			strs[zhizhen++]=a;
		}
	}
	int cnt=0;
	if((zhizhen-1)%2==0){
		for(int i=1;i<=zhizhen/2;i++){
			if(strs[i]!=strs[zhizhen-i]){
				cnt++;
			}
		}
	}else{
		for(int i=1;i<=zhizhen/2;i++){
			if(strs[i]!=strs[zhizhen-i]){
				cnt++;
			}
		}
	}
	cout<<cnt; 
	return 0;
} 
