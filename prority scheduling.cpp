#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 
  
struct Process 
{ 
    int ccode;  //course code
    int duration; // class duration
    int priority; //priority
    int arrival_time;   //prefered arrival time
}; 
  
// sort the course to schedule based on priority
bool sortProcesses(Process a, Process b) 
{ 
	 
    return a.priority<b.priority; 
	
}
   

  

// Function to find the waiting time for classes
void findWaitingTime(Process proc[], int n, 
                     int waitingTime[]) 
{ 
    // waiting time for first class is 0 
    waitingTime[0] = 0; 
  
    // calculating waiting time 
    for (int  i = 1; i < n ; i++ ) 
        waitingTime[i] =  proc[i-1].duration + waitingTime[i-1] ; 
} 
  
// Function to calculate turn around time 
void findTurnAroundTime( Process proc[], int n, 
                         int waitingTime[], int tat[]) 
{ 
    
    for (int  i = 0; i < n ; i++) 
        tat[i] = proc[i].duration + waitingTime[i]; 
} 
  
//Function to calculate average time 
void findavgTime(Process proc[], int n) 
{ 
    int waitingTime[n], tat[n], total_wt = 0, total_tat = 0; 
  
    //Function to find waiting time of all processes 
    findWaitingTime(proc, n, waitingTime); 
  
    //Function to find turn around time for all processes 
    findTurnAroundTime(proc, n, waitingTime, tat); 
  
    
   
    for (int  i=0; i<n; i++) 
    { 
        total_wt = total_wt + waitingTime[i]; 
        total_tat = total_tat + tat[i]; 
    
    } 
  
    cout << "\nAverage waiting time = "
         << (double)total_wt / (double)n; 
    cout << "\nAverage turn around time = "
         << (double)total_tat / (double)n; 
} 
  
void priorityScheduling(Process proc[], int n) 
{ 
    // Sort processes by priority 
   sort(proc, proc + n, sortProcesses); 

   
	
    cout<< "Order Of Classes in which gets executed in Priority Scheduling\n"; 
    for (int  i = 0 ; i <  n; i++) 
        cout << proc[i].ccode <<" " ; 
  
    findavgTime(proc, n); 
} 
  
// Driver code 
int main() 
{ 
    Process proc[] = { {2201, 3, 2,1}, {3401, 2, 3,2}, {1103, 1, 1,3}}; 
    int n = sizeof proc / sizeof proc[0]; 
    priorityScheduling(proc, n); 
    return 0; 
}
