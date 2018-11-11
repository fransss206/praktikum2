#include <iostream>
using namespace std;

int main()
{
    int A,B,X,Y;
    cin >> A >> B ;
    X = A;
    Y = B;



    while(X !=Y){
       if (X < Y){
        X +=A;

       }else{
           Y +=B;
       }


    }
    cout << X;
}
