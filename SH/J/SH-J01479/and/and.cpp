#include<bits/stdc++.h> 
using namespace std;
int main()
{freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
int n,m,r=0;
cin>>n>>m;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
if(m==n)
{r=a[0];
for(int i=1;i<n;i++)r=r&a[i];
cout<<r;
return 0;
}
if(m==1)
{for(int i=0;i<n;i++)r=max(r,a[i]);
}
if(m==2)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{int k=a[i]&a[j];
r=max(r,k);
}
}
}
if(m==3)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{int l=a[i]&a[j]&a[k];
r=max(r,l);
}
}
}
}
if(m==4)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{int o=a[i]&a[j]&a[k]&a[l];
r=max(r,o);
}
}
}
}
}
if(m==5)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{int p=a[i]&a[j]&a[k]&a[l]&a[o];
r=max(r,p);
}
}
}
}
}
}
if(m==6)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{int q=a[i]&a[j]&a[k]&a[l]&a[o]&a[p];
r=max(r,q);
}
}
}
}
}
}
}
if(m==7)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{int s=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q];
r=max(r,s);
}
}
}
}
}
}
}
}
if(m==8)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{int t=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s];
r=max(r,t);
}
}
}
}
}
}
}
}
}
if(m==9)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{int u=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t];
r=max(r,u);
}
}
}
}
}
}
}
}
}
}
if(m==10)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{int v=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u];
r=max(r,v);
}
}
}
}
}
}
}
}
}
}
}
if(m==11)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{int w=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v];
r=max(r,w);
}
}
}
}
}
}
}
}
}
}
}
}
if(m==12)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{int x=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w];
r=max(r,x);
}
}
}
}
}
}
}
}
}
}
}
}
}
if(m==13)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{for(int x=w+1;x<n;x++)
{int y=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x];
r=max(r,y);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if(m==14)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{for(int x=w+1;x<n;x++)
{for(int y=x+1;y<n;y++)
{int z=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y];
r=max(r,z);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if(m==15)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{for(int x=w+1;x<n;x++)
{for(int y=x+1;y<n;y++)
{for(int z=y+1;z<n;z++)
{int b=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z];
r=max(r,b);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if(m==16)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{for(int x=w+1;x<n;x++)
{for(int y=x+1;y<n;y++)
{for(int z=y+1;z<n;z++)
{for(int b=z+1;b<n;b++)
{int c=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b];
r=max(r,c);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if(m==17)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{for(int x=w+1;x<n;x++)
{for(int y=x+1;y<n;y++)
{for(int z=y+1;z<n;z++)
{for(int b=z+1;b<n;b++)
{for(int c=b+1;c<n;c++)
{int d=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]&a[c];
r=max(r,d);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if(m==18)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{for(int x=w+1;x<n;x++)
{for(int y=x+1;y<n;y++)
{for(int z=y+1;z<n;z++)
{for(int b=z+1;b<n;b++)
{for(int c=b+1;c<n;c++)
{for(int d=c+1;d<n;d++)
{int e=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]&a[c]&a[d];
r=max(r,e);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
if(m==19)
{for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{for(int k=j+1;k<n;k++)
{for(int l=k+1;l<n;l++)
{for(int o=l+1;o<n;o++)
{for(int p=o+1;p<n;p++)
{for(int q=p+1;q<n;q++)
{for(int s=q+1;s<n;s++)
{for(int t=s+1;t<n;t++)
{for(int u=t+1;u<n;u++)
{for(int v=u+1;v<n;v++)
{for(int w=v+1;w<n;w++)
{for(int x=w+1;x<n;x++)
{for(int y=x+1;y<n;y++)
{for(int z=y+1;z<n;z++)
{for(int b=z+1;b<n;b++)
{for(int c=b+1;c<n;c++)
{for(int d=c+1;d<n;d++)
{for(int e=d+1;e<n;e++)
{int f=a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]&a[c]&a[d]&a[e];
r=max(r,f);
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
cout<<r;
fclose(stdin);fclose(stdout);
return 0;
}
