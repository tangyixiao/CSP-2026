//#include <iostream>
#include <fstream>
 
using namespace std;

long long a[200020];
char b[200020];
long long sum=0;

int main()
{
	ifstream cin("string.in");
	ofstream cout("string.out");
	
	int n;cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long x;
		char y;
		cin>>x>>y;
		a[i] = x;
		b[i] = y;
	}
	
	long long l=1,r=n;
	while(r>l)
	{
		if(b[l]!=b[r]){
			if(a[l]==a[r])
			{
				sum+=a[r];
				l++;
				r--;
			}
			else{
				if(a[l]>a[r])
				{
					sum+=a[r];
					a[l]-=a[r];
					r--;
				}
				else{
					sum+=a[l];
					a[r]-=a[l];
					l++;
				}
			}
		}
		else{
			if(a[l]>a[r])
			{
				a[l]-=a[r];
				r--;
			}
			else{
				a[r]-=a[l];
				l++;
			}
		}
	}
	
	cout<<sum;
	
	return 0;
}