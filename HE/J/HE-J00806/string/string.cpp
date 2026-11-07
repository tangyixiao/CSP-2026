#include<iostream>
#include<cmath> 
#include<string>
#include<cstring>
using namespace std;
const int MAXN=2*1e5+10;
struct S{
	int lon;
	char f;
}str[MAXN];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>str[i].lon>>str[i].f;
	long long sum=0,l=0,r=n-1;
	while(l<r){
		long long cur=min(str[l].lon,str[r].lon);
		if(str[l].f!=str[r].f)sum+=cur;
			str[l].lon-=cur;
			str[r].lon-=cur;
			if(str[l].lon==0)
			l++;
			if(str[r].lon==0)
			r--;
	}
	cout<<sum;
	return 0;
} 
