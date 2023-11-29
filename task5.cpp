#include<iostream>
using namespace std;

void identity(int matrix[][3]);


main()
{
    int matrix[3][3];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            cout<<"Enter the element at position["<<x<<"]["<<y<<"]: ";
            cin>>matrix[x][y];
        }
    }
    identity(matrix);
}
void identity(int matrix[][3])
{
    cout<<"The matrix you entered is:"
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            cout<<matrix[x][y]<<"\t";
        }
        cout<<endl;
    }
    if(matrix[0][0]==1 && matrix[0][1]==0 &&  matrix[0][2]==0 && matrix[1][0]==0 && matrix[1][1]==1 &&  matrix[1][2]==0 && matrix[2][0]==0 && matrix[2][1]==0 &&  matrix[2][2]==1 )
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else 
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }
}