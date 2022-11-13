        #include <iostream>
        using namespace std;
        int main() {
        int a = 0, b = 1;
        int n = 21;
        int next ;
        cout<<a<<" "<<b<<" ";
        for (int i = 0; i < n; i++)
        {
        next = a+b;
        if (next<=n){
            cout<<next<<" ";
            a = b;
            b = next;
        }
        
        }
        return 0;
        }


         /*   Fibonacci series of 1st 20 numbers
            #include <iostream>
            using namespace std;
            int main() {
            int a = 0, b = 1;
            int n = 20;
            int next ;
            cout<<a<<" "<<b<<" ";
            for (int i = 0; i < n; i++)
            {
               next = a+b;
               cout<<next<<" ";
                a = b;
                b = next;
            }

            return 0;
            } */