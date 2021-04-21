1. Write program to print hello world.
    #include <iostream>

    using namespace std;

    int main()
    {
        cout<<"Hello World";

        return 0;
    }

    OUTPUT : Hello World
    


3. Write program to solve given equation y=x^2-2x+1.
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

4. Write program to calcuate area of circle.
    #include<bits/stdc++.h>
    
    using namespace std;
    
    int main()
    {
        float area, radius, pi=3.14;
        cout<< "Enter radius = ";
        cin >>radius;
        cout<<"Area = "<<float(area=(p*r*r));
        
        return 0;
    }
    
    OUTPUT : Enter radius = 5
             Area = 78.5 

5. Write a program to swap two given numbers.
    (solutin using temp variable)
        #include<bits/stdc++.h>

        using namespace std;

        int main()
        {
            int a,b,temp;
            cout <<"Enter the values of A and B" << "\n" ;
            cin >> a >> b;
            cout <<"Before swapping A = " << a << " B = " << b << "\n";
            temp = a;
            a = b ;
            b = temp;
            cout <<"After swapping A = " << a <<" B = "<<b;
    
            return 0;
        }
        
        OUTPUT : Enter the values of A and B
                 2
                 3
                 Before swapping A = 2 B = 3
                 After swapping A = 3 B = 2
        
     (solution without using temp variable)
        #include<bits/stdc++.h>

        using namespace std;

        int main()
        {
            int a,b;
            cout <<"Enter the values of A and B" << "\n" ;
            cin >> a >> b;
            cout <<"Before swapping A = " << a << " B = " << b << "\n";
            a=a+b;
            b=a-b;
            a=a-b;
            cout <<"After swapping A = " << a <<" B = "<<b;
    

            return 0;
        }
        
        OUTPUT : Enter the values of A and B
                 2
                 3
                 Before swapping A = 2 B = 3
                 After swapping A = 3 B = 2



