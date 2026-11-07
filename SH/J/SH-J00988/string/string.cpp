#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,l;
long long cnt;
struct node{
	long long x;
	char c;
}a[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long s;
		char ch;
		cin>>s>>ch;
		if(l==0){
			l++;
			a[l].x=s;
			a[l].c=ch;
		}else if(a[l].c==ch) a[l].x+=s;
		else{
			l++;
			a[l].x=s;
			a[l].c=ch;
		}
	}if(l==1){
		cout<<0;
		return 0;
	}int le=1,ri=l;
	while(le<ri){
		if(a[le].c!=a[ri].c){
			if(a[le].x>=a[ri].x){
				cnt+=a[ri].x;
				a[le].x-=a[ri].x;
				a[ri].x=0;
			}else{
				cnt+=a[le].x;
				a[ri].x-=a[le].x; 
				a[le].x=0;
			}
		}else if(a[le].c==a[ri].c&&a[le].x!=a[ri].x){
			if(a[le].x>=a[ri].x){
				a[le].x-=a[ri].x;
				a[ri].x=0;
			}else{
				a[ri].x-=a[le].x; 
				a[le].x=0;
			}
		}else{
			a[le].x=0;
			a[ri].x=0;
		}if(a[le].x==0) le++;
		if(a[ri].x==0) ri--;
	}cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
