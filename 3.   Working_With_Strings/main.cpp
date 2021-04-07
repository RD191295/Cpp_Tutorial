#include <iostream>
using namespace  std;
int main()
{
   string pharase = "Hello,Techgear Community!" ;

    cout <<"Length of string is :" << pharase.length() << endl ; // to calculate length of string
    cout << pharase[0] << endl ; // access to single element of string ; index will start from 0 to n (length of string -1 )
    cout << pharase << endl;  // print string

    cout  << pharase.find("Tech",2) << endl; // find starting position of Particular word,letter or string

    cout << pharase.substr(0,15); // create sub string from main string



    return 0;
}



