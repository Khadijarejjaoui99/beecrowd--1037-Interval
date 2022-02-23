// solution of 1037 Interval problem using c++ from beecrowd website
#include <iostream>
using namespace std;
 
int main() {
    double X;
    cin >> X;
    if(X < 0 || X >100){
        cout << "Fora de intervalo"<<endl;
    }else if(X <=25){
       cout<< "Intervalo [0,25]"<<endl;
    }else if(X <=50){
       cout<< "Intervalo (25,50]"<<endl;
    }
    else if(X <=75){
       cout<< "Intervalo (50,75]"<<endl;
    }else{
        cout<< "Intervalo (75,100]"<<endl;
    }
    
    system("pause");
    return 0;
}
