#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string main_string;
        cin >> main_string;

        for(int i=0; i<main_string.size(); i++)
        {
           string new_string = main_string.substr(0,i+1);

           size_t found = main_string.find(new_string);
           int d = found+1;
           int rep = 0;

           found = main_string.find(new_string,d);
           while(found != string::npos)
           {
              rep++;
              found = main_string.find(new_string,d);
              d=found+1;
           }

           if(rep*(i+1) == main_string.size())
           {cout << new_string  << endl; break;}
           else if(new_string==main_string) cout << main_string << endl;
        }

    }


}
