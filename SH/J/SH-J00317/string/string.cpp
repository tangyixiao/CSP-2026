#include<bits/stdc++.h>
using namespace std;
int x;
long long cnt;
struct N{
	long long m;
	char c;
} a[200010],b[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>a[i].m>>a[i].c;
	}
	for(int i=x-1,j=0;i>=0;i--,j++){
		b[j].m=a[i].m;
		b[j].c=a[i].c;
	}
	for(int i=0,j=0;i<x,j<x;){
		if(a[i].m>b[j].m){
			if(a[i].c!=b[j].c) cnt+=b[j].m;
			a[i].m-=b[j].m;
			j++;
		}
		else if(a[i].m<b[j].m){
			if(a[i].c!=b[j].c) cnt+=a[i].m;
			b[j].m-=a[i].m;
			i++;
		}
		else{
			if(a[i].c!=b[j].c) cnt+=a[i].m;
			i++;
			j++;
		}
	}
	cout<<cnt/2;
	return 0;
}
