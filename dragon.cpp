#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <makefractal.h>
using namespace std;

void Generate_Dragon()
	{

	int N=100000,i; 

	double m[2][6]=
	{{0.824074,0.281428,-1.882290,-0.212346,0.864198,-0.110607},
	{0.088272,0.520988,0.785360,-0.463889,-0.377778,8.095795}};
	
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

		switch(q <= 787473)
		{

		case true:
		tab[k]=0;
		break;
		
		case false:

			switch(q > 787473)
			{
			case true: 
			tab[k]=1;
			break;
	
			}
		}
	}
	
	for(i=0;i<N;i++)
	{
		
		k=(rand()%2 * tab[rand()%100001]);
		

		x[i+1]=x[i]*m[k][0]+y[i]*m[k][1]+m[k][2];
		y[i+1]=x[i]*m[k][3]+y[i]*m[k][4]+m[k][5];
		file << x[i] << '\t' << y[i] << endl;
	}
		file.close();
		file.clear();
	
	}
