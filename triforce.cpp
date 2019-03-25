#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <makefractal.h>
using namespace std;

	void Generate_Triforce()
	{

	int N=100000,i; 

	double m[3][6]=
	{{.5,0.,0.,.5,0.,0.},{.5,0.,0.,.5,.5,0.},{.5,0.,0.,.5,.25,sqrt(3.)/4}};
	
	double x[N],y[N];
	x[0]=0;
	y[0]=0;

	int q;
	
	fstream file;
	file.open("result.txt", ios::out);
	
	for(i=0;i<N;i++)
	{
		
		q=(rand()%3);
	
		x[i+1]=x[i]*m[q][0]+y[i]*m[q][2]+m[q][4];
		y[i+1]=x[i]*m[q][1]+y[i]*m[q][3]+m[q][5];
		file << x[i] << '\t' << y[i] << endl;
	}
		file.close();
		file.clear();
	}
