using System;

class Program
{
    static (bool Success, int Value) CheckStudentStatus(int input)
    {
        bool success = input >= 50 ? true : false;
        return (success, input);
    }
    static void Main()
    {
        var result = CheckStudentStatus(55);
        Console.WriteLine($"Success: {result.Success}, Value: {result.Value}");
        // Output: Success: True, Value: 55
        Console.ReadKey();
    }
}
