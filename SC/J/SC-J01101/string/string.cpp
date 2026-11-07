#include<bits/stdc++.h>
using namespace std;
struct abc{
	char x;
};
int n,b,s=0,ss=0;
char c;
abc a[100000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b>>c;
		for(int j=1;j<=b;j++){
			s=s+1;
			a[s].x=c;
		}
	}
	for(int i=1,j=s;i<j;i++,j--){
	    if(a[i].x!=a[j].x){
	    	ss=ss+1;
		}
    }
    cout<<ss;
	return 0;
} 