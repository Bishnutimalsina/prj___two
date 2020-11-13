#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "main_menu.h"

using namespace std;

string localid = "";
MainMenu &MainMenu::mainprompt()
{
    string fileName = "";
    string str = "";
   
    cout << "Enter the file name: ";
    //User inputs file name
    cin >> fileName;
    ifstream infile;
    infile.open(fileName);
    if (!infile)
    {
        cout << "Cannot open the file: " << endl;
        
    }

    vector<string> maininput;
    
    while (getline(infile, str))
    {
        if(str.size() > 0){
            maininput.push_back(str);
        }
    }
    infile.close();

    for (int i = 0; i < maininput.size(); i++)
    {
        // if maininput[i] mathces csv -> fileparse
        //  maininput[i] matches input, select, -> queryparse
        cout << maininput[i] << endl;
    }

    // Users users1;
    // admins admins1;
    // manages manages1;
    // Tickets ticket1;
    // manages1.setempvector(managementFile);

    return *this;
}


