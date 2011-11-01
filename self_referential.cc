#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int isSelfReferential(int a[ ], int len)
{
  bool isSelf=true;
  if (isSelf)
    return 1;
  else
    return 0;
}
int main() 
{
  int a[] ={1, 2, 1, 0} ;//1 7 is the smallest prime in the array and there are 7 primes
  cout<<isSelfReferential(a,sizeof(a)/sizeof(int))<<endl;

  int b[]={2, 0, 2, 0};//1 3 is the smallest prime but there are 4 primes in the array
  cout<<isSelfReferential(b,sizeof(b)/sizeof(int))<<endl;

  int c[]={2, 1, 2, 0, 0};//0 the array must contain at least one prime
  cout<<isSelfReferential(c,sizeof(c)/sizeof(int))<<endl;

  int d[]={3, 2, 1, 1, 0, 0, 0};//0 3 is the smallest prime but there is only 1 prime in the array
  cout<<isSelfReferential(d,sizeof(d)/sizeof(int))<<endl;

  int e[]={4, 2, 1, 0, 1, 0, 0, 0};//1 3 is the smallest prime and there are 3 primes in the array
  cout<<isSelfReferential(e,sizeof(e)/sizeof(int))<<endl;

  int f[]={5, 2, 1, 0, 0, 1, 0, 0, 0};//0 the array must contain at least one prime.
  cout<<isSelfReferential(f,sizeof(f)/sizeof(int))<<endl;

  int g[]={6, 2, 1, 0, 0, 0, 1, 0, 0, 0};//0 the array must contain at least one prime.
  cout<<isSelfReferential(g,sizeof(g)/sizeof(int))<<endl;
  return 0;
}
