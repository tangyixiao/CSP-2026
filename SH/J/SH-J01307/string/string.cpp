#include <bits/stdc++.h>
using namespace std;
int a,c,cnt,res;
char b[5000000],d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>a;
	for (int i=0;i<a;i++){
		cin>>c>>d;
		for (int j=0;j<c;j++){
			b[cnt]=d;
			cnt++;
		}
	}
	cnt/=2;
	res=cnt;
	for (int i=0;i<cnt;i++){
		if (b[i]==b[2*cnt-i])res--;
	}
	cout<<res;
	return 0;
}
