#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
using namespace std;


void kiir(vector<double>tomb)
{
	vector<double>::iterator it;
	int i=1;
	for(it=tomb.begin(); it!=tomb.end();it++)
	{
		cout<< "PageRank: "<<i<<" "<<*it;
		i++;
	}
}

double tavolsag( vector<double>PR, vector<double>PRv)
{
	vector<double>::iterator pg = PR.begin();
	vector<double>::iterator pgt = PRv.begin();

	double osszeg=0;

	for(pg=PR.begin(); pg<PR.end();++pg)
	{
		osszeg+= abs(*pg - *pgt);
		pgt++;
	}
	return osszeg;
}

int main (void)
{

	bool a = true;

	vector<vector<double>> elemek =
	{
		{0.0, 0.0, 1.0 / 3.0, 0.0},
		{1.0, 1.0 / 2.0, 1.0/ 3.0, 1.0},
		{0.0, 1.0 / 2.0, 0.0, 0.0},
		{0.0, 0.0, 1.0 / 3.0, 0.0}
	};

	vector<double> PR = {0.0, 0.0, 0.0, 0.0};
	vector<double> PRv= {1.0/4.0, 1.0/4.0, 1.0/4.0, 1.0/4.0};
	vector<vector<double>>::iterator sor;
	vector<double>::iterator oszlop;

	int i=0;
	int j=0;

	while(1)
	{

		PR=PRv;
		
		for(sor=elemek.begin(); sor!=elemek.end(); ++sor)
		{
			PR[i]=PRv[i];

			double temp=0;

			for(oszlop = sor->begin(); oszlop!=sor.end();++oszlop)
			{
				
				temp+=*oszlop * PR[j];
				PRv[i]=temp;
				j++;
			}

			if(j%3)
			{
				j=0;
			}
			i++;
	}

		}

		if(tavolsag(PR, PRv)<0.00001)
			{
				break;
			}

	kiir(PR);
	return 0;
}