#include<bits/stdc++.h>
using namespace std;
int number_fuel(int x[], int n, int L, int final_position)
{

    int NumberRefills = 0, currentRefills = 0, lastRefills = 0;
    if(x[currentRefills] + L >= final_position)
    {
        return NumberRefills;
    }
    while(currentRefills<= n)
    {
        lastRefills = currentRefills;
        while(currentRefills<=n && (x[currentRefills + 1] - x[lastRefills]<=L))
        {
            currentRefills  = currentRefills + 1;
        }
        if(currentRefills == lastRefills)
        {
            return -1;
        }
        if(currentRefills<=n)
        {
            NumberRefills += 1;
        }
        if(x[currentRefills] + L >= final_position)
        {
            return NumberRefills;
        }
    }
    return NumberRefills;
}
int main()
{
    int distination;
    cout<<"Final distance ";
    cin>>distination;
    cout<<endl;
    cout<<endl<<"Number of mile ";
    int L;
    //L  = how many space traveling after full the tank
    cin>>L;
    int n;
    cout<<"Number of fuel station have to less than 10: " ;
    cin>>n;
    //n = number of fuel station
    cout<<endl<<"Distance of each fuel station " ;
    int x[n];
    //x[n] = distance of fuel station
    x[0] = 0;
    for (int i = 1; i<=n; i++)
    {
        cin>>x[i];
    }

    int  result;
    result = number_fuel(x, n, L, distination);
    cout<<result;
    return 0;
}
