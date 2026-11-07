#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	int n,m;
	cin>> n;
	while(true){
	
		if(n/(10*m)==0||n/(10*m)==1||n/(10*m)==2||n/(10*m)==3||n/(10*m)==4||n/(10*m)==5||n/(10*m)==6||n/(10*m)==7||n/(10*m)==8||n/(10*m)==9){
			cout<<m/2;
			break;
		}
		else{
			m++;
		}
}
	
	
	

	return 0;
}
