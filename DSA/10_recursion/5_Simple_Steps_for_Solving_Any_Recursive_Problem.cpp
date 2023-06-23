/*
    1. what's the smiplest possible input and what is it's output?
    2. play around with examples and visualise
        tip: make lots of adjacent cases to identify the pattern easily
    3. relate complex cases to relatively simpler ones
    4. generalise the pattern
    5. write code by combining recursive pattern and base case
*/
/*
    Imagine you're standing in a cue at a grocer and there are x amount of people ahead of you. You want to find out what number you are in the cue. So in this highly hypothetical situation, you ask the person in front of you what his number in the cue is. If he were you, he'd do the same for the person in front of him.

    This whole process repeats until it reaches the person who is first in cue - known in the comp sci context as the 'base case' -, who then relays the information back to the previous person. That person increments the number by one, and this repeats itself until it gets to you, which is the exit condition - where the whole process of repeating stops.

    You increment the number by one and then you have the value that represents your position in the cue.

    That's recursion. It involves an implicit loop with an explicit exit condition.
*/