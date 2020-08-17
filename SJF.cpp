#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Process
{
   int ccode;     // course code
   int duration;      // class duration
   int arrival_time;   //prefered arrival time
   int response_time; //response time
};

bool comparison(Process a, Process b)
{
    return (a.arrival_time < b.arrival_time);
}

bool comparison2(Process a, Process b)
{
    return (a.duration < b.duration);
}

void WaitingTime(Process proc[], int n, int wait_time[])
{
    
    wait_time[0] = 0;
 
    
    for (int i = 1; i < n ; i++)
    {
        wait_time[i] = proc[i-1].duration + wait_time[i-1] ;
    }
}
 

void TurnAroundTime(Process proc[], int n, int wait_time[], int turn_at[])
{
    
    for (int i = 0; i < n ; i++)
    {
        turn_at[i] = proc[i].duration + wait_time[i];
    }
}
 

void AverageTime(Process proc[], int n)
{
    int wait_time[n], turn_at[n], total_wait_time = 0, total_turn_at = 0;
 
    
    WaitingTime(proc, n, wait_time);
 
    
    TurnAroundTime(proc, n, wait_time, turn_at);
 
   
    for (int i = 0; i < n; i++)
    {
        total_wait_time = total_wait_time + wait_time[i];
        total_turn_at = total_turn_at + turn_at[i];
      
    }
 
    cout << "\nAverage waiting time = "
         << (float)total_wait_time / (float)n;
    cout << "\n\nAverage turn around time = "
         << (float)total_turn_at / (float)n;
}

int main()
{
	
	Process proc[] = {{2201,3,1,0}, {3401,2,2,0}, {1103,1,3,0}};
	int n = sizeof proc / sizeof proc[1];
	
	sort(proc, proc + n, comparison); 

	sort(proc+1, proc+n , comparison2);
	
	cout<<"Order in which processes get execute: \n";
	
	cout<<proc[0].ccode<<endl;
	cout<<proc[1].ccode<<endl;
	cout<<proc[2].ccode<<endl;
	
	AverageTime(proc, n);
	
	return 0;
}
