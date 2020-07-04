# Task_planner
Manage and distrbute time evenly between a number of tasks, dependant on how much free time the user has. This can be useful
when the user has a limited amount of free time and they want to evenly distrubute their time working on x tasks. And tasks
can be anything, such as a todo list, or hobbies the user wants to do in a day and spent time on each task with a fair amount
of time.


# Installation
    chmod u+x compile.sh
    ./compile.sh

# Usage
    ./task_planner h  - to show how instructions on how to use the program
    ./task_planner <hours> <minutes> <no_tasks>


will then output the average time to spend on each task.


# improvements

1. Allow tasks to have more "weight" than overs, so tasks with a greater weight will have more time to spend, than a task which has a lesser weight. Thus you can prioritise tasks and be able to spend more time on task with higher priority.
