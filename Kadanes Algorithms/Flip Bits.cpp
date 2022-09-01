int flipBits(int *arr, int n)
{
    // WRITE YOUR CODE HERE

    int sum = 0, maxsum = 0, total = 0;
    // Your code goes here
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        total += arr[i];
        if (curr == 0)
        {
            curr = 1;
        }
        else
        {
            curr = -1;
        }
        sum += curr;
        sum = max(curr, sum);
        maxsum = max(sum, maxsum);
    }
    return (total + maxsum);
}