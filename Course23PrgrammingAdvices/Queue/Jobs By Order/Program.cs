
public class Progam
{
    public static void Main(string[] Args)
    {
        Console.Write("Enter How Many Jobs Do you Have : ");
        int n = Convert.ToInt32(Console.ReadLine());
        int counter= 0;
        Queue<string> Jobs = new Queue<string>(); 

        while (counter<n)
        {
            Console.Write($"Write Job {counter+1} : ");
            string Job = Console.ReadLine();
            Jobs.Enqueue(Job);
            counter++;
        }

        while (Jobs.Count > 0)
        {
            Console.Write($"Do you Complete {Jobs.Peek()} (y/n) ? ");
            string anser =Console.ReadLine();
            if (anser == "y")
            {
                Console.WriteLine($"Good Job ! ");
                Jobs.Dequeue();
            }
            else
            {
                Console.WriteLine("Go Back and do it ! ");
            }
        }
        Console.WriteLine("\n You Have Allready Finish all Jobs");
        Console.ReadKey();
        
    }
}
