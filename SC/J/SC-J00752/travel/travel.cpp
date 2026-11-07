#include<bits/stdc++.h>
using namespace std;
struct p{
	int c;
	int l;
	char z;
};
p a[3];
int main()
{
	freopen("travel.in","r","in");
	freopen("travel.out","w","out");
	for(int i=1;i<=2;i++)
	{
		cin>>a[i].c>>a[i].l>>a[i].z;
	}
	if(a[1].c==a[2].c)
	{
		cout<<"1";
		if(a[1].l=a[2].l)
		{
			cout<<"1";
				if((a[1].z-a[2].z)==1)
				{
					cout<<"11";
					//cout<<a[1].l<<" "<<a[2].l;
					return 0;
				}
				if((a[1].z-a[2].z)==-1)
				{
					cout<<"11";
					return 0;
				}
				if((a[1].z-a[2].z)==2)
				{
					cout<<"10";
					return 0;
				}
				if((a[1].z-a[2].z)==-2)
				{
					cout<<"10";
					return 0;
				}
				cout<<"00";
				return 0;	
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
}