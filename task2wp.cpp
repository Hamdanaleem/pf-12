#include<iostream>
using namespace std;
int sum_matrix(int matrix[][3],int row);




main()
{
    int row;
    const int col=3;
    cout<<"Enter row size: "<<endl;
    cin>>row;
    int matrix[row][col];
    cout<<"Enter the elements of the matrix:";
    for(int x=0; x<row; x++)
    {   for(int y=0; y<3; y++)
        {
        cout<<"Enter element at position ["<<x<<"]["<<y<<"]: ";
        cin>>matrix[x][y];
        }
    }
    int result=0;
    result=sum_matrix(matrix, row);
    cout<<"The sum of elements in the matrix is: "<<result;
}
int sum_matrix(int matrix[][3],int row)
{   
    int sum=0;
    for(int x=0; x<row; x++)
    {   
        for(int y=0; y<3; y++)
        {
            sum=sum+matrix[x][y];
        }

    }
    return sum;
}