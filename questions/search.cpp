#include <iostream>
using namespace std;

class Search{
    public :
        void linearSearch(int numbers[5], int n){
            bool flag = false;
            for(int i = 0 ; i< 5; i++){
                if (numbers[i] == n){
                    flag = true;
                    break;
                }
            }
            if(flag){
                cout<< "Liner Search Found\n";
            }else{
                cout<< "Not Found \n";
            }
        }
        void binarySearch(int array[5], int n){
            bool flag = false;
            int start = 0;
            int end = 4;
            int mid = start + (end-start)/2;
            while(start <= end ){
                if(array[mid] == n){
                    flag  = true;
                    break;
                }else if(array[mid] < n){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
            if(flag){
                cout<< "Binary Search Found\n";
            }else{
                cout<< "Not Found \n";
            }
        }
      
};  
int main(){
    int inputArray[5];
    int n;
    cout << "5 Numbers \n";
    for(int i = 0; i< 5; i++){
        cin >> n;
        inputArray[i] = n;
    }
    cout << "Enter Number to be searched \n";
    cin >> n; 
    Search p;
    
    p.linearSearch(inputArray, n);
    // p.binarySearch(inputArray, n);

}