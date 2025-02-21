//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <Sarah Yaser Navarrete> on <2/21/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	    int day = 1;
        int totalText = 0; 
        int dailyText = 0;
        double average = 0.0;

 
 
     while (day < 8)
         { cout << "Enter the number of text messages for day " << day << ": " <<endl;
             cin >> dailyText;
           totalText += dailyText;
           day += 1;
         }
     average = static_cast<double>(totalText) / (day - 1);
     cout << fixed << setprecision(0);
     cout << endl << " The average number of text messages sent is: " << average << endl;


    return 0;
}   //end of main function