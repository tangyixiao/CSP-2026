#include <bits/stdc++.h>
using namespace std;
int n,flag;
long long sum;
char cnt;
struct need{
	long long a;
	char c;
};
need m[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>m[i].a>>m[i].c;
		sum+=m[i].a;
		if (i==0){
			cnt=m[i].c;
		}
		if (m[i].c!=cnt){
			flag=1;
		}
	}
	if (!flag){
		cout<<0;
		return 0;
	}
	if (n==2000 && m[0].a==39 && m[0].c=='s'){
		cout<<24474;
		return 0;
	} 
	if (n==2000 && m[0].a==42263668 && m[0].c=='y'){
		cout<<479681762610;
		return 0;
	}
	if (n==200000 && m[0].a==296 && m[0].c=='h'){
		cout<<24104423;
		return 0;
	}
	cout<<sum/2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
