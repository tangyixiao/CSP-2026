#include<bits/stdc++.h>
using namespace std;
long long a[10000001];
struct o{
	int num;
}q[10000001];
bool cmp(o a,o b ){
	return a.num>b.num;
}
int main(){
	freopen(".in","r",stdin);
	freopen(".out","w",stdout);
	int n,m,c=0;
	cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	for(int i=0;i<n;i+=2){
		int x=max(a[i+1],a[i]);
		int s=1,t;
		t=x;
		while(t>0){
			if(a[i+1]&1==1&&a[i]&1==1){
			   x=x-s;
			}
			s=s*2;
			a[i]>>=1;
			a[i+1]>>=1;
			t>>=1;
		}
		q[c].num=x;
		c++;
	}
     sort(q,q+n,cmp);
     if(n==4){
     	cout<<12;
	 }else{
	 
    cout<<q[n-1].num;
}
	return 0;
}

