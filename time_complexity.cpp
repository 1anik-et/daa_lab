#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

void printTimeInBubbleSorting()
{
    int size;
    cout << "Enter the size.\n";
    cin >> size;
    int* a=new int[size];
    for(int i=size;i>=1;i--)
    {
        a[size-i]=i;
    }

    // cout << "The Original array is" << endl;
    // for(int i=0;i<size;i++)
    // cout << a[i] << endl;
    auto start = high_resolution_clock::now();
    //Applying Bubble Sorting
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j+1] < a[j])   
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    // cout << "The Sorted array is" << endl;
    // for(int i=0;i<size;i++)
    // cout << a[i] << endl;
    cout << "The time in seconds is"<< endl;
    cout << duration.count()/1000000.0 << endl;
    delete []a;
}

int main()
{
    printTimeInBubbleSorting();
    printTimeInBubbleSorting();
    printTimeInBubbleSorting();
    printTimeInBubbleSorting();
    printTimeInBubbleSorting();
    printTimeInBubbleSorting();
}