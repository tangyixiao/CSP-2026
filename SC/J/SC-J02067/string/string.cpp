#include <bits/stdc++.h>
using namespace std;
#define int long long
struct ak{
	int l,r;
	char a;
}ab[200005]={};
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,L=1,s=0,k,total=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>ab[i].l>>ab[i].a;
		ab[i].r=L+ab[i].l-1;
		L+=ab[i].l;ab[i].l=L-ab[i].l;
	}
	L--;k=n;
	for (int i=1;i<=n;i++){
		if (ab[i].l>L/2)break;
		if (ab[i].r>L/2){
			ab[i].r=L-ab[i].r;
			total=1;
		}
		int j2=L+1-ab[i].l,j1=L+1-ab[i].r;
		while(true){
			if (ab[k].r>=j2){
				if (ab[k].l<=j1){
					if (ab[k].a!=ab[i].a)s+=j2-j1+1;
					break;
				}else if (ab[k].a!=ab[i].a)s+=j2-ab[k].l+1;
			}else if (ab[k].l>j1&&ab[k].a!=ab[i].a)s+=ab[k].r-ab[k].l+1;
			else if(ab[k].l==j1&&ab[k].a!=ab[i].a){
				s+=ab[k].r-ab[k].l+1;k--;
				break;
			}else{
				if (ab[k].a!=ab[i].a)s+=ab[k].r-j1+1;
				break;
			}
			k--;
		}
		if (total)break;
	}
	cout<<s;
	return 0;
}