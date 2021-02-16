// This program demonstrates default function arguments.
#include <iostream>
using namespace std;


// So the displayStars produces different the different outputs because we state how many stars we want and also how many rows of the stars we want. We also seperated the commands to make it count how many stars it produces and how many rows of stars.


// Function prototype with default arguments
void displayStars(int cols = 10, int rows = 1);

int main()
{
   displayStars();      // Use default values for cols and rows.
   cout << endl;
   displayStars(5);     // Use default value for rows.
   cout << endl;
   displayStars(7, 3);
   cout << endl;  // Use 7 for cols and 3 for rows.
    displayStars(5,7);      // Use default values for cols and rows.
   return 0;


}

//********************************************************
// Definition of function displayStars.                  *
// The default argument for cols is 10 and for rows is 1.*
// This function displays a square made of asterisks.    *
//********************************************************
void displayStars(int cols, int rows)
{
   // Nested loop. The outer loop controls the rows
   // and the inner loop controls the columns.
   for (int down = 0; down < rows; down++)
   {
      for (int across = 0; across < cols; across++)
         cout << "*";
      cout << endl;
   }
}
