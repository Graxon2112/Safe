#include <iostream>
#include <string>

using namespace std;


int main()
{


    string code = "9797";
    string atempt = " ";
    string yes = "yes";
    string ys= " ";
    string no = "no";
    string n = " ";
    cout << "LOCKED"  <<endl;
    cin >> atempt;
    
    if(code ==  atempt)
    {
        cout << "Name:  Grayson Lane salerno "  <<endl;
        cout << "`

        cout << "would you like to change the code? if so type yes. if not type no."<<endl;
        cin >> ys;
        if(yes == ys)
        {  
            cin >> code;
            cout <<  "code is " + code <<endl;        
        }
        else 
        {
           cout << "alright, the code is  " + code <<endl;
        }    
   } 
   else
   {
       cout << "LOCKED " <<endl;
   }

}// end main











