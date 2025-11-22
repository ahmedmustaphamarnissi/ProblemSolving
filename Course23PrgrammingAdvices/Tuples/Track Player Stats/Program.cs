using System;
class Program
{
    static void Main()
    {
        var player = (Name: "Player1", Health: 100, Score: 2000);
        Console.WriteLine($"Name: {player.Name}, Health: {player.Health}, Score: {player.Score}");
        // Output: Name: Player1, Health: 100, Score: 2000
        Console.ReadKey();
    }
}
