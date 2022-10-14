#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() //main method
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,i,prod=1;
    cin >> n;  //taking input
long long i;
for(i=1;i<=n;i++)
prod*=i;     //calculating factoraial 
cout<<prod;
return 0;
}
