#include<bits/stdc++.h> 
using namespace std;  
long long base2(long long n)
{
 if(n<2)
 return n;
 else
{
 return(n%2 + 10*base2(n/2)); 
} 
} 
int main() 
{
 ios::sync_with_stdio(0); 
 cin.tie(0);cout.tie(0);
 while(!cin.eof())
 {
 long long n;
 cin>>n;
 cout<<base2(n)<<'\n';
 }
}