# Game-two-stacks

Alexa has two stacks of non-negative integers, stack A and stack B where index 0 denotes the top of the stack. Alexa challenges Nick to play the
following game:
- In each move, Nick can remove one integer from the top of either stack A 
or stack B
- Nick keeps a running sum of the integers he removes from the two stacks.
- Nick is disqualified from the game if, at any point, his running sum becomes greater than some integer given at the beginning of the game.
- Nick's final score is the total number of integers he has removed from the two stacks.
Given A, B, and x for g games, find the maximum possible score Nick can achieve (i.e., the maximum
number of integers he can remove without being disqualified) during each game and print it on a new
line.

	INPUT FORMAT
The first line contains an integer g, (the number of games). The 3 g
subsequent lines describe each game in the following format:
1. The first line contains three space-seperated integers describing the respective values of n
(the number of integers in stack A), m (the number of integers in stack B), and x (the number that the
sum of the integers removed from the two stacks cannot exceed).
2. The second line contains n space-seperated integers describing the respective values of A0, A1, ...An-1
3. The third line contains m space-seperated integers describing the respective values of B0, B1, ...Bm-1

OUTPUT FORMAT
For each of the g games, print an integer on a new line denoting the maximum possible score Nick can
achieve without being disqualified