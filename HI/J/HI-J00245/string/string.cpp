#include <bits/stdc++.h>
using namespace std;
int a;
char b;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    long long n;
    cin >> n;
    char s[100005];
    int sum=1;
    int ans=1;
    int po=0;
    
    
   
    
    
    for(int i=1;i<=n;i++)
    {
    	
    	cin >> a;
    	cin >> b;
    	for(int j=1;j<=a;j++)
    	{
    		s[sum]=b;
    		sum++;
    		
		}
    	
    	
	}
	if((sum-1)/2==0){
        ans=(sum-1)/2;
    }
    else{
    	ans=(sum-1)/2;
	}
	int op;
	if((sum-1)/2==0){
        op=(sum-1)/2+1;
    }
    else{
    	op=(sum-1)/2+2;
	}

	for(int i=op;i<=sum-1;i++)
	{
		
		if(s[i]==s[ans])
		{
			ans--;
			
			continue;
		}
		else
		{
			po++;
			ans--;
			
			
		}
		
		
		
	}
	for(int i=1;i<=sum;i++)
	{
		cout << s[i];
		
	}
	
	cout << po;
	



	return 0;
	
	
	
}
