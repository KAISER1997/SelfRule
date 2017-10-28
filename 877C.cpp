#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
long long int n;
cin>>n;
long long int even=n/2;
long long int odd=n-even;
 
cout<<n+even<<endl;
for(long long int s=2;s<=n;s=s+2)
	cout<<s<<" ";
for(long long int s=1;s<=n;s=s+2)
	cout<<s<<" ";
for(long long int s=2;s<=n;s=s+2)
	cout<<s<<" ";

}