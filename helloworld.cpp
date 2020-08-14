#include <iostream>
#include <vector>
#include <string>
#include "rectangle.h"
#include <stdio.h>

using namespace std;

int main()
{
   vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

   for (const string& word : msg)
   {
      cout << word << " " << endl;
   }

   Rectangle r;
   r.set_values(10, 10);

   printf("Test1\n");
   printf("test2\n");
   cout << endl;
}