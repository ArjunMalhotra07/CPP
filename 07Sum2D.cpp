#include <iostream>
using namespace std;

class sumofDig{
    private:
        int row;
        int column;
        int x[0][0];
        

    public:
        
        void assignValues(int r, int c){
            row = r;
            column = c;
        }
        // void name(){
        //     int x[row][column];
        // }
        void assignMatrix(){
            for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    cout<<"Enter value at "<<i<<" , "<<j<<"\n";
                    cin >> x[i][j];
                }
            }
        }
        void getMatrix(){
            for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    cout<<x[i][j]<<" ";

                }
                cout<<"\n";
            }
        }
};

int main(){
    cout << "Enter row ";
    int enterRow;
    cin >> enterRow;
    cout << "Enter column ";
    int enterColumn;
    cin >> enterColumn;
    sumofDig obj;
   
    obj.assignValues(enterRow,enterColumn);
    // obj.name();
    obj.assignMatrix();
    obj.getMatrix();
    
    
}