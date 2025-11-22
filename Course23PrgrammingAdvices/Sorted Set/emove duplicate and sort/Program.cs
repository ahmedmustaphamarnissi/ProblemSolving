using System;
using System.Collections.Generic;


class Program
{
    static void Main()
    {
        List<int> numbers = new List<int> { 5, 5, 3, 8, 8, 5, 2, 3, 1 };


        Console.WriteLine("All numbers:");
        foreach (var num in numbers)
        {
            Console.Write(num+" ");
        }


        SortedSet<int> uniqueSortedNumbers = new SortedSet<int>(numbers);


        Console.WriteLine("\nUnique and sorted numbers:");
        foreach (var num in uniqueSortedNumbers)
        {
            Console.Write(num+" ");
        }


        Console.WriteLine("\n\nPress any key to exit...");
        Console.ReadKey();
    }
}