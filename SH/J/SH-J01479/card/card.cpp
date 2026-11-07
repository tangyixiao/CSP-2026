#include<bits/stdc++.h>
using namespace std;
int main()
{freopen("card.in","r",stdin);
freopen("card.out","w",stdout);
int n,m;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++)cin>>a[n];
int r[m+1];
memset(r,0,m+1);
for(int i=0;i<n;i++)
{int b[m+1];
memset(b,0,m+1);
int c[n];
memset(c,0,n);
for(int j=i-1;j<n;j++)
{if(b[a[j]]==0)
{for(int k=0;k<n;k++)
{if(c[k]=0)
{c[n-1]=j;
b[a[j]]=1;
break;
}
}
}
else
{int x=0;
for(int k=0;k<n;k++)
{if(c[k]==a[j])
{x=k;
break;
}
}
for(int k=x;k<n;k++)c[k]=0;
c[x]=j;
b[a[j]]=1;
}
}
for(int j=1;j<=m;j++)
{if(b[j]==1)r[j]++;
}
}
for(int i=1;i<=m;i++)cout<<r[i]<<" ";
fclose(stdin);fclose(stdout);
return 0;
}
