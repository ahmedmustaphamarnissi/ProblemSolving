
using System;
class Program
{
    static void Main()
    {
        int[][] studentMarks = new int[][]
        {
            new int[] { 90, 85, 88 }, // Student 1
            new int[] { 76, 80 },     // Student 2
            new int[] { 92, 93, 89, 85 } // Student 3
        };


        for (int i = 0; i < studentMarks.Length; i++)
        {
            Console.Write($"Student {i + 1}: ");
            Console.WriteLine(string.Join(", ", studentMarks[i]));

        }
        Console.ReadKey();
    }
}