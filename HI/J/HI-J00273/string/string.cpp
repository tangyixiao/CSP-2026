#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b,cnt=0;
	cin>>n;
	char a;
	char str[10005],rts[10005];
	for(int i=1;i<=n;i++){
		cin>>b;
		cin>>a;
		for(int j=0;j<b;j++){
			str[cnt]=a;
			cnt++;
		}
	}
	int x=0;
	for(int i=cnt-1;i>=0;i--){
		rts[x]=str[i];
		x++;
	}
	cnt--;
	int y=0;
	while(1){
		if(str[cnt]!=rts[cnt]){
			y++;
		}
		else{
			cout<<y;
			return 0;
		}
		cnt--; 
	}
	return 0;
}
