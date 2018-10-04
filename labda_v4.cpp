#include "std_lib_facilities.h"
int main()
{
	int x = 0;
	int y = 0; 

	int xmax=100; 
	int ymax = 50;
	
	int z;
	int w;

    while(true)
    {
    	w = abs((y%ymax)-(ymax/8));
    	for (int i = 0; i < w; i++)
    	{
    		cout << "\n";
    	}
    	z = abs((x%xmax)-(xmax/8));
    	for (int i = 0; i < z; i++)
    	{
    		cout << " ";
    	}
    	cout << "*";
    	for (int i = w; i < 1000 i++)
    	{
    		cout << "\n";
    	}
    	x++;
    	y++;
    }
}