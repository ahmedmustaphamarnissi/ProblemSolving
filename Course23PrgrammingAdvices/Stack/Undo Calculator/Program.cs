using System;
using System.Collections.Generic;

public class Program
{
    static string GetMethodName(char op)
    {
        List<char> Operations = new List<char> { '+', '-', '*', '/' };
        return op == Operations[0] ? "Add"
             : op == Operations[1] ? "Subtract"
             : op == Operations[2] ? "Multiply"
             : "Divide";
    }

    static float? Calculate(float sum, int num, char op)
    {
        return op switch
        {
            '+' => sum + num,
            '-' => sum - num,
            '*' => sum * num,
            '/' => num != 0 ? sum / num : null, 
            _ => null
        };
    }

    public static void Main(string[] args)
    {
        float sum = 0;
        Stack<float> history = new Stack<float>();
        string backChoice = "n";
        while (true)
        {

            if (history.Count > 0)
            {
                Console.Write("Do you want to go back (y/n)? ");
                backChoice = Console.ReadLine()?.Trim().ToLower();
            }

            if (backChoice == "y" && history.Count > 0)
            {
                sum = history.Pop();
                Console.WriteLine($"⏪ Reverted to last value: {sum}");
                continue;
            }

            Console.Write("Put Operation Method (+, -, *, /): ");
            char op = Console.ReadKey().KeyChar;
            Console.WriteLine();

            Console.Write($"Put Number to {GetMethodName(op)}: ");
            if (!int.TryParse(Console.ReadLine(), out int num))
            {
                Console.WriteLine("Invalid number. Try again.");
                continue;
            }

            float? result = Calculate(sum, num, op);
            if (result == null)
            {
                Console.WriteLine("❌ Invalid operation (possibly divide by zero).");
                continue;
            }

            history.Push(sum); 
            sum = result.Value;
            Console.WriteLine($"the result is  Result: {sum}\n");
        }
    }
}
