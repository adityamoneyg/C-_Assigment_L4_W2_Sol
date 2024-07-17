#include<iostream>
using namespace std;
int notes[6] = {50, 20, 10, 5, 2, 1};
int count[6] = {0, 0, 0, 0, 0, 0};
int amount;
int main(){
    int amount;
    int notes[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    cout << "Enter the amount: ";
    cin >> amount;
    for(int i=0; i<6; i++){
        count[i] = amount / notes[i];
        amount = amount % notes[i];
    }
    cout << "Minimum number of notes: \n";
    for(int i=0; i<6; i++){
        cout << notes[i] << " : " << count[i] << "\n";
    }
    return 0;
}

//                          2 Solution

#include<iostream>
using namespace std;
int main( ) {
int a = 5, b, c ;
b = a = 15 ;
c = a < 15 ;
cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
}                                                     // a = 15, b = 15 , c = 0

//                          3 Solution

#include<iostream>
using namespace std;
int main() {
int x = 3 ;
float y = 3.0 ;
if (x == y)
cout <<"x and y are equal" ;
else
cout << "x and y are not equal" ;
return 0;
}                                          //  x and y are equal

//                          4 Solution

#include<iostream>
using namespace std;
int main(){
int test = 0;
cout << "First character " << '1' << endl;
cout << "Second character " << (test ? 3 : '1') << endl;
return 0;
}                                            //   First character 1   Second character 49

//                          5 Solution

#include <iostream>
using namespace std;
int main(){
int a = 18; int b = 12;
bool t = (a > 20 && b < 15)? true : false;
cout <<"Value of t: " << t ;
return 0;
}                                              // Value of t: 0

//                          6 Solution

#include <iostream>
using namespace std;
int main() {
int number = -4;
char result;
result = number > 0 ? 'P' : 'N';
cout << result << endl;
return 0;
}                                              //  Output is :- N