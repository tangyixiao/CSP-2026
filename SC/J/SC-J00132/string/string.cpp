#include<bits/stdc++.h>
using namespace std;
int len,cnt,n,b,cn;
char c;
char l[100005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b>>c;
		len+=b;
		for(int j=1;j<=b;j++){
			l[cn]=c;
			cn+=1;
		}
    }
    for(int i=0;i<=len/2;i++){
    	if(l[i]!=l[len-i-1]){
    		l[len-i-1]='0';
    		l[len-i-1]+=l[i];
    		cnt+=1;
		}
    }
    cout<<cnt;
}