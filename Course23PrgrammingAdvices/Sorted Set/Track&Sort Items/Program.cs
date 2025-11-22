using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        SortedSet<string> shoppingCart = new SortedSet<string>
        {
            "Apple",
            "Banana",
            "Orange",
            "Apple" // Duplicate, won't be added
        };

        Console.WriteLine("Shopping cart items (sorted):");
        foreach (var item in shoppingCart)
        {
            Console.WriteLine(item);
        }

        Console.WriteLine("Press any key to exit...");
        Console.ReadKey();
    }
}