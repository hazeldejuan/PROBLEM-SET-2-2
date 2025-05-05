#include <iostream>
using namespace std;

int main() {
    float L,W,A;
    
    cout << "Enter length of box: ";
    cin >> L;
    
    cout << "Enter width of box: ";
    cin >> W;
    
    A = L*W;
    
    cout << "The area of the box is: " <<A<< endl;
    cout <<"\n Box Representation\n";
    int intlength = static_cast<int>(L);
    int intwidth = static_cast<int>(W);
    
    for (int a = 0; a<intwidth; a++){
        for(int b = 0; b<intlength; b++){
            cout <<"*";
        }
        cout<<endl;
    }
    return 0;
}