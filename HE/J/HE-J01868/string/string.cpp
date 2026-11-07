#include<bits/stdc++.h>
using namespace std;
long long n,m,cnt=0;
const int N=1e5*2+1;
char s[N],x;
bool h(int y,char s[]){
	bool t=1;
	for(int i=0;i<y/2;i++){
		if(s[i]!=s[y-1-i]){
			t=0;
			break;
		}
	}
	if(t==1){
		return 1;
	}else{
		return 0;	
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int y=0;
	for(int i=0;i<n;i++){
		cin>>m>>x;
		while(m>0){
			m--;
			s[y]=x;
			y++;
		}
	}
	int f=0;
	for(int i=0;i<y/2;i++){
		if(h(y,s)){
			break;
		}
		cnt++;
		s[i]=s[y-i-1];
	}
	cout<<cnt;
	return 0;
}
