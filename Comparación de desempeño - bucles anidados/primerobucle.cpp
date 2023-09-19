#include <iostream>
using namespace std;

#define MAX 4

int main()
{
    double A[MAX][MAX]={
                        {0,1,2,3},
                        {4,5,6,7},
                        {8,9,10,11},
                        {12,13,14,15}
    };
    double x[MAX]={1,2,3,4};
    double y[MAX]={0};
    
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            y[i] += A[i][j] * x[j];
    
    for (int i = 0; i < MAX; i++)
        for (int j = 0; j < MAX; j++)
            cout<<y[i]<<" ";
    y[MAX]={0};
    
    return 0;
}