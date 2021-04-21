// Write program to solve given equation y=x^2-2x+1.
    (solution without using power function)
        #include<iostream>
        
        using namespace std;
        
        int main()
        {
            int x,y;
            cout<< "Enter the value of x = ";
            cin>> x;
            y=(x*x)-(2*x)+1;
            cout<<"Result ="<< y;
            
            return 0;
        }
        
        OUTPUT : Enter the value of x = 4
                 Result = 9
 
    (solution using power function)
        #include<bits/stdc++.h>
        
        using namespace std;
        
        int main()
        {
            int x,y;
            cout<< "Enter the value of x = ";
            cin >> x ;
            cout<< "Result = "<< (y=pow(x,2)-(2*x)+1);
            
            return 0;
        }
        
        OUTPUT : Enter the value of x = 4
                 Result = 9
