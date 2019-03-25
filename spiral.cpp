#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <makefractal.h>
using namespace std;

	void Generate_Spiral()
	{

	int N=100000,i; 

	double m[3][6]=
	{{0.787879,-0.424242,1.758647,0.242424,0.859848,1.408065},
	{-0.121212, 0.257576,-6.721654,0.151515,0.053030,1.377236},
	{0.181818,-0.136364,6.086107,0.090909,0.181818,1.568035}};
	
	double x[N],y[N];
	x[0]=0;
	y[0]=0;

	int q,k;
	int tab[100001];
	
	fstream file;
	file.open("result.txt", ios::out);

	for(k=0; k<100001; k++)
	{
		q=(rand()%1000001);

		switch(q <= 895652)
		{

		case true:
		tab[k]=0;
		break;
		
		case false:

			switch(895652 < q < 947826)
			{
			case true: 
			tab[k]=1;
			break;

			case false:
			
				switch(q >= 947826)
				{
				case true:
				tab[k]=2;	
				break;
				}		
			}
		}
	}
	
	for(i=0;i<N;i++)
	{
		
		k=(rand()%3 * tab[rand()%100001]);
		

		x[i+1]=x[i]*m[k][0]+y[i]*m[k][1]+m[k][2];
		y[i+1]=x[i]*m[k][3]+y[i]*m[k][4]+m[k][5];
		file << x[i] << '\t' << y[i] << endl;
	}
		file.close();
		file.clear();
	}
