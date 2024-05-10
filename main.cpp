#define QUEUE_SIZE 5
int queue_table[QUEUE_SIZE] = {0};
int r_i=0;
int w_i=0;
int size=0;
int isQueueEmpty(void)
{
    return (size == 0) ? 1 : 0;
}
int isQueueFull(void)
{
    return (size == (QUEUE_SIZE)) ? 1 : 0;
}

int Remove(void)
{
    if (!isQueueEmpty())
    {
        int data = queue_table[r_i % QUEUE_SIZE];
        r_i++;
        size--;
        return data;

    }
    return 0;
}

int First(void)
{
    if (!isQueueEmpty())
    {
        return queue_table[r_i];
    }

    return queue_table[0];
}

void Add(int val)
{
    if (!isQueueFull())
    {
        size++;
        queue_table[w_i] = val;
        w_i=(w_i+1)%(QUEUE_SIZE);
    }
}

