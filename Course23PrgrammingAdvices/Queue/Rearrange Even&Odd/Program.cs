
class Program
{
    static Queue<int> RerangeEvenAndOdd(Queue<int> queue)
    {
        Queue<int> OddHalf = new Queue<int>();
        Queue<int> EvenHalf = new Queue<int>();

        while (queue.Count > 0)
        {
            int num = queue.Dequeue();
            if (num % 2 == 0)
                EvenHalf.Enqueue(num);
            else
                OddHalf.Enqueue(num);
        }
        while (EvenHalf.Count > 0)
        {
            queue.Enqueue(EvenHalf.Dequeue());
        }
        while (OddHalf.Count > 0)
        {
            queue.Enqueue(OddHalf.Dequeue());
        }
        return queue;
    }
    static void Main(string[] Args)
    {
        Queue<int> Queue = new Queue<int>(new [] { 1, 2, 3, 4, 5, 6 });
        Queue = RerangeEvenAndOdd(Queue);
        Console.WriteLine(string.Join(" ", Queue));

        Console.ReadLine();
    }
}