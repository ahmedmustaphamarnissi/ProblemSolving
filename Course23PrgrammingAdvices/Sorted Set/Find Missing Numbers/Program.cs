using System;
using System.Collections;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        SortedSet<int> numbers = new SortedSet<int> { 1, 2, 4, 5, 7 };

        for (int i = 1; i <= 7; i++)
        {
            if (!numbers.Contains(i))
            {
                Console.WriteLine($"Missing number: {i}");
            }
        }

        Hashtable ht = new Hashtable();
        ht.Add("Ahmed", DateTime.Now);
        

        Console.WriteLine("Press any key to exit...");
        Console.ReadKey();
    }
}

