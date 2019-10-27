#include "stdafx.h"
#include "iostream"
using namespace System;
using namespace std;
int a[5];
void main()
{
  cout << "Finding Highest" << endl;
  // Reading array values from keyboard
  for(int i=0 ; i<5 ; i++){
      cout << "a["<<i<<"]=";
      cin >> a[i];
  }
  // Finding highest
  int max = a[0];
  for(int j=1 ; j<5 ; j++)
  {
    if( a[j] > max )
    {
      max = a[j];
    }
  }
  // Printing Array
  cout << "Printing Array" << endl;
  for(int i=0 ; i<5 ; i++){
    cout << a[i] << endl;
  }
  // Printing highest
  cout << "Highest number is "<<max;
  getchar();
}
