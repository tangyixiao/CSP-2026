#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[100005];
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	cout<<a[m-1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}//DP£¿Í°£¿ËâÄñ»¹ÊÇÆ­°É... 
