#include<iostream>

using namespace std;

struct Process
{
   int ccode;     // course code
   int duration;  // class duration
};

void avgwait(int n, float wait[])
{
  int totalwait=0;
  float avgwait;
  
  for(int i = 0; i<n; i++)
  {
      totalwait=wait[i]+totalwait;
  }
  
  cout<<endl;
  cout << "Average total wait: "<<(float)totalwait/(float)n;
  
};

void avgturn(int n, float wait[], Process proc[])
{
    int turntime[n];
    float avgturn;
    int tturn;
    
    for(int i = 0; i<n; i++)
    {
        turntime[i]=(proc[i].duration+wait[i]);
    }

    for(int i = 0; i<n; i++)
    {
        tturn= tturn+turntime[i];
    }
    
    cout<<endl;
    cout << "Average Turnaround time: "<<(float)tturn/(float)n;
    
};

int main()
{
    int n =3;
    Process proc[] = {{2201,3}, {3401,2}, {1103,1}};
    float wait[n];
    //double avgwait;
    
    cout << "Order of scheduling: ";
    
    for(int i = 0; i<n; i++)
    {
      cout << proc[i].ccode<<" ";
    }
    
    wait[0] = 0;
    
    for(int i = 1; i<n; i++)
    {
        wait[i]=wait[i-1]+proc[i-1].duration;
    }
    cout<<endl;
    
    avgwait(n, wait);
    cout<<endl;
    avgturn(n, wait, proc);
    
    return 0;
}
