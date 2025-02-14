#include <iostream>
using namespace std;
int main()
{

    // int arr[3]=   {1,5,8};
    // Arrayindex=  0 1  2
    // cout<<arr[0];
    // cout<<arr[1];

    // int marks[6];
    // for(int i=1; i<=3;i++){
    //     cout<<"Enter the marks of :"<< i <<"th student "<<endl;
    //     cin >> marks[i];
    // }
    // for(int i=1;i<=3 ;i++){
    //     cout<<" THE MARKS OF "<<i<<"th students are as follow:"<<marks[i]<<endl;
    // }
    int arr2d[2][3] =
        {{1, 2, 3},
         {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The array of index:" << i <<","<< j << " is " << arr2d[i][j] << endl;
        }
    }
    return 0;
}
