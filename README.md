Hi, this is me @AbuhurairahFaheem. 
(Welcome to AICP intership week 3 task of mine)
The cpp file(contain code for complete task).
Let's see task solution, followed by task description:

TASK DESCRIPTION{
A farmer records the milk production of a herd of cows. Every cow has a unique 3-digit identity
code. Each cow can be milked twice a day, seven days a week. The volume of milk from each
cow is recorded in litres correct to one decimal place (yield) every time the cow is milked. The
size of the herd is fixed. At the end of the week the total and the average yield for each cow for
that week is calculated.
The farmer identifies the cow that has produced the most milk that week. The farmer also
identifies any cows that have produced less than 12 litres of milk on four or more days that
week.
A program is required to record the yield for each cow every time it is milked, calculate the total
weekly volume of milk for the herd and the average yield per cow in a week. The program must
also identify the cow with the best yield that week and identify any cows with a yield of less than
12 litres of milk for four or more days that week.
Write and test a program or programs for the farmer.
Your program or programs must include appropriate prompts for the entry of data.
Error messages and other output need to be set out clearly and understandably.
All variables, constants and other identifiers must have meaningful names.
You will need to complete these three tasks. Each task must be fully tested.
TASK 1 – Record the yield.
Write a program for TASK 1 to record the milk yields for a week. The program records and
stores the identity code number and the yield every time a cow is milked.
TASK 2 – Calculate the statistics.
Using your recorded data from TASK 1, calculate and display the total weekly volume of milk for
the herd to the nearest whole litre. Calculate and display the average yield per cow in a week to
the nearest whole litre.
TASK 3 – Identify the most productive cow and cows that are producing a low volume of milk.
Extend TASK 2 to identify and display the identity code number and weekly yield of the cow that
has produced the most milk. Also identify and display the identity code numbers of any cows
with a yield of less than 12 litres of milk for four days or more in the week.
}

Solution{
Here in this task, I made a struct(dynamic) which contains Cow id(3-digit number'will be entered by user'), 
an array containing per day yield of cow,and total_yield(counter).
TASK#1:
Made a void function while passing argument(cow, size, total),
In this task, will ask from user a cow's ID and its per day yield (total 7 days, one by one) 
and will store it in respective/corresponding struct_attribute.
TASK#2:
Simply made a function of void type for task#2 while passing 3 arguments(cow, size, total),
for the stored data(in task#1) , will simply display the list of data(yield per cow, followed by its ID),
then display the total yield of current week(calculated in task#1) and then will display the 
average yield per cow(by dividing total yield with number of cows(size of herd already asked from user in task#1)).
TASK#3:
In this task, while using data from task#1, will simply find and display the cow's total yield and its ID with 
highest yield, and will check if any cow's total yield is less than 12 litters or not, if yes, then will display it's
id.
*At last will use 'delete[] cow' (cow is the struct array) to deletel dynamic memory(from heap).
THANKS FOR READING! 🙂
}
