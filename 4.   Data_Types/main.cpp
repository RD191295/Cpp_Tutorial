#include <iostream>
using namespace std;

int main()
{
    char grade ='A';  //char represent 1 single character. char is 1 byte
    string my_name = "Raj" ; //string is set of character

    int num = 1; // int can store whole decimal number (ex: 1,50,100 etc), int is 4 byte
    float flot_num = 1.5581;   // it can store float value like ( ex: 1.5,2.63,2.0), float is 4 byte

    double gpa = 2.53986 ; // double can store float value with more floating points, double size is 8 byte
    bool istrue= true; // bool can store either true or false value, it is 1 byte

    cout << "character data is look like :" << grade <<endl;   // char datatype
    cout << "string data is look like :" << my_name <<endl;   // string datatype

    cout << "integer data is look like :" << num<<endl;  //int datatype
    cout << "float data is look like :" << flot_num <<endl;  // float datatype

    cout <<"double data is look like :" << gpa <<endl;  // double datatype
    cout << "bool data is look like :" << istrue <<endl;  // bool datatype
    return 0;
}
