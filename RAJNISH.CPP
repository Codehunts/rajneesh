#include <iostream>
using namespace std;
int main
{
  int x=1, y=8;
  for (int i=0; i<8; i++){
       cout<<"   ";
  }
  for (int ii=0; ii<x; ii++){
      cout<<"*";
  }
  or (int iii=0; iii<y; iii++){
      cout<<" ";
  }
  for (int iiii=0; iiii<x; iiii++){
      cout<<"*";
  }
  for (int iii=0;iii<y; iii++){
      cout<<" ";
  }
  for (int iiii=0; iiii<x; iiii++){
       cout<<"*";
  }
  for (int iii=0; iii<y; iii++){
       cout<<" ";
  }
  for (int iiii=0; iiii<x; iiii++){
      cout<<"*";
  }
  x++;
  y--;
  cout<<"\n";
}
 x=50;
 y=0;
 for (int i=0; i<4; i++){
     for(int ii=0; ii<y; ii++){
	cout<<" ";
     }
     for (int ii=0; ii<y; ii++){
	 cout <<" ";
     }
     x -= 4;
     y += 2;
     cout <<"\n";
     }
     return 0;
 }