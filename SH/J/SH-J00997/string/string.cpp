#include<bits/stdc++.h>
using namespace std;
long long n,a,cnt,l,y,f[200067];
char c;
struct A{
	long long a;
	char c;
}t[200067];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		t[++l].a+=a,t[l].c=c,y+=a;
	}
	for(long long i=1,g=0,j=l;i<=j;i++){
		while(t[i].a!=0){
			if(t[i].c!=t[j].c){
				if(t[i].a<t[j].a)cnt+=t[i].a,t[j].a-=t[i].a,t[i].a =0;
				else cnt+=t[j].a,t[i].a-=t[j].a,j--;
			}
			else {
				if(t[i].a<t[j].a)t[j].a-=t[i].a,t[i].a =0;
				else t[i].a-=t[j].a,j--;
			}
		}
	}
	cout<<cnt;
	return 0;
}
