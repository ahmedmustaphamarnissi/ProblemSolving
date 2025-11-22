using System;
using System.Collections.Generic;


class Program
{
    static void Main()
    {
        Stack<string> DayStages = new Stack<string>();

        DayStages.Push("Start");
        DayStages.Push("Go to Gaz Station");
        DayStages.Push("Go To Super Market");
        DayStages.Push("Go To Work");
        DayStages.Push("Go To Cafe");
        DayStages.Push("Go Home");

        Console.WriteLine(string.Join(" -> ", DayStages.Reverse()));

        Console.WriteLine("\nBacktracking ...\n");

        while(DayStages.Count > 0){
            Console.WriteLine("Back To : " + DayStages.Pop());
        }

        Console.ReadKey();
    }
}
