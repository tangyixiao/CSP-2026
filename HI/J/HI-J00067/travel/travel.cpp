#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string ca,cb,wa,wb;
	cin>>ca>>wa>>cb>>wb;
	bool a=false,b=false,c=false,d=false;
	if(ca==cb)
	{
		a=true;
		string pa=wa.substr(0,2);
		string pb=wb.substr(0,2);
		if(pa==pb)
		{
			b=true;
			char ca=wa[2];
			char cb=wb[2];
			//cout<<c<<cb;
			if((ca>='A'&&ca<='C'&&cb>='A'&&cb<='C')||(ca>='D'&&ca<='F'&&cb>='D'&&cb<='F'))
			{
				c=true;
				if((ca=='D'&&cb=='F')||(ca=='D'&&cb=='F')||(ca=='A'&&(cb=='B'))||(ca=='B'&&(cb=='A'||cb=='C'))||(ca=='C'&&(cb=='B'))||(cb=='A'&&(ca=='B'))||(cb=='C'&&(ca=='B')))
				{
					d=true;
				}
				//cout<<(c=='D'&&cb=='F')<<" "<<(c=='D'&&cb=='F')<<" "<<(c=='A'&&(cb=='B'))<<" "<<(c=='B'&&(cb=='A'||cb=='C'))<<" "<<(c=='C'&&(cb=='B'))<<" "<<(cb=='A'&&(c=='B'))<<" "<<(cb=='C'&&(c=='B'));
			}	
		}
	}
	cout<<a<<b<<c<<d;
	return 0; 
 } 
