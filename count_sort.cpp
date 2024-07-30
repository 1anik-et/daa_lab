#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
int main()
{
    int n;
    cout << "Enter the size."<<endl;
    cin >> n;
    cout << "Enter the array." << endl;
    int* a=new int[n];
    for(int i=0;i<n;i++)
    cin >> a[i];

    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max < a[i])
        max=a[i];
    }

    if(max < n)
    {
        cout << "The Original array is" << endl;
        for(int i=0;i<n;i++)
        cout << a[i] << " ";
        cout << endl;
        int freq[max+1];
        for(int i=0;i<max+1;i++)
        freq[i]=0;
        for(int i=0;i<n;i++)
        {
            freq[a[i]]++;
        }

        int k=0;
        auto start = high_resolution_clock::now();
        for(int i=0;i<max+1;i++)
        {
            while(freq[i]!=0)
            {
                a[k]=i;
                k++;
                freq[i]--;
            }
        }
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "The time in seconds is" << endl;
        cout << duration.count() << endl;
        // cout << "The Sorted array is" << endl;
        // for(int i=0;i<n;i++)
        // cout << a[i] << " ";
        // cout << endl;
    }
    else
    {
        cout << "Count Sort is not applicable." << endl;
    }
}