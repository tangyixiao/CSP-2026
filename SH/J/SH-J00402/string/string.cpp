#include<bits/stdc++.h>
#define int1 long long
using namespace std;
int1 n;
char ch[200005];
int1 nt[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int1 i=1;i<=n;i++){
		cin>>nt[i]>>ch[i];
	}
	int1 le=1,ri=n,ans=0;
	while(ri-le>0){
		if(ch[ri]==ch[le]){
			if(nt[le]>nt[ri]){
				nt[le]-=nt[ri];
				ri--;
			}
			else if(nt[le]==nt[ri]){
				ri--;
				le++;
			}
			else{
				nt[ri]-=nt[le];
				le++;
			}
		}
		else{
			if(nt[le]>nt[ri]){
				ans+=nt[ri];
				nt[le]-=nt[ri];
				ri--;
			}
			else if(nt[le]==nt[ri]){
				ans+=nt[ri];
				ri--;
				le++;
			}
			else{
				ans+=nt[le];
				nt[ri]-=nt[le];
				le++;
			}	
		}
	}
	cout<<ans;
	return 0;
} 
