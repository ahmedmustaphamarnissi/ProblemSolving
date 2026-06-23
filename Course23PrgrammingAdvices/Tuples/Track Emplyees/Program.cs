using System;
class Program
{
    static void Main()
    {
        var employee1 = (Name: "Alice", Salary: 50000);
        var employee2 = (Name: "Bob", Salary: 60000);

        Console.WriteLine($"{employee1.Name} has {(employee1.Salary > employee2.Salary ? "higher" : "lower")} salary than {employee2.Name}");

        // Output: Alice has lower salary than Bob
        Console.ReadKey();
    }

}
