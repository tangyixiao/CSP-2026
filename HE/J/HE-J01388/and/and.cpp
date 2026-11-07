#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],maxn=-1,ans=-1,maxnn;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(a[i],maxn);
	}
	maxnn=maxn;
	if(m==1)cout<<maxn;
	else if(m==2)
	{
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
		ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans=ans&a[i];
		}
		cout<<ans;
	}
	else if(m==n-1)
	{
		ans=-1;
		maxn=-1;
		bool f=false;
		for(int i=1;i<=n;i++)
		{
			f=false;
			ans=-1;
			for(int j=1;j<=n;j++)
			{
				if(j==i)continue;
				if(!f)
				{
					ans=a[j];
					f=true;	
				}	
				ans=ans&a[j];	
			}
			maxn=max(maxn,ans);
		}
		cout<<ans;
	}
	else if(m==3)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					ans=max(ans,a[i]&a[j]&a[k]);
				}
			}
		}
		cout<<ans;
	}
	else if(m==4)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						ans=max(ans,a[i]&a[j]&a[k]&a[l]);
					}
				}
			}
		}
		cout<<ans;
	}
	else if(m==5)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]);
						}
					}
				}
			}
		}
		cout<<ans;
	}
	else if(m==6)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
												ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
													ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
												{
													for(int v=u+1;v<=n;v++)
													{
														ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
												{
													for(int v=u+1;v<=n;v++)
													{
														for(int w=v+1;w<=n;w++)
														{
															ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
												{
													for(int v=u+1;v<=n;v++)
													{
														for(int w=v+1;w<=n;w++)
														{
															for(int x=w+1;x<=n;x++)
															{
																ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
												{
													for(int v=u+1;v<=n;v++)
													{
														for(int w=v+1;w<=n;w++)
														{
															for(int x=w+1;x<=n;x++)
															{
																for(int y=x+1;y<=n;y++)
																{
																	ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
												{
													for(int v=u+1;v<=n;v++)
													{
														for(int w=v+1;w<=n;w++)
														{
															for(int x=w+1;x<=n;x++)
															{
																for(int y=x+1;y<=n;y++)
																{
																	for(int z=y+1;z<=n;z++)
																	{
																		ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
												{
													for(int v=u+1;v<=n;v++)
													{
														for(int w=v+1;w<=n;w++)
														{
															for(int x=w+1;x<=n;x++)
															{
																for(int y=x+1;y<=n;y++)
																{
																	for(int z=y+1;z<=n;z++)
																	{
																		for(int b=z+1;b<=n;b++)
																		{
																			ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]);
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
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				for(int k=j+1;k<=n;k++)
				{
					for(int l=k+1;l<=n;l++)
					{
						for(int o=l+1;o<=n;o++)
						{
							for(int p=o+1;p<=n;p++)
							{
								for(int q=p+1;q<=n;q++)
								{
									for(int r=q+1;r<=n;r++)
									{
										for(int s=r+1;s<=n;s++)
										{
											for(int t=s+1;t<=n;t++)
											{
												for(int u=t+1;u<=n;u++)
												{
													for(int v=u+1;v<=n;v++)
													{
														for(int w=v+1;w<=n;w++)
														{
															for(int x=w+1;x<=n;x++)
															{
																for(int y=x+1;y<=n;y++)
																{
																	for(int z=y+1;z<=n;z++)
																	{
																		for(int b=z+1;b<=n;b++)
																		{
																			for(int c=b+1;c<=n;c++)
																			{
																				ans=max(ans,a[i]&a[j]&a[k]&a[l]&a[o]&a[p]&a[q]&a[r]&a[s]&a[t]&a[u]&a[v]&a[w]&a[x]&a[y]&a[z]&a[b]&a[c]);
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
	else cout<<maxnn;
	return 0;
}
