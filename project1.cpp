#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{ 
	int n = 0;
	int rsum[10] = {0,0,0,0,0,0,0,0,0,0};
	int csum[10] = {0,0,0,0,0,0,0,0,0,0};
	int rmax = 0;
	int cmax = 0;
	int m[10][10];
	
    for(int i = 0; i<10; i++) 
    {
    	for(int j=0;j<10;j++)
    	{
    		m[i][j] = rand() % 5;
//        	printf(" %d ", n); 	
		}
	}
	
	for(int i = 0; i<10; i++) 
    {
    	for(int j=0;j<10;j++)
    	{
        	printf(" %d ", m[i][j]); 	
		}
		printf("\n");
	}
	
	printf("\n");
	printf("\n");
	
	for(int i = 0; i<10; i++) 
    {
    	for(int j=0;j<10;j++)
    	{
    		rsum[i] += m[i][j];
    		csum[j] += m[i][j];
    		
    		
//        	printf(" %d ", m[i][j]); 	
		}
//		printf("sum of row %d =" "%d", i, rsum);
//		printf("\n");
	}
	
	for(int i = 0; i<10; i++) 
    {	
		printf("sum of row %d =" "%d", i, rsum[i]);
		printf("\t");
		printf("sum of col %d =" "%d", i, csum[i]);
		printf("\n");
	}
	
	for(int i = 0; i<10; i++) 
    {	
		if(rmax < rsum[i])
		{
			rmax = rsum[i];
		}
		if(cmax < csum[i])
		{
			cmax = csum[i];
		}
	}
	printf("largest in row = %d", rmax);
	printf("\t");
	printf("largest in col = %d", cmax);
	
    return 0; 
} 
