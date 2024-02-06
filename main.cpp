//
//  main.cpp
//  лаба 5 сем 2
//
//  Created by Andrey Scherbakov on 06.02.2024.
//

#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

const int n = 5;

int main()
{
   int s = 0;
   int c = 0;
   int avg = 0;
   int a[n][n];
 
   srand(time_t(NULL));
    cout<<"Исходный массив"<<"\n";
   for(int i = 0; i < n; i++)
   {
      for(int j = 0; j < n; j++)
      {
         a[i][j] = rand() % 200-100;
         cout << a[i][j]<<"\t";
      }
      cout << "\n";
   }
   
   for(int j = 1; j < n; j++)
   {
       for(int i = 0; i < n; i++){
           s += a[i][j-1];
           avg = s / n;
           
           if(a[i][j] > avg)
               c++;
           
                  }
       cout << "среднее арифметическое элементов " << j << "-го столбца: " << avg;
       cout << "\nколичство элементов " << j + 1 << "-го столбца больших " << avg;
       cout << ": " << c << "\n\n";

   }
}
