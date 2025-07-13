/*#include<iostream>
using namespace std;
int main()
{
    int arr[5];

     
    for (int i=0; i<=4; i++)
    {
        cin >> arr[i];
    }

     
    for (int i=0; i<=4; i++)
    {
        cout << arr[i] << " ";
    }
}*/
/*--------------------------------------size of array------------------------------------------------*/
/*#include<iostream>
using namespace std;
int main()
{
    int arr[] = {21,34,45,22,67,88,99,80,57,34,56,66};
    int n = sizeof(arr);
    cout<<n;
}*/
/*---------------------------------------address of array-----------------------------------------------*/
/*#include<iostream>
using namespace std;
int main()
{
    int arr[] = {23,45,67,89,90};
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
}*/
/*-----------------------------------sum of ele in array-------------------------------------------------*/
/*#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,5,4,3,10};
    int sum = 0;
    for(int i = 0; i<=4; i++)
    {
        sum += arr[i];
    }
    cout<<sum;
}*/
/*--------------------------------------finding ele in array---------------------------------------------------------------*/
/*#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,5,4,3,56};
    int x;
    cout<<"Enter target :";
    cin>>x;
    for(int i = 0; i<=4; i++)
    {
        if(arr[i] == x)
        {
            cout << "element present"<<endl;
            break;
        }
        else
        {
            cout<<"element not present"<<endl;
            break;
        }
    }
    
}*/
/*--------------------------------------------finding largest ele in the array----------------------------------------------*/
/*#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,5,4,3,56,34,50,98,100,120};
    int mx = arr[0];
    
    for(int i = 1; i<10; i++)
    {
        if(mx< arr[i])
        {
            mx = arr[i];     //mx = max(mx,arr[i])
            
        }
        
    }
    cout<<"max element in the array is:"<< mx << endl;
    return 0;
    
}*/
/*----------------------------finding second largest ele---------------------------------------------------------------*/
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[] = {1,5,4,3,56,34,50,98,100,120};
    int mx = arr[0];
    int n = 10;
    
    for(int i = 1; i<n; i++)
    {
        if(mx< arr[i])
        {
            mx = arr[i];     //mx = max(mx,arr[i])
            
        }
        
    }
    
    int smx = INT_MIN;
    for(int i = 1; i<n; i++)
    {
        
        if(smx< arr[i] && arr[i]!=mx)
        {
            smx = arr[i];
        }
        
    }    
        
    cout<<" second max element in the array is:"<< smx << endl;
    return 0;
    
}*/
/*--------------count the no. of elements in the given array greater then x-------------------*/
/*#include<iostream>
using namespace std;
int main()
{
    int arr[] = {72,4,6,10,8,23,45,67,19,35};
    int n = 10;
    int x;
    int count = 0;
    cout << "Enter the element from the array:";
    cin >> x;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]>x) 
        {
            count++;
        }
    }
    cout << "number of ele greater than "<< x << " is " << count << endl;
    
}*/
/*----------------------doublet in the array whose sum is equal to x----------------------------------*/
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,6,-1,2};
    int n = 5;
    int x=10;
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n-1;j++)
        {
            if(arr[i] + arr[j] == x)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
           
        }
    }
    
}