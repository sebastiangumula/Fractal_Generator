#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <makefractal.h>
using namespace std;

void Generate_Fern()
	{

	int N=100000,i; 

	double m[4][6]=
	{{0.0,0.0,0.0,0.0,0.16,0.0},{0.85,0.04,0.0,-0.04,0.85,1.6},
	{0.2,- 0.26,0.0, 0.23,0.22,1.6},{-0.15,0.28,0.0,0.26,0.24,0.44}};
	
	double x[N],y[N];
	x[0]=0;
	y[0]=0;

	int q,k;
	int tab[1001];
	
	fstream file;
	file.open("result.txt", ios::out);

	for(k=0; k<1001; k++)
	{
		q=(rand()%1001);

		switch(q <= 11)
		{

		case true:
		tab[k]=0;
		break;
		
		case false:

			switch(11 < q <= 861)
			{
			case true: 
			tab[k]=1;
			break;

			case false:
	
				switch(861 < q <= 931)
				{
				case true: 
				tab[k]=1;
				break;
				
				case false:
				
					switch(q > 931 )
					{
					case true: 
					tab[k]=1;
					break;
					}
				}
			}	
		}
	}
	
	for(i=0;i<N;i++)
	{
		
		k=(rand()%4 * tab[rand()%1001]);
		

		x[i+1]=x[i]*m[k][0]+y[i]*m[k][1]+m[k][2];
		y[i+1]=x[i]*m[k][3]+y[i]*m[k][4]+m[k][5];
		file << x[i] << '\t' << y[i] << endl;
	}
		file.close();
		file.clear();
	
	}
