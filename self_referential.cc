#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

int isSelfReferential(int a[ ], int len)
{
  for (int i=0;i<len;i++)
  {
    int count=0;
    for (int j=0;j<len;j++)
    {
      if ( i==a[j])
        count++;
    }
    if ( count!=a[i])
    {
      return 0;
    }
  }
  return 1;
}
int main() 
{
  int a[] ={1, 2, 1, 0} ;
  cout<<isSelfReferential(a,sizeof(a)/sizeof(int))<<endl;

  int b[]={2, 0, 2, 0};
  cout<<isSelfReferential(b,sizeof(b)/sizeof(int))<<endl;

  int c[]={2, 1, 2, 0, 0};
  cout<<isSelfReferential(c,sizeof(c)/sizeof(int))<<endl;

  int d[]={3, 2, 1, 1, 0, 0, 0};
  cout<<isSelfReferential(d,sizeof(d)/sizeof(int))<<endl;

  int e[]={4, 2, 1, 0, 1, 0, 0, 0};
  cout<<isSelfReferential(e,sizeof(e)/sizeof(int))<<endl;

  int f[]={5, 2, 1, 0, 0, 1, 0, 0, 0};
  cout<<isSelfReferential(f,sizeof(f)/sizeof(int))<<endl;

  int g[]={6, 2, 1, 0, 0, 0, 1, 0, 0, 0};
  cout<<isSelfReferential(g,sizeof(g)/sizeof(int))<<endl;

  int h[]={6, 2, 1, 0, 0, 0, 1, 0, 1, 0};
  cout<<isSelfReferential(h,sizeof(h)/sizeof(int))<<endl;
  /*
     1
     1
     1
     1
     1
     1
     1
     0
     */
  return 0;
}
