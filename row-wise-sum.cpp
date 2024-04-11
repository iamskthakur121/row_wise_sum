#include<iostream>
using namespace std;

//to print row wise sum
void printSum(int arr[3][4],int i,int j){
    cout<<"Sum of there number row wise"<<endl;
    
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)

        {
            sum += arr[i][j];
        }
        
        cout<<sum<<" ";
    }
   

}


int main(){

    int arr[3][4];
    cout<<"Enter the number:";

    //taking input row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col <4; col++)
        {
            
            cin>>arr[row][col];
        }
        
    }

    //print 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0;j <4; j++)
        {
            
            cout<<arr[i][j] <<" ";
        }
        cout<<endl;
        
    }

    printSum(arr,3,4);

    return 0;


    
}