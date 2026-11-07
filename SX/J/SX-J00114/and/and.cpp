#include <iostream>
using namespace std;
int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n,a,num=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a>num){
			num=a;
		}
		cout<<num<<" ";
	}
	return 0;
}