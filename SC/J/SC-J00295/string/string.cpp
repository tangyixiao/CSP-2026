#include<bits/stdc++.h>
using namespace std;
const int mm=2*100000+10;
int pp[mm];
char lp[mm];
int n,ans=0;
signed main(){
	freopen("stirng.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	string a;
	int p;
	char op;
	for(int i=1;i<=n;i++){
		cin>>pp[i]>>lp[i];
	}
	int cnt=0,i=1,lll=n;
	while(lll>1){	
		if(lp[i]!=lp[n]){
			if(pp[i]<pp[n]){
				cnt+=min(pp[i],pp[n])	;
				pp[n]-=pp[i];
				
				pp[i]=0;
				i++;
				lll--;
			}else if(pp[i]>pp[n]){
				
				cnt+=min(pp[i],pp[n])	;
				pp[i]-=pp[n];
				pp[n]=0;
				n--;
				lll--;
					
			}else{
				i++;
				n--;
				lll-=2;	
				cnt+=max(pp[i],pp[n]); 
			}
		}else{
			i++;
			n--;
			lll-=2;
		}

	}
	cout<<cnt;
	return 0;
}/*

3
2 a
2 b
1 c
*/