#include<bits/stdc++.h>
using namespace std;
long long n,x[200010];
char s[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long maxn=0,sum=0,minn=99999999999;
	long long ou=1,len=0;
	for(int i=1;i<=n;i++){
		char c;
		cin>>x[i]>>c;
		maxn=max(maxn,x[i]);
		minn=min(minn,x[i]);
		if(x[i]%2!=0){
			ou^=1;
		}
		s[len]=c;
		len++;
	}
	long long cnt=0;	
	if(ou==0&&n%2!=0){
		int i=0,j=len-1;
		while(i<=j){
			if(s[i]!=s[j]){
				cnt++;
			}
			i++;
			j--;
		}
		cout<<cnt*maxn;
	}else if((ou==0&&n%2==0)||(ou==1&&n%2==0)){
		int i=0,j=len-1;
		while(i<=j){
			if(s[i]!=s[j]){
				cnt++;
			}
			i++;
			j--;
		}
		cout<<cnt*minn;
	}else{
		int i=0,j=len-1;
		while(i<=j){
			if(s[i]!=s[j]){
				cnt++;
			}
			i++;
			j--;
		}
		cout<<cnt*x[1];		
	}
	return 0;
} 
