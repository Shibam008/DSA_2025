#include <iostream>
using namespace std;

int main() 
{
    //? Print this -> Shibam is a "good" boy;
    string s = "Shibam is a \"good\" boy";
    cout << s << endl;

    //? Print this -> / ;
    //cout << "\"; -> it will throw an error as no closing quote found
    cout << "\\";

    return 0;
}