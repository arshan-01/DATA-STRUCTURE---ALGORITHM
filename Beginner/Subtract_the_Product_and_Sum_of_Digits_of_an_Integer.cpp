    #include <iostream>
    using namespace std;
    int main() {
            int integer ;
            int sum=0;
            int product=1;
            cout<<"Enter an integer: ";
            cin>>integer;
            while(integer!=0)
            {
            int digit = integer % 10;    
            integer  = integer /10;
            sum=sum+digit;
            product=product*digit;
            }
            cout<<product-sum<<endl;
           
    return 0;
            }