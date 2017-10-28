//floodfill fails

#include <bits/stdc++.h>
using namespace std;

int store[1111][1111]={0};
int arr[1111][1111]={0};
int k;
int m,n;
void floodfill(int x,int y,int op )
{
 
 if(op!=-2)
for(int g=1;g<=k;g++)
{
	if((x+g<m && arr[x+g][y]==-1) || x+g==m)
		break;
if(x+g<m && store[x+g][y]>store[x][y]+1 )
{store[x+g][y]=store[x][y]+1;
	if(g!=k)
		op=-2;
	else op=0;
floodfill(x+g,y,op);
}
else
break;
}

if(op!=2) 
for(int g=1;g<=k;g++)
{
	if((x-g>=0 && arr[x-g][y]==-1)||  x-g==-1)
		break;
if(x-g>=0 && store[x-g][y]>store[x][y]+1 )
{store[x-g][y]=store[x][y]+1;
	if(g!=k)
		op=2;
	else op=0;
floodfill(x-g,y,op);
}
else
break;
}


 
 if(op!=-1)
for(int g=1;g<=k;g++)
{
	if((y-g>=0 && arr[x][y-g]==-1)|| y-g==-1)
		break;
if(y-g>=0 && store[x][y-g]>store[x][y]+1 )
{store[x][y-g]=store[x][y]+1;
	if(g!=k)
		op=-1;
	else op=0;
floodfill(x,y-g,op);
}
else
break;
}


 
 if(op!=1)
for(int g=1;g<=k;g++)
{
	if((y+g<n && arr[x][y+g]==-1)|| y+g==n)
		break;
if(y+g<n && store[x][y+g]>store[x][y]+1 )
{store[x][y+g]=store[x][y]+1;
	if(g!=k)
		op=1;
	else op=0;
floodfill(x,y+g,op);
}
else
break;

}
}

int main()
{
	//ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
cin>>m>>n>>k;
cin.ignore();
for(int t=0;t<m;t++)
{
for(int t1=0;t1<n;t1++)
{
char a=getchar();
if(a=='.')
arr[t][t1]=1;
else arr[t][t1]=-1;
store[t][t1]=9999999;
}
getchar();
}
int x1,x2,y1,y2;
cin>>x1>>y1>>x2>>y2;
store[x1-1][y1-1]=0;
floodfill(x1-1,y1-1,0);
if(store[x2-1][y2-1]==9999999)
	cout<<"-1";
else
 cout<<store[x2-1][y2-1];

// for(int t=0;t<m;t++)
// {
// for(int t1=0;t1<n;t1++)
// {
// cout<<store[t][t1]<<" ";
// }
// cout<<endl;
//}
}