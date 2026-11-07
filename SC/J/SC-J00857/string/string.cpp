#include<iostream>
using namespace std;
struct ic{
	int l;
	char s;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i = 0;i < n;i++)
		cin>>a[i].l>>a[i].s;
	int i = 0,j = n - 1;
	unsigned long long s = 0;
	while(i < j){
		int len = min(a[i].l,a[j].l);
		if(a[i].s != a[j].s)
			s += len;
		a[i].l -= len;
		if(a[i].l == 0)
			i++;
		a[j].l -= len;
		if(a[j].l == 0)
			j--;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}