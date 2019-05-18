/*CASE 2 -Fixed principal payments and margin + parametrised, normally
distributed floating interest rate */
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <limits>
#include <string>
#include <cmath>
#include<iomanip>

using namespace std;
int main()
{
    double Pi, p, R, r;
    int FQ, month, year, i, N;
    
    cout<< "Provide Number of periods(only integer) "<<endl;//check for input errors do it later
    cin>>N;

    double Interest[N];
    double m;
    double mu;
    double sigma;
    
    cout<<" Insert Margin rate= ";
    cin>>m;
    cout<<endl;
    
    cout<<"insert Mean of the floating rates =";
    cin>>mu;
    cout<<endl;

    cout<<"Insert Standard Deviation of the Floating Rates =";
    cin>>sigma;
    cout<<endl;
    double floatinterest[N];
    double x, y, z[N], s;
    for(int i=0; i<=N-1;i++)
    {
        x = ((double) rand() * 2) / double(RAND_MAX) - 1;
        y = ((double) rand() * 2) / double(RAND_MAX) - 1;
        s = x * x + y * y;
        
        z[i] = x * sqrt(-2 * log(s) / s);
    }
    
    floatinterest[i] = m+(sigma*z[i]);
    cout<<floatinterest[i]<<endl;
    cout<<z<<endl;
    cout<<x<<endl;
    
 }
