#include<bits/stdc++.h>
using namespace std;
map<int,char>o;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,t=0;
	char h;
	long long sum=0,l=0;
	string s;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		scanf("%c",&h);
		o[i]=h;
		l+=t;
		for(int j=1;j<=t;j++){
			s+=h;
		}
	}
	int flag=1;
	for(int i=0;i<s.size();i++){
		if(o[i+1]!=o[l+1-i]){
			flag=0;
			break;
		}
	}
	if(flag){
		printf("%d",0);
		return 0;
	} 
	else if(!flag){
	    for(int i=0;i<s.size();i++){
		    if(o[i+1]!=o[l+1-i]){
			    sum++;
		    }
	    }
	}
	printf("%d",sum);
	return 0;
}