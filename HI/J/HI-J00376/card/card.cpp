#include<bits/stdc++.h>
using namespace std;
int a[30000000];
int b[10000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];
	}
	if(m <= 9)
	{		
		for(int i = 0;i < n;i++)
		{
			string table = "";
			for(int j = i;j < n;j++)
			{
				
				int chu = a[j];
				int w = -1;
				for(int k = 0;k < table.length();k++)
				{
					if(int(table[k]-'0') == chu)
					{
						w = k;
					}
				}
				string table_c = "";	
				if(w == -1)
				{
					table+=char(chu+'0');
				}				
				else if(w == 0)
				{				
					table = char(chu+'0');				
				}
				else{
					for(int k = 0;k < w;k++)
					{
						table_c+=table[k];
					}
					table_c+=char(chu+'0');	
					table = table_c;		
				}
			}
			for(int k = 0;k < table.length();k++)
			{
				b[int(table[k]-'0')]++;
			}			
		}
		for(int i = 1;i <= m;i++)
		{
			cout << b[i] << " ";
		}
	}
	else{
		for(int i = 0;i < n;i++)
		{
			cout << 1 << " ";
		}
	}
	return 0;
}
