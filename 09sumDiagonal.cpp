#include <iostream>
using namespace std;

int main(){
    cout << "Enter row ";
    int enterRow;
    cin >> enterRow;
    cout << "Enter column ";
    int enterColumn;
    cin >> enterColumn;
    int x[enterRow][enterColumn];

    int sum =0;

    for(int i = 0; i < enterRow; i++){
        for(int j = 0; j < enterColumn; j++){
            cout<<"Enter value at "<<i<<" "<<j<<"\n";
            cin >> x[i][j];
        }
    }
    for(int i = 0; i < enterRow; i++){
        for(int j = 0; j < enterColumn; j++){
            cout<<x[i][j]<<" ";   
        }
        cout<<"\n";
    }

    for(int i = 0; i < enterRow; i++){
        for(int j = 0; j < enterColumn; j++){
            if(i==j){
                sum+=x[i][j];
            }
          
        }
        cout<<"\n";
    } 
    cout<<sum<<"\n";
    
    
}