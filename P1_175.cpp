You are eagerly awaiting for the upcoming Technex event organized by IIT BHU Varanasi! However, you also have an assignment due. The deadline for the assignment is in 
Y
Y days, and it takes you 
X
X days to complete it.

Determine whether you can finish the assignment on or before the deadline.

Input Format
The input consists of two space-separated integers 
X
X and 
Y
Y, where:

X
X denotes the number of days required to complete the assignment.
Y
Y denotes the number of days remaining until the deadline.
Output Format
Print YES if you can complete the assignment on or before the due date, otherwise print NO

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

Input
Output
1 2
YES
Explanation:
You have 
2
2 days to complete the assignment, and it will take you only 
1
1 day to finish it.

Sample 2:
Input
Output
2 2
YES
	
	
	
	
	
	#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int X, Y;
cin>>X;
cin>>Y;
if( X<=Y ){
    cout<<"YES"<<endl;
}
else{
cout<<"No"<<endl;
}
}
