#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "file_parser.h"
using namespace std;

string fileName = "employee.csv";
string str = "";
ifstream in;
in.open(fileName);
if (!infile)
{
    cout << "Cannot open the file: " << endl;
}

vector<vector<int>> employeetable(2, vector<int>(8, 0));
while (infile.good())
{
    
    //Resizing the vector based on dynamic  size with 8 columns
    employeetable.resize(no_of_lines - 2, vector<string>(8, 0));
    // no of parking lot is the row of the 2D vector
    for (int i = 0; i < no_of_lines; i++)
    {
        // 8 is for 8 columns 
        for (int j = 0; j < 8; j++)
        {
            infile >> empcol[i][j];
        }
    }
}
infile.close();
