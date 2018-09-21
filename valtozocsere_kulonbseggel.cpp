#include "std_lib_facilities.h"

int main()
{

  cout<<"Adja meg a 2 számot!\n";
  int elso;
  int masodik;

  cin>>elso>>masodik;
  
	elso = elso+masodik;
	masodik=elso-masodik;
	elso=elso-masodik;

 cout<<"Kivonas utan a 2 szam:"<<elso<<","<<masodik<<"\n";
}
