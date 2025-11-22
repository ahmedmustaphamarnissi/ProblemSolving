using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        SortedSet<DateTime> activeUsers = new SortedSet<DateTime>();

        // Simulate user login times
        activeUsers.Add(new DateTime(2024, 11, 19, 10, 0, 0));
        activeUsers.Add(new DateTime(2024, 11, 19, 10, 15, 0));
        activeUsers.Add(new DateTime(2024, 11, 19, 10, 10, 0));

        Console.WriteLine("Active users login times (sorted):");
        foreach (var time in activeUsers)
        {
            Console.WriteLine(time);
        }

        Console.WriteLine("Press any key to exit...");
        Console.ReadKey();
    }
}
