// Write program to print hello world.
    #include <iostream>

    using namespace std;

    int main()
    {
        cout<<"Hello World";

        return 0;
    }

    OUTPUT : Hello World
    
 

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



