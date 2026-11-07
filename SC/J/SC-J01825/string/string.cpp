#include<bits/stdc++.h>
using namespace std;
string y;
char x;
long long n,m,sum;
bool s=true;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>m>>x;
		while(m--) y=y+x;
	}
	for(long long i=0;i<y.size()/2;i++){
		if(y[i]!=y[y.size()/2-i+1]){
			s=false;
			sum++;
		}
	}
	if(s=false){
		cout<<"0";
		return 0;
	}
	cout<<sum;
	return 0;
}