# Introduction

Describe the algorithms of your choice

Class Scheduling is a process used to perform the queue schedule of courses. It is implementing the non-preemptive algorithms which once a process is starting to run, the process cannot stop until it completes. There are several non preemptive algorithms involved such as First Come First Served (FCFS), Shortest Job First (SJF), and Priority Scheduling. 

First Come First Served (FCFS) is an algorithm that is easy to understand and implement in the process. The algorithm is implemented to help with a First In First Out (FIFO) queue. The data processes that arrive first become the head of the queue and get executed first. Meanwhile, the others data that arrive after are added to the rear of the queue. 

Shortest Job First (SJF) is the process with the burst time or duration first of the process. It is queued based on the burst time that needs to be included in the processes. The process with the least burst time will be processed first.     

Priority Scheduling is a method of scheduling processes that is based on the priority. Every process is selected to work as per the priority. The process with the highest priority will be executed first and followed by another priority. The same priority of the processes are executed in the FCFS. The process priority can be decided based on some requirement such as memory requirement and time requirement. 



# Consideration

The consideration of the class scheduling is the type of algorithms such as First Come First Served (FCFS), Round Robin, Shortest Job First (SJF), Shortest Remaining Time First (SRTF) and Priority Scheduling. Based on the project, we have considered some algorithms that included which are First Come First Served (FCFS), Shortest Job First (SJF) and Priority Scheduling. It is to implement in the project to analyze the average waiting time and average turnaround time of the class scheduling. 

# Analysis

## First Come First Served (FCFS)
### Output
The order of the course scheduling:
2201
3401
1103

Average waiting time: 2.66667

Average turnaround time: 4.66667

Based on the output, FCFS is the highest average waiting time and average turnaround time compared to SJF and Priority Scheduling. This is because the processes are short and there are no process will wait in the longer time. The output also has implementing the First In First Out queue in the process that influenced the order of the scheduling. 

## Shortest Job First (SJF)

### Output
The order of the course scheduling:
2201
1103
3401

Average waiting time: 2.33333

Average turnaround time: 4.33333

## Priority Scheduling 

### Output
The order of the course scheduling:
1103
2201
3401

Average waiting time: 1.66667

Average turnaround time: 3.66667

# Conclusion

In brief, based on the three algorithms processes, it indicates the different average waiting time and average turnaround time. For the average waiting time, Priority Scheduling has the shortest average waiting time compared to FCFS and SJF. Other than that, the highest average turnaround time is FCFS contrast to SJF and Priority Scheduling. 



