using System;
using System.Collections.Generic;


class Program
{
    static Queue<int> CloneQueue(Queue<int> queue)
    {
        if (queue.Count == 0) return new Queue<int>();


        int front = queue.Dequeue();
        Queue<int> clone = CloneQueue(queue);
        queue.Enqueue(front);
        clone.Enqueue(front);
        return clone;
    }


    static void Main()
    {
        Queue<int> queue = new Queue<int>(new[] { 1, 2, 3, 4 });
        Queue<int> clonedQueue = CloneQueue(queue);
        Console.WriteLine(string.Join(", ", clonedQueue)); // Output: 1, 2, 3, 4
        Console.WriteLine(string.Join(", ", queue)); // Output: 1, 2, 3, 4
        Console.ReadKey();

    }
}