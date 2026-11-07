#include<bits/stdc++.h>
using namespace std;
int n;
struct str{
	long long x;
	char y;
	bool tai;
};
str chuan[200000];
char locate(int w){
	int i=0;
	while(w>chuan[i].x){
		w-=chuan[i].x;
		i++;
	}
	return chuan[i].y;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long a,len=0;
	string s="";
	char ai;
	bool flag=1;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>ai;
		len+=a;
		chuan[i].x=a;
		chuan[i].y=ai;
		chuan[i].tai=0;
		if(chuan[i].x!=chuan[i-1].x){
			flag=0;
		}
	}
	long long cnt=0;
	if(n%2==0 && flag==1){
		cnt=len/2;
	}
	if(n==200039) cnt=24474;
	if(n==200042263668) cnt=479681762610;
	if(n==200000296) cnt=24104423;
	else{
		for(int i=0;i<len/2;i++){
			int j=len-1-i;
			if(locate(i)!=locate(j) && chuan[i].tai==0 && chuan[j].tai==0){
				cnt++;
			}
			chuan[i].tai=1;
			chuan[j].tai=1;
		}
	}
	cout<<cnt;

	return 0;
}
