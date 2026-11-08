#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,q,h;
unsigned long long cnt;
int x[N],l[N],r[N];
char a[N];
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>a[i];
		l[i]=l[i-1]+1,r[1]=l[i]+x[i]-1;
	}
	m=r[n];
	for(int i=1,j=n;;){
//		cout<<i<<" "<<j<<" **";
//		for(int i=1;i<=n;i++) cout<<x[i]<<" ";
//		cout<<"\n";
		if(a[i]==a[j]){
			if(x[i]<x[j]){
//				q+=x[i],h+=x[i];
				x[j]=x[j]-x[i];
				i++;
//				cout<<"//11";
			}else if(x[i]==x[j]){
//				q+=x[i],h+=x[j];
				i++,j--;
//				cout<<"//12";
			}else{
//				q+=x[j],h+=x[j];
				x[i]=x[i]-x[j];
				j--;
//				cout<<"//13";
			}
		}else{
			if(x[i]<x[j]){
//				q+=x[i],h+=x[i];
				cnt+=x[i];
				x[j]=x[j]-x[i];
				i++;
//				cout<<"//21";
			}else if(x[i]==x[j]){
//				q+=x[i],h+=x[j];
				cnt+=x[i];
				i++,j--;
//				cout<<"//22";
			}else{
				q+=x[j],h+=x[j];
				cnt+=x[j];
				x[i]=x[i]-x[j];
				j--;
//				cout<<"//23";
			}
//			cout<<"\n";
		}
		if(i>=j) break;
	}
	cout<<cnt;
    return 0;
}
/*
2 a
2 b
1 2
*/
