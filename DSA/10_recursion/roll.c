int rolling()
{ 
    // Function that returns a random value between 1 and 6
    rand(unsigned(time(NULL)));
    int dice = 1 + (rand() % 6);
    return dice;
}

int roll_dice(int num1, int num2)
{ 
    // it calls 'rolling function' twice
    int result1, result2;
    num1 = rolling();
    num2 = rolling();
    result1 = num1;
    result2 = num2;
    return result1, result2;
}
int main(void)
{
    int times, i, sum, n1, n2;
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11; // counters for each sum
    printf("Please enter how many times you want to roll the dice.\n");
    scanf("%i", &times);
}