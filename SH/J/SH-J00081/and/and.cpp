#include<bits/stdc++.h>
using namespace std;
int a[200005];
int p;
int e1,e2,e3,e4;
int main()
{	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]; 
		p=max(p,a[i]);
		if(a[i]==1)
		{
			e1++;		
		}
		else if(a[i]==2)
		{
			e2++;
		}
		else if(a[i]==3)
		{
			e3++;
		}
		else if(a[i]==4)
		{
			e4++;
		}
	}
	if(n<=20)
	{
		if(m==1)
		{	
			sort(a+1,a+n+1);
			cout<<a[n];	
		} 
		if(m==2)
		{	
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					ans=max(ans,a[i]&a[j]);
				}
			 } 
			 cout<<ans;
		}
		else if(m==3)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{
						ans=max(ans,a[i]&a[j]&a[z]);
					}
				}
			}
			cout<<ans;
		}
		else if(m==4)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							ans=max(ans,a[i]&a[j]&a[z]&a[u]);
						}
					}
				}
			}
			cout<<ans;
		}
		else if(m==5)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{
								ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]);
							}
						}
					}
				}
			}
			cout<<ans;
		}
		else if(m==6)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{
									ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]);
								}
							}
						}
					}
				}
			}
			cout<<ans;
		}
		else if(m==7)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{
										ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]);
									}
								}
							}
						}
					}
				}
			}
			cout<<ans;
		}
		else if(m==8)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{
											ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]);
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<ans;
		}
		else if(m==9)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{
												ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			cout<<ans;
		}
		else if(m==10)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{
													ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]);
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
			cout<<ans;
		}
		else if(m==11)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{
														ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]);
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
			cout<<ans;
		}
		else if(m==12)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{
															ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]);
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
			cout<<ans;
		}
		else if(m==13)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{	
															for(int t=s+1;t<=n;t++)
															{
																ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]&a[t]);
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
			cout<<ans;
		}
		else if(m==14)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{	
															for(int t=s+1;t<=n;t++)
															{	
																for(int w=t+1;w<=n;w++)
																{
																	ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]&a[t]&a[w]);
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
			cout<<ans;
		}
		else if(m==15)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{	
															for(int t=s+1;t<=n;t++)
															{	
																for(int w=t+1;w<=n;w++)
																{	
																	for(int q=w+1;q<=n;q++)
																	{
																		ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]&a[t]&a[w]&a[q]);
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
			cout<<ans;
		}
		else if(m==16)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{	
															for(int t=s+1;t<=n;t++)
															{	
																for(int w=t+1;w<=n;w++)
																{	
																	for(int q=w+1;q<=n;q++)
																	{	
																		for(int g=q+1;g<=n;g++)
																		{
																			ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]&a[t]&a[w]&a[q]&a[g]);
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
			cout<<ans;
		}
		else if(m==17)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{	
															for(int t=s+1;t<=n;t++)
															{	
																for(int w=t+1;w<=n;w++)
																{	
																	for(int q=w+1;q<=n;q++)
																	{	
																		for(int g=q+1;g<=n;g++)
																		{	
																			for(int r=g+1;r<=n;r++)
																			{ 
																				ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]&a[t]&a[w]&a[q]&a[g]&a[r]);
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
			cout<<ans;
		}
		else if(m==18)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{	
															for(int t=s+1;t<=n;t++)
															{	
																for(int w=t+1;w<=n;w++)
																{	
																	for(int q=w+1;q<=n;q++)
																	{	
																		for(int g=q+1;g<=n;g++)
																		{	
																			for(int r=g+1;r<=n;r++)
																			{ 	
																				for(int h=r+1;h<=n;h++)
																				{
																					ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]&a[t]&a[w]&a[q]&a[g]&a[r]&a[h]);
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
			cout<<ans;
		}
		else if(m==19)
		{
			int ans=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+1;j<=n;j++)
				{
					for(int z=j+1;z<=n;z++)
					{	
						for(int u=z+1;u<=n;u++)
						{
							for(int e=u+1;e<=n;e++)
							{	
								for(int f=e+1;f<=n;f++)
								{	
									for(int y=f+1;y<=n;y++)
									{	
										for(int d=y+1;d<=n;d++)
										{	
											for(int x=d+1;x<=n;x++)
											{	
												for(int v=x+1;v<=n;v++)
												{	
													for(int o=v+1;o<=n;o++)
													{	
														for(int s=o+1;s<=n;s++)
														{	
															for(int t=s+1;t<=n;t++)
															{	
																for(int w=t+1;w<=n;w++)
																{	
																	for(int q=w+1;q<=n;q++)
																	{	
																		for(int g=q+1;g<=n;g++)
																		{	
																			for(int r=g+1;r<=n;r++)
																			{ 	
																				for(int h=r+1;h<=n;h++)
																				{	
																					for(int m=h+1;m<=n;m++)
																					{
																						ans=max(ans,a[i]&a[j]&a[z]&a[u]&a[e]&a[f]&a[y]&a[d]&a[x]&a[v]&a[o]&a[s]&a[t]&a[w]&a[q]&a[g]&a[r]&a[h]&a[m]);
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
			cout<<ans;
		}
		else if(m==20)
		{
			int ans=a[1]; 
			for(int i=2;i<=n;i++)
			{
				ans&=a[i];
			}
			cout<<ans;
		}
	}
	else if(m==1)
	{
		sort(a+1,a+1+n);
		cout<<a[n];
	}
	else if(m==2)
	{	
		int ans=0; 
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
	}
	else if(m==n)
	{	
		int ans=a[1]; 
		for(int i=2;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
	}
	else if(m==n-1)
	{
		sort(a+1,a+1+n);
		int ans=a[2];
		for(int i=3;i<=n;i++)
		{
			ans&=a[i];
		}
		cout<<ans;
	} 
	else if(p<=4)
	{
		int ans=2&3; 
		if((e2+e3)<m)
		{
			if((e1+e3)>=m)
			{
				cout<<(1&3);
			}
			else
			{
				cout<<0;
			}
		} 
		else
		{
			cout<<ans; 
		}
	}
	else
	{
		sort(a+1,a+n+1);
		int ans=a[n-m+1]; 
		for(int i=n-m+1;i<=n;i++)
		{
			ans&=a[i];
		}
	}
	return 0;
}
