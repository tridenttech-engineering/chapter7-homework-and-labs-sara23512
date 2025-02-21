//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by <Sarah Yaser Navarrete> on <2/21/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{    double sales = 0.0;
     double rate = 0.055;
     double yearlySales = 0.0;   
     int year = 0;

 cout << "Enter the sales for year " << year << ": ";
 cin >> sales;
 while ( sales <= 150000.0)
     {
        yearlySales = sales * rate;
        sales += yearlySales;
        year += 1;
     }
 cout << fixed << setprecision(0);
 cout << "Sales: " << sales << endl;
 cout << "Years: " << year << endl;
 
    return 0;
} //end of main function
