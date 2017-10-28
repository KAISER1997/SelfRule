//FAIL

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int store[200001]={0};
vector<int > arr[200001];
// struct node 
// {
// int a,int b;
// };
 
//  int store[111111]={0};
//  int a1[111111]={0};
//  int a2[111111]={0};
// struct node DFS(int start)
// {
// if(check[start]==0)
// {
// check[start]=1;
// int s=0;
// struct node v;
// if(brt[start]==1)
// {  v.a=1;
// 	v.b=0;
// }
// else
// {
// v.b=1;
// v.a=0;

// }
// for(int u=0;u<arr[start].size();u++)
// {
// struct node u=DFS(arr[start][u]);
// v.a=v.a+u.a;
// v.b=v.b+u.b;
// }
// a1[start]=v.a;
// a2[start]=v.b;
// return(v)
// }
// else
// {
// struct x;
// x.a=0; x.b=0;
// return(x);
// }
// }
 
 
int query;
int joj[200001];
int dumy[200001]={0};
int brt[200001]={0};
int  DFS(int start,int check[],int d)
{
if(check[start]==0)
{    //cout<<start<<" "<<d<<endl;
	check[start]=1;
	int sum=0;
for(int u=0;u<arr[start].size();u++)
{
sum=sum+DFS(arr[start][u],check,d*dumy[arr[start][u]]);
}
if(d==1)
{
	int u=0;
 if(brt[start]==1)
 sum=sum+1;

}
else
{
 if(brt[start]==0)
 sum=sum+1;
}
 joj[start]=sum;
return(sum);
}

else
return(0);
}

int main()
{
int n;
cin>>n;
int w1=1,w2;
for(int j=2;j<=n;j++)
{
int b;
cin>>b;
arr[b].push_back(j);
}
for(int y=1;y<=n;y++)
{ dumy[y]=1;
cin>>brt[y];
}
int jj;
cin>>jj;
for(int u=1;u<=jj;u++)
{
string gh;
int hg;
cin>>gh>>query;
if(gh=="pow")
	{   w1=1;
           //cout<<dumy[query]<<endl;
		dumy[query]=dumy[query]*-1;
	}
else
{
	int check1[200001]={0};
	if(w1==1)	{

DFS(1,check1,dumy[1]);
w1=2;
}

cout<<joj[query]<<endl;
 
 


}


}












}












