using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        SortedSet<int> sortedSet = new SortedSet<int> { 1, 2, 3, 4, 5 };
        var range = sortedSet.GetViewBetween(2, 4);

        Console.WriteLine(string.Join(", ", range)); // Output: 2, 3, 4
        Console.ReadKey();

    }
}
